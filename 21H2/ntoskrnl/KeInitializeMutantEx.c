/*
 * XREFs of KeInitializeMutantEx @ 0x140261AC0
 * Callers:
 *     NtCreateMutant @ 0x1406F0080 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 */

__int64 __fastcall KeInitializeMutantEx(__int64 a1, __int64 a2, unsigned int a3)
{
  return KiInitializeMutant(a1, a2, 0LL, a3);
}
