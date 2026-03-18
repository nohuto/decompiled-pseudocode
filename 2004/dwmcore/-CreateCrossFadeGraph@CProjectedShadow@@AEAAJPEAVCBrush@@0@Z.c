/*
 * XREFs of ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCBrush@@0@Z @ 0x18001E778
 * Callers:
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18000ADA8 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E804 (-Build@CProjectedShadowApproxBlurGraphBuilder@@SAJPEAVCBrush@@0PEAPEAVCBrushRenderingGraph@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProjectedShadow::CreateCrossFadeGraph(CProjectedShadow *this, struct CBrush *a2, struct CBrush *a3)
{
  struct Windows::UI::Composition::IEffectInstance **v3; // rdi
  __int64 v5; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct Windows::UI::Composition::IEffectInstance **)((char *)this + 376);
  v5 = *((_QWORD *)this + 47);
  *v3 = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v8 = *((_QWORD *)this + 46);
  *((_QWORD *)this + 46) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = CProjectedShadowApproxBlurGraphBuilder::Build(a2, a3, (struct CBrushRenderingGraph **)this + 46, v3);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x34B,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadow.cpp",
    (const char *)(unsigned int)v9,
    v12);
  return v10;
}
