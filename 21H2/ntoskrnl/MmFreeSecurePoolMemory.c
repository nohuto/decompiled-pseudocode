/*
 * XREFs of MmFreeSecurePoolMemory @ 0x14059A9B4
 * Callers:
 *     MmAllocateSecurePoolMemory @ 0x14059A86C (MmAllocateSecurePoolMemory.c)
 *     PsDispatchIumService @ 0x1405E1764 (PsDispatchIumService.c)
 * Callees:
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiCountSystemPool @ 0x140352D90 (MiCountSystemPool.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiIsSystemVaAllocated @ 0x140598CA4 (MiIsSystemVaAllocated.c)
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
