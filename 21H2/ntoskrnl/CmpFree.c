/*
 * XREFs of CmpFree @ 0x1406A9460
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x140709E4C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
