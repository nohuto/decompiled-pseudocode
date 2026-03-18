/*
 * XREFs of MmFreeSecurePoolMemory @ 0x14053F3E4
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x14053F29C (MmAllocateSecurePoolMemory.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiReturnSystemVa @ 0x1402AA5DC (MiReturnSystemVa.c)
 *     MiCountSystemPool @ 0x1402B1B40 (MiCountSystemPool.c)
 *     MiClearNonPagedPtes @ 0x1402F1DCC (MiClearNonPagedPtes.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x140537DF4 (MiIsSystemVaAllocated.c)
 */

__int64 __fastcall MmFreeSecurePoolMemory(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  int SystemRegionType; // eax
  unsigned int v7; // esi
  __int64 result; // rax

  SystemRegionType = MiGetSystemRegionType(BugCheckParameter2);
  if ( SystemRegionType != 15 )
    KeBugCheckEx(0x1Au, 0x5402uLL, BugCheckParameter2, BugCheckParameter3, SystemRegionType);
  if ( !(unsigned int)MiIsSystemVaAllocated() )
    KeBugCheckEx(0x1Au, 0x5403uLL, BugCheckParameter2, BugCheckParameter3, 0LL);
  v7 = a3 | 0x4000;
  if ( (a3 & 0x8000) == 0 )
    v7 = a3;
  result = MiClearNonPagedPtes(BugCheckParameter2, BugCheckParameter3 >> 12, v7, 3u);
  if ( result )
    result = MiCountSystemPool(15, result, 0);
  if ( (v7 & 0x8000) != 0 )
    return MiReturnSystemVa(BugCheckParameter2, BugCheckParameter2 + BugCheckParameter3, 15);
  return result;
}
