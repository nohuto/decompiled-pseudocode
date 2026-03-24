/*
 * XREFs of IopApcHardError @ 0x140890E90
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140891C00 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
