/*
 * XREFs of HalpExtEnvMarkHiberRegions @ 0x140388534
 * Callers:
 *     HaliLocateHiberRanges @ 0x140997620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1403881B0 (PoSetHiberRange.c)
 */

void __fastcall HalpExtEnvMarkHiberRegions(PVOID MemoryMap)
{
  __int64 *i; // rbx
  __int64 j; // rbx

  if ( MemoryMap )
  {
    for ( i = (__int64 *)ExtEnvLockList; i != &ExtEnvLockList; i = (__int64 *)*i )
      PoSetHiberRange(MemoryMap, 2u, i + 2, 8uLL, 0x496C6148u);
  }
  else
  {
    for ( j = ExtEnvAllocationList; (__int64 *)j != &ExtEnvAllocationList; j = *(_QWORD *)j )
      PoSetHiberRange(0LL, 0x10000u, *(PVOID *)(j + 16), *(_QWORD *)(j + 40), 0x496C6148u);
  }
}
