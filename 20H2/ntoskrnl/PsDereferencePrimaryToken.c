/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406D6110
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1405E85DC (AlpcpAcceptConnectPort.c)
 *     LpcpCopyRequestData @ 0x1408C448C (LpcpCopyRequestData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)PrimaryToken);
}
