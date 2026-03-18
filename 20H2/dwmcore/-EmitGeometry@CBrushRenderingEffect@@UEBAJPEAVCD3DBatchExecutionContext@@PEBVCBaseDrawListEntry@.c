/*
 * XREFs of ?EmitGeometry@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18005E560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushRenderingEffect::EmitGeometry(
        CBrushRenderingEffect *this,
        struct CD3DBatchExecutionContext *a2,
        const struct CBaseDrawListEntry *a3)
{
  return CRenderingEffect::EmitGeometryImpl(
           a2,
           (const struct CHWDrawListEntry *)(((unsigned __int64)a3 - 16) & -(__int64)(a3 != 0LL)),
           (*(_DWORD *)(*((_QWORD *)this + 2) + 64LL) & 4) != 0);
}
