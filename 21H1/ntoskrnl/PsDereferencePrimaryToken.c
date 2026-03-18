/*
 * XREFs of PsDereferencePrimaryToken @ 0x1406E0340
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferencePrimaryToken(PACCESS_TOKEN PrimaryToken)
{
  HalPutDmaAdapter((PADAPTER_OBJECT)PrimaryToken);
}
