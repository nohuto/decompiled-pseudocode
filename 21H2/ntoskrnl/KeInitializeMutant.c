/*
 * XREFs of KeInitializeMutant @ 0x140395540
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x1402ED1DC (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((ULONG_PTR)Mutant, InitialOwner, 0LL, 0LL);
}
