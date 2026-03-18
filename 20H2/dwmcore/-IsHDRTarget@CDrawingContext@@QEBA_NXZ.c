/*
 * XREFs of ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180194E84
 * Callers:
 *     TryFillRenderState @ 0x1801953FC (TryFillRenderState.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C1DF8 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180209114 (-Draw@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18003D608 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  __int64 (__fastcall ***v1)(_QWORD, _BYTE *); // rcx
  __int64 v2; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 4)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
  v2 = (**v1)(v1, v4);
  return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v2 + 8));
}
