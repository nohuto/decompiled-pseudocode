/*
 * XREFs of ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801773CC
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802619FC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
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
