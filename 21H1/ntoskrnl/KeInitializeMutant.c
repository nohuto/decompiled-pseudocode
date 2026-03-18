/*
 * XREFs of KeInitializeMutant @ 0x1402DEBD0
 * Callers:
 *     NtCreateMutant @ 0x140679390 (NtCreateMutant.c)
 * Callees:
 *     KiInitializeMutant @ 0x1402DEBE8 (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant(Mutant, InitialOwner, 0LL);
}
