/*
 * XREFs of IopApcHardError @ 0x14088CA50
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x14088D860 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
