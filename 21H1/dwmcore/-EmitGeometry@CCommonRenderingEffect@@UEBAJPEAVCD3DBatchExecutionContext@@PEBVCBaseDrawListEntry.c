/*
 * XREFs of ?EmitGeometry@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x180054760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::EmitGeometry(
        CCommonRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  return CRenderingEffect::EmitGeometryImpl(
           a2,
           (const struct CHWDrawListEntry *)(((unsigned __int64)a3 - 16) & -(__int64)(a3 != 0LL)),
           0);
}
