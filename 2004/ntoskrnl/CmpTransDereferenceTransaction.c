/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140653900
 * Callers:
 *     CmpDeleteKeyObject @ 0x1405ED4B0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x14064349C (CmpCleanupRollbackPacket.c)
 *     CmpCleanupLightWeightTransaction @ 0x140653428 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140653510 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140653754 (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x14070D38C (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x140754BFC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140754E8C (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140757740 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x14075DB00 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x140768310 (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
