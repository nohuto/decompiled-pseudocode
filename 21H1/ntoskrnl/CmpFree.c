/*
 * XREFs of CmpFree @ 0x140697F70
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14069853C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
