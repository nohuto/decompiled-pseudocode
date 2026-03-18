/*
 * XREFs of KeInitializeMutantEx @ 0x1402FF780
 * Callers:
 *     NtCreateMutant @ 0x1406CB4F0 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(ULONG_PTR a1)
{
  return KiInitializeMutant(a1);
}
