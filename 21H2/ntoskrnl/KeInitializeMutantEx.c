/*
 * XREFs of KeInitializeMutantEx @ 0x14029E510
 * Callers:
 *     NtCreateMutant @ 0x1406B4F20 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(ULONG_PTR a1)
{
  return KiInitializeMutant(a1);
}
