/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140656BF0
 * Callers:
 *     CmpDeleteKeyObject @ 0x140622AD0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpCleanupLightWeightTransaction @ 0x140656718 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140656800 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140656A44 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupRollbackPacket @ 0x14065B6DC (CmpCleanupRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x1406E9558 (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x14075056C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407507FC (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140754DC0 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x14075B618 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x140765F2C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x140870960 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
