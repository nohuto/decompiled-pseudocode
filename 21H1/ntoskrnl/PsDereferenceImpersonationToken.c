/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1406DB110
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    HalPutDmaAdapter((PADAPTER_OBJECT)ImpersonationToken);
}
