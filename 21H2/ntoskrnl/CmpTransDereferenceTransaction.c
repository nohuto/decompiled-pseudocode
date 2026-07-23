/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1405DEFE0
 * Callers:
 *     CmpCleanupLightWeightTransaction @ 0x1405DEB10 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1405DEBF0 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1405DEE34 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupRollbackPacket @ 0x1405E094C (CmpCleanupRollbackPacket.c)
 *     CmRmFinalizeRecovery @ 0x14061E72C (CmRmFinalizeRecovery.c)
 *     CmpDeleteKeyObject @ 0x14065C3E0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x140766FEC (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140769CC0 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x140770644 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x14077AA8C (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1408751D8 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
