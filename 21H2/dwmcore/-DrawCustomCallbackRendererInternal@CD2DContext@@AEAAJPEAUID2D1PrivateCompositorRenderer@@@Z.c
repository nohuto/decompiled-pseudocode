/*
 * XREFs of ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18007E708
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1800936E0 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x180094480 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801B0F54 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180080698 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::DrawCustomCallbackRendererInternal(
        CD2DContext *this,
        struct ID2D1PrivateCompositorRenderer *a2)
{
  CD2DContext::EnsureBeginDraw(this);
  (*(void (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorRenderer *))(**((_QWORD **)this + 26) + 120LL))(
    *((_QWORD *)this + 26),
    a2);
  return 0LL;
}
