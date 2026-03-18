/*
 * XREFs of KeInitializeMutant @ 0x1403A15E0
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x140261ADC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((__int64)Mutant, InitialOwner, 0, 0);
}
