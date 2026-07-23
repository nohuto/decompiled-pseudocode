/*
 * XREFs of _RtlpHpEnvAllocVA@36 @ 0x4B3723C3
 * Callers:
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpVaMgrAllocAligned@12 @ 0x4B37A9F0 (_RtlpHpVaMgrAllocAligned@12.c)
 *     _RtlCSparseBitmapStart@16 @ 0x4B37E275 (_RtlCSparseBitmapStart@16.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 * Callees:
 *     _NtAllocateVirtualMemoryEx@28 @ 0x4B2F30E0 (_NtAllocateVirtualMemoryEx@28.c)
 */

NTSTATUS __userpurge RtlpHpEnvAllocVA@<eax>(
        ULONG_PTR *a1@<edx>,
        PVOID *a2@<ecx>,
        int a3@<ebp>,
        int a4,
        int a5,
        ULONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  ULONG v10; // esi
  ULONG v11; // ecx
  _DWORD v13[9]; // [esp-38h] [ebp-44h] BYREF
  _DWORD v14[3]; // [esp-14h] [ebp-20h] BYREF
  PVOID *v15; // [esp-8h] [ebp-14h]
  PSIZE_T v16; // [esp-4h] [ebp-10h]
  int v17; // [esp+0h] [ebp-Ch]
  void *v18; // [esp+4h] [ebp-8h]
  void *retaddr; // [esp+Ch] [ebp+0h]

  v17 = a3;
  v18 = retaddr;
  v10 = a5 & 0xBFFFFFFF;
  v16 = a1;
  v15 = a2;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (a5 & 0x2000) == 0 )
    v10 = a5 & 0x9FFFFFFF;
  v11 = 0;
  if ( (v10 & 0x2000) != 0 )
  {
    v14[0] = 0;
    v14[1] = 0;
    v11 = 1;
    v13[1] = 0;
    v13[3] = 0;
    v13[2] = v14;
    v13[0] = 1;
    v14[2] = a4;
    if ( (v10 & 0x40000) != 0 )
      v10 &= ~0x40000u;
    if ( a9 )
    {
      v13[4] = 3;
      v11 = 2;
      v13[5] = 0;
      v13[7] = 0;
      v13[6] = a9;
    }
  }
  return NtAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFF,
           v15,
           v16,
           v10,
           a6,
           v11 != 0 ? (PMEM_EXTENDED_PARAMETER)v13 : 0,
           v11);
}
