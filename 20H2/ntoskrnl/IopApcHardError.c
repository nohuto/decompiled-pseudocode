/*
 * XREFs of IopApcHardError @ 0x1408938C0
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x140894640 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
