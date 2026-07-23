/*
 * XREFs of KeInitializeMutant @ 0x140395690
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x14029E52C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((ULONG_PTR)Mutant, InitialOwner, 0, 0);
}
