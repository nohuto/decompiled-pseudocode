/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1406A16E0
 * Callers:
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     CmpDeleteKeyObject @ 0x14061C620 (CmpDeleteKeyObject.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A1210 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1406A12F0 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A1534 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupRollbackPacket @ 0x1406A34DC (CmpCleanupRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x1406DF7BC (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x14076383C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x140763ACC (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140766380 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x14076C168 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x14077691C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x140877790 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
