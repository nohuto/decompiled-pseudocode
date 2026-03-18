/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCRenderingBatchCommand@@@Z @ 0x1800CCEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CRenderingBatchCommand *a3)
{
  return CRenderingEffect::EmitGeometryImpl(a2, a3, (*(_DWORD *)(*((_QWORD *)this + 2) + 64LL) & 4) != 0);
}
