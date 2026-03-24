/*
 * XREFs of CmListGetNextElement @ 0x1406A3CF4
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x14066AA6C (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmGetVisibleSubkeyCount @ 0x14066B1EC (CmGetVisibleSubkeyCount.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406A3444 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406A3574 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406A3650 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406A36A0 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x1406A3B98 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x1406A3C54 (CmpIsCmRm.c)
 *     CmpIsKeyStackDeleted @ 0x1406FB540 (CmpIsKeyStackDeleted.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406FC600 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpSearchForTrans @ 0x14076704C (CmpSearchForTrans.c)
 *     CmpTransMgrPrepare @ 0x140768D04 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x1407705E4 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x140771090 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x140869C10 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1408755E0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1408759F4 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087FD98 (CmpLightWeightUpdateModificationActions.c)
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
