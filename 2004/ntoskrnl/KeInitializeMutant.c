/*
 * XREFs of KeInitializeMutant @ 0x140392C10
 * Callers:
 *     <none>
 * Callees:
 *     KiInitializeMutant @ 0x1402FF79C (KiInitializeMutant.c)
 */

void __stdcall KeInitializeMutant(PRKMUTANT Mutant, BOOLEAN InitialOwner)
{
  KiInitializeMutant((ULONG_PTR)Mutant, InitialOwner, 0LL, 0LL);
}
