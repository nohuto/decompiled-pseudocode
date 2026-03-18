/*
 * XREFs of CcUnregisterExternalCache @ 0x1404E48D0
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14038EEA0 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x1404E47D8 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache((__int64)P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
