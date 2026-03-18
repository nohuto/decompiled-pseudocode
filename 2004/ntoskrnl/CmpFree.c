/*
 * XREFs of CmpFree @ 0x14069E040
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14069E60C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
