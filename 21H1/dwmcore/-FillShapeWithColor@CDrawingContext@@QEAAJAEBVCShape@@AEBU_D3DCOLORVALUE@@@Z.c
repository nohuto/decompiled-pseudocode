/*
 * XREFs of ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x18017B7BC
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18026259C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithColor(
        CDrawingContext *this,
        const struct CShape *a2,
        const struct _D3DCOLORVALUE *a3)
{
  struct ID2D1Brush *v5; // rbx

  v5 = *(struct ID2D1Brush **)(*((_QWORD *)this + 5) + 376LL);
  (*(void (__fastcall **)(struct ID2D1Brush *, const struct _D3DCOLORVALUE *))(*(_QWORD *)v5 + 64LL))(v5, a3);
  return CDrawingContext::FillShapeWithBrush(this, a2, v5);
}
