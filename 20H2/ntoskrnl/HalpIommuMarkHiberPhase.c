/*
 * XREFs of HalpIommuMarkHiberPhase @ 0x14099948C
 * Callers:
 *     HaliLocateHiberRanges @ 0x140999550 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x140387900 (PoSetHiberRange.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall HalpIommuMarkHiberPhase(PVOID MemoryMap)
{
  __int64 *i; // rbx
  PVOID *j; // rbx
  PVOID *k; // rsi
  void (__fastcall *v5)(PVOID, __int64, __int64 *); // rax

  for ( i = (__int64 *)HalpIommuList; i != &HalpIommuList; i = (__int64 *)*i )
  {
    v5 = (void (__fastcall *)(PVOID, __int64, __int64 *))i[38];
    if ( v5 )
      v5(MemoryMap, i[2], i + 46);
  }
  if ( MemoryMap )
  {
    PoSetHiberRange(MemoryMap, 2u, &IommupSystemContextListLock, 8uLL, 0x496C6148u);
    for ( j = (PVOID *)IommupSystemContextListHead; j != &IommupSystemContextListHead; j = (PVOID *)*j )
    {
      PoSetHiberRange(MemoryMap, 2u, j, 0x40uLL, 0x496C6148u);
      for ( k = (PVOID *)j[6]; k != j + 6; k = (PVOID *)*k )
        PoSetHiberRange(MemoryMap, 2u, k, 0x68uLL, 0x496C6148u);
    }
  }
}
