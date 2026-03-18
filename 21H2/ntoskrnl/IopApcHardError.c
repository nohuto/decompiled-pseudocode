/*
 * XREFs of IopApcHardError @ 0x140933BE0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140934B80 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
