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
        _SID_IDENTIFIER_AUTHORITY *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _DWORD *a10)
{
  NTSTATUS VirtualMemory; // esi
  ULONG_PTR v12; // [esp-10h] [ebp-4Ch]
  size_t v13; // [esp-4h] [ebp-40h]
  ULONG v14; // [esp+0h] [ebp-3Ch]
  size_t Size; // [esp+1Ch] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  Size = 12LL;
  if ( !a10 )
    return -1073741811;
  ms_exc.registration.TryLevel = 0;
  HIDWORD(v12) = &Size;
  LODWORD(v12) = 0;
  VirtualMemory = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFF, (PVOID *)&Size + 1, v12, (PSIZE_T)0x1000, 4u, v14);
  ms_exc.registration.TryLevel = -2;
  if ( VirtualMemory < 0 )
    goto LABEL_8;
  if ( HIDWORD(Size) )
  {
    LODWORD(v13) = Size;
    memset((void *)HIDWORD(Size), 0, v13);
    VirtualMemory = RtlInitializeSid((PSID)HIDWORD(Size), this, 1u);
    if ( VirtualMemory >= 0 )
    {
      *(_DWORD *)(HIDWORD(Size) + 8) = 18;
      *a10 = HIDWORD(Size);
      return 0;
    }
LABEL_8:
    if ( HIDWORD(Size) )
      WerpFreeSid(HIDWORD(Size));
  }
  return VirtualMemory;
}
