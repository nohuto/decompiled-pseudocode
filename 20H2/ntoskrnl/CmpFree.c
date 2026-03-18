/*
 * XREFs of CmpFree @ 0x1407063A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x14070696C (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
