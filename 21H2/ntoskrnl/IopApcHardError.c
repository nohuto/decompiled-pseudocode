/*
 * XREFs of IopApcHardError @ 0x140890FF0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140891D60 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
