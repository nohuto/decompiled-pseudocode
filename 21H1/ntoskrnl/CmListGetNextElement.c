/*
 * XREFs of CmListGetNextElement @ 0x140658FC0
 * Callers:
 *     CmpFindSubKeyByNumberEx @ 0x1405F9D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405FA510 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1406583C8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406584F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406585D4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140658634 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmSnapshotRMTxArray @ 0x140658994 (CmSnapshotRMTxArray.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140658E40 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpIsCmRm @ 0x140658F20 (CmpIsCmRm.c)
 *     CmGetVisibleSubkeyCount @ 0x140692ADC (CmGetVisibleSubkeyCount.c)
 *     CmpTransMgrPrepare @ 0x14074D0BC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x14074D24C (CmpTransMgrCommit.c)
 *     CmpSearchForTrans @ 0x14075078C (CmpSearchForTrans.c)
 *     CmpLogCheckpoint @ 0x14075B778 (CmpLogCheckpoint.c)
 *     CmpTransMgrRollback @ 0x14075C220 (CmpTransMgrRollback.c)
 *     CmUnRegisterCallback @ 0x1408652A0 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140870EC0 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1408712D4 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14087B978 (CmpLightWeightUpdateModificationActions.c)
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
