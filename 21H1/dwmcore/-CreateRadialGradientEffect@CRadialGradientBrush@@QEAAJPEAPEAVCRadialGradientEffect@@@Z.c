/*
 * XREFs of ?CreateRadialGradientEffect@CRadialGradientBrush@@QEAAJPEAPEAVCRadialGradientEffect@@@Z @ 0x1801EB510
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020FA3C (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ @ 0x1801EBDEC (-IsCenteredGradient@CRadialGradientBrush@@AEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801EC098 (-reset@-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CRadialGradientBrush::CreateRadialGradientEffect(
        CRadialGradientBrush *this,
        struct CRadialGradientEffect **a2)
{
  __int64 v3; // rax
  bool IsCenteredGradient; // di
  char *v6; // rax
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rbx
  int v9; // esi
  CDrawListEntry *v10; // rcx
  struct CRadialGradientEffect *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v14; // [rsp+50h] [rbp+8h] BYREF
  volatile signed __int32 *v15; // [rsp+60h] [rbp+18h]

  v14 = 0LL;
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
  {
    v14 = (volatile signed __int32 *)*((_QWORD *)this + 23);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
    v8 = v14;
  }
  else
  {
    wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::reset(&v14);
    IsCenteredGradient = CRadialGradientBrush::IsCenteredGradient(this);
    v6 = (char *)DefaultHeap::Alloc(0x48uLL);
    v8 = (volatile signed __int32 *)v6;
    if ( v6 )
    {
      *((_DWORD *)v6 + 8) = 0;
      *((_DWORD *)v6 + 2) = 0;
      *(_QWORD *)v6 = &CRadialGradientEffect::`vftable'{for `CMILRefCountBase'};
      *((_QWORD *)v6 + 2) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::IEffectInstance'};
      *((_QWORD *)v6 + 3) = &CRadialGradientEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
      v6[68] = IsCenteredGradient;
      if ( IsCenteredGradient )
      {
        *(_QWORD *)(v6 + 36) = 0LL;
      }
      else
      {
        *(_OWORD *)(v6 + 36) = 0LL;
        *(_OWORD *)(v6 + 52) = 0LL;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v15 = v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v14 = v8;
      v15 = 0LL;
      v9 = 0;
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x14u, 0LL);
      v8 = v14;
    }
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x121,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\radialgradientbrush.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_18;
    }
    v10 = (CDrawListEntry *)*((_QWORD *)this + 23);
    *((_QWORD *)this + 23) = v8;
    if ( v8 )
    {
      _InterlockedIncrement(v8 + 2);
      v8 = v14;
    }
    if ( v10 )
      CDrawListEntry::Release(v10);
  }
  v11 = (struct CRadialGradientEffect *)v8;
  v8 = 0LL;
  v9 = 0;
  *a2 = v11;
LABEL_18:
  if ( v8 )
    CDrawListEntry::Release((CDrawListEntry *)v8);
  return (unsigned int)v9;
}
