/*
 * XREFs of CmpTransDereferenceTransaction @ 0x1406A32E0
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406675C0 (CmpDeleteKeyObject.c)
 *     CmpCleanupLightWeightTransaction @ 0x1406A2E10 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x1406A2EF0 (NtOpenKeyTransactedEx.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406A3134 (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x1406BF8BC (CmRmFinalizeRecovery.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x14071C518 (CmpCleanupRollbackPacket.c)
 *     CmpTransSearchAddTrans @ 0x140766E2C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1407670BC (CmpTransInitializeTransaction.c)
 *     NtCreateKeyTransacted @ 0x140769B00 (NtCreateKeyTransacted.c)
 *     CmpCleanupTransactionState @ 0x140770484 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x14077A8CC (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x140875078 (CmpRollbackTransactionArray.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 */

void __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
