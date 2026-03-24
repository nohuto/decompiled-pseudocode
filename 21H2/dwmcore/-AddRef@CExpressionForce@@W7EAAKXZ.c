/*
 * XREFs of ?AddRef@CExpressionForce@@W7EAAKXZ @ 0x1800F5840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CExpressionForce::AddRef(__int64 a1)
{
  return BamoDataProviderProxy::AddRef((BamoDataProviderProxy *)(a1 - 8));
}
