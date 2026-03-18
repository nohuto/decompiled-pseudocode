/*
 * XREFs of IopApcHardError @ 0x14088DD70
 * Callers:
 *     <none>
 * Callees:
 *     IopRaiseHardError @ 0x14088EB80 (IopRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall IopApcHardError(PIRP *P)
{
  IopRaiseHardError(P[4]);
  ExFreePoolWithTag(P, 0);
}
