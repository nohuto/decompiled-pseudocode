/*
 * XREFs of ?Draw@CCompositionGlyphRun@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BB3A0
 * Callers:
 *     ?Draw@CCompositionGlyphRun@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EF300 (-Draw@CCompositionGlyphRun@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionGlyphRun::Draw(
        CCompositionGlyphRun *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this - 6);
  if ( !v4 )
    return 0LL;
  v5 = v4 + 56 + *(int *)(*(_QWORD *)(v4 + 56) + 8LL);
  v6 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v5 + 16LL))(
         v5,
         a2,
         a3,
         a4);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
