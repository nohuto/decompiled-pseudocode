/*
 * XREFs of MiEnablePagingTheExecutive @ 0x140A528E4
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     MiEnablePagingOfDriver @ 0x14078E6B0 (MiEnablePagingOfDriver.c)
 *     MiLockPagableSections @ 0x140A52934 (MiLockPagableSections.c)
 */

__int64 MiEnablePagingTheExecutive()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    *((_DWORD *)i + 26) |= 0x400000u;
    MiEnablePagingOfDriver((__int64)i);
    result = MiLockPagableSections(i, 1LL);
  }
  return result;
}
