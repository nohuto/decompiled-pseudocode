/*
 * XREFs of ?PushHoverPointer@CInteraction@@QEBAXAEBUD2D_POINT_2F@@@Z @ 0x1800C4224
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BDC0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteraction::PushHoverPointer(CInteraction *this, const struct D2D_POINT_2F *a2)
{
  void (__fastcall ***v2)(_QWORD, const struct D2D_POINT_2F *); // rcx

  v2 = (void (__fastcall ***)(_QWORD, const struct D2D_POINT_2F *))*((_QWORD *)this + 34);
  if ( v2 )
    (**v2)(v2, a2);
}
