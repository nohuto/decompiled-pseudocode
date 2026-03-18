/*
 * XREFs of ?AddRef@BamoDataProviderProxy@@UEAAKXZ @ 0x1800DDE80
 * Callers:
 *     ?AddRef@CExpressionForce@@W7EAAKXZ @ 0x1800EFD80 (-AddRef@CExpressionForce@@W7EAAKXZ.c)
 *     ?AddRef@CMesh2DEffect@@WBA@EAAKXZ @ 0x1800F1230 (-AddRef@CMesh2DEffect@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BamoDataProviderProxy::AddRef(BamoDataProviderProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
