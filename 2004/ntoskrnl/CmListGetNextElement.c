/*
 * XREFs of CmListGetNextElement @ 0x140654660
 * Callers:
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleSubkeyCount @ 0x1406445EC (CmGetVisibleSubkeyCount.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140653A5C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140653B8C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x140653C68 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140653CC8 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x140654034 (CmSnapshotRMTxArray.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406544E0 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsCmRm @ 0x1406545C0 (CmpIsCmRm.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpTransMgrPrepare @ 0x14075174C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407518DC (CmpTransMgrCommit.c)
 *     CmpSearchForTrans @ 0x140754E1C (CmpSearchForTrans.c)
 *     CmpLogCheckpoint @ 0x14075DC60 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14075E700 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x1408665C0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1408721A0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1408725B4 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087CC68 (CmpLightWeightUpdateModificationActions.c)
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
