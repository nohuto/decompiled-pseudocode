/*
 * XREFs of CmListGetNextElement @ 0x1405E17C4
 * Callers:
 *     CmpCommitPreparedLightWeightTransaction @ 0x1405DF198 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1405DF2C8 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1405DF3A4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1405DF3F4 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x1405E1668 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1405E1724 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14065F88C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x14066000C (CmGetVisibleSubkeyCount.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpWalkOneLevel @ 0x1406E5B20 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSearchForTrans @ 0x14076720C (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x140768EC4 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x1407707A4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140771250 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x140869D70 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140875740 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140875B54 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087FEF8 (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
