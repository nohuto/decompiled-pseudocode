/*
 * XREFs of _WerpAllocateAndInitializeSid@44 @ 0x4B33AE87
 * Callers:
 *     _SendMessageToWERService@8 @ 0x4B33AB80 (_SendMessageToWERService@8.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _WerpFreeSid@8 @ 0x4B33B0D2 (_WerpFreeSid@8.c)
 */

int __thiscall WerpAllocateAndInitializeSid(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void **a10)
{
  int VirtualMemory; // esi
  size_t Size; // [esp+1Ch] [ebp-20h] BYREF
  void *v14; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  Size = 12;
  v14 = 0;
  if ( !a10 )
    return -1073741811;
  ms_exc.registration.TryLevel = 0;
  VirtualMemory = NtAllocateVirtualMemory(-1, (int)&v14, 0, (int)&Size, 4096, 4);
  ms_exc.registration.TryLevel = -2;
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( v14 )
  {
    memset(v14, 0, Size);
    VirtualMemory = RtlInitializeSid((int)v14, (int)this, 1u);
    if ( VirtualMemory >= 0 )
    {
      *((_DWORD *)v14 + 2) = 18;
      *a10 = v14;
      return 0;
    }
LABEL_8:
    if ( v14 )
      WerpFreeSid(v14);
  }
  return VirtualMemory;
}
