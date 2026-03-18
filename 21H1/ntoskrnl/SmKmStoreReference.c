/*
 * XREFs of SmKmStoreReference @ 0x14023DC20
 * Callers:
 *     SmpKeyedStoreReference @ 0x140239AE8 (SmpKeyedStoreReference.c)
 *     SmKmStoreReferenceEx @ 0x14023DD64 (SmKmStoreReferenceEx.c)
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14023ECE0 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402D0AB4 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140599CB8 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmIssueIo @ 0x140599F5C (SmIssueIo.c)
 *     SmProcessListRequestExtended @ 0x1409254AC (SmProcessListRequestExtended.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14023DDA0 (SmKmStoreRefFromStoreIndex.c)
 */

unsigned __int64 __fastcall SmKmStoreReference(__int64 a1, unsigned int a2)
{
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  v4 = v3;
  if ( v3 && ExAcquireRundownProtection_0(v3 + 1) )
  {
    if ( (v4[4].Count & 0x3F) == a2 >> 10 )
      return v4->Count;
    ExReleaseRundownProtection_0(v4 + 1);
  }
  return 0LL;
}
