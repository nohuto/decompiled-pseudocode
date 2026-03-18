/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x18023A7F0
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18025E4A8 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ @ 0x1800F38DC (-InternalRelease@-$CMILRefCountBaseT@UIEffectInstance@Composition@UI@Windows@@@@IEAAKXZ.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x18023B06C (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18023B2FC (-reset@-$com_ptr_t@VCRadialGradientEffect@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z @ 0x1802ABCF8 (-Create@CRadialGradientEffect@@SAJ_NPEAPEAV1@@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  struct CRadialGradientEffect *v3; // rbx
  bool IsCenteredGradient; // al
  int v6; // eax
  unsigned int v7; // ebx
  struct CRadialGradientEffect *v8; // rcx
  volatile signed __int32 *v9; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CRadialGradientEffect *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v3 = (struct CRadialGradientEffect *)*((_QWORD *)this + 29);
  if ( v3 )
  {
    CMILRefCountImpl::AddReference((struct CRadialGradientEffect *)((char *)v3 + 8));
  }
  else
  {
    wil::com_ptr_t<CRadialGradientEffect,wil::err_returncode_policy>::reset(&v12);
    IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
    v6 = CRadialGradientEffect::Create(IsCenteredGradient, &v12);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x120,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
        (const char *)(unsigned int)v6);
      v8 = v12;
      goto LABEL_10;
    }
    v3 = v12;
    v9 = (volatile signed __int32 *)*((_QWORD *)this + 29);
    *((_QWORD *)this + 29) = v12;
    if ( v3 )
      CMILRefCountImpl::AddReference((struct CRadialGradientEffect *)((char *)v3 + 8));
    if ( v9 )
      CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease(v9);
  }
  v8 = 0LL;
  *a2 = v3;
  v7 = 0;
LABEL_10:
  if ( v8 )
    CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>::InternalRelease((volatile signed __int32 *)v8);
  return v7;
}
