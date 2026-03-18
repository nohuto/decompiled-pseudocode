/*
 * XREFs of CmListGetNextElement @ 0x1406A42B0
 * Callers:
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWalkOneLevel @ 0x140679110 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A1DE4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A1F14 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406A1FF0 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406A2040 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x1406A4154 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406A4210 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1407032A4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x140703FE4 (CmGetVisibleSubkeyCount.c)
 *     CmpTransMgrPrepare @ 0x14076032C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407604BC (CmpTransMgrCommit.c)
 *     CmpSearchForTrans @ 0x140763A5C (CmpSearchForTrans.c)
 *     CmpLogCheckpoint @ 0x14076C2C8 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14076CD70 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x14086BFE0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140877CF0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140878104 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x140882824 (CmpLightWeightUpdateModificationActions.c)
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
