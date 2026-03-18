/*
 * XREFs of KeInitializeMutantEx @ 0x140360920
 * Callers:
 *     NtCreateMutant @ 0x140713620 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(ULONG_PTR a1)
{
  return KiInitializeMutant(a1);
}
