/*
 * XREFs of KeInitializeMutantEx @ 0x1402ED1C0
 * Callers:
 *     NtCreateMutant @ 0x1406DDC40 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(ULONG_PTR a1)
{
  return KiInitializeMutant(a1);
}
