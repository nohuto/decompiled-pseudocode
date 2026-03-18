/*
 * XREFs of CcUnregisterExternalCache @ 0x140539D20
 * Callers:
 *     <none>
 * Callees:
 *     CcDeductDirtyPagesFromExternalCache @ 0x14039EA50 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcRemoveExternalCache @ 0x140539BC4 (CcRemoveExternalCache.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CcUnregisterExternalCache(_QWORD *P)
{
  CcRemoveExternalCache(P);
  CcDeductDirtyPagesFromExternalCache((__int64)P, P[1]);
  ExFreePoolWithTag(P, 0x43456343u);
}
