/*
 * XREFs of CcUnregisterExternalCache @ 0x1404E4E80
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14038FA10 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x1404E4D88 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache((__int64)P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
