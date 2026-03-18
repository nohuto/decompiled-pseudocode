/*
 * XREFs of PsDereferencePrimaryToken @ 0x1407030D0
 * Callers:
 *     LpcpCopyRequestData @ 0x1408BE6DC (LpcpCopyRequestData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)PrimaryToken);
}
