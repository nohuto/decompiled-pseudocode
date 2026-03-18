/*
 * XREFs of HalpExtEnvMarkHiberRegions @ 0x14038DF04
 * Callers:
 *     HaliLocateHiberRanges @ 0x140A4EB20 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 */

void __fastcall HalpExtEnvMarkHiberRegions(PVOID MemoryMap)
{
  __int64 j; // rbx
  __int64 *i; // rbx

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
