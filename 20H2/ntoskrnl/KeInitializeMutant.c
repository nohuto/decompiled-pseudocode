/*
 * XREFs of KeInitializeMutant @ 0x1403950D0
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14036093C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((ULONG_PTR)Mutant, InitialOwner, 0LL, 0LL);
}
