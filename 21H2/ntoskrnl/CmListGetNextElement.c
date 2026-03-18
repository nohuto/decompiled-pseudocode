/*
 * XREFs of CmListGetNextElement @ 0x140AB4218
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14065CF84 (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14065D410 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14065D4F8 (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14065DDFC (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14065E548 (CmpLightWeightUpdateModificationActions.c)
 *     CmGetVisibleSubkeyCount @ 0x14067E8E0 (CmGetVisibleSubkeyCount.c)
 *     CmpSearchForTrans @ 0x14067F714 (CmpSearchForTrans.c)
 *     CmSnapshotRMTxArray @ 0x1406A0094 (CmSnapshotRMTxArray.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1406A52D4 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpTransMgrRollback @ 0x1406E2798 (CmpTransMgrRollback.c)
 *     CmpIsKeyStackDeleted @ 0x140720F74 (CmpIsKeyStackDeleted.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpIsCmRm @ 0x140742190 (CmpIsCmRm.c)
 *     CmpTransMgrPrepare @ 0x1407424F0 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x140742A44 (CmpLogCheckpoint.c)
 *     CmpFindSubKeyByNumberEx @ 0x1407C3070 (CmpFindSubKeyByNumberEx.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmUnRegisterCallback @ 0x14090FD60 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x14091C1BC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14091C5C4 (CmpRmUnDoPhase.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140AB45A0 (CmpIsKeyDeletedForKeyBody.c)
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
