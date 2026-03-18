/*
 * XREFs of PsDereferenceImpersonationToken @ 0x1406FE180
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 */

void __stdcall PsDereferenceImpersonationToken(PACCESS_TOKEN ImpersonationToken)
{
  if ( ImpersonationToken )
    HalPutDmaAdapter((PADAPTER_OBJECT)ImpersonationToken);
}
