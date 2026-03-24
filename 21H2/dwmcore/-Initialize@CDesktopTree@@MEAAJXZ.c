/*
 * XREFs of ?Initialize@CDesktopTree@@MEAAJXZ @ 0x1800D87C0
 * Callers:
 *     ?Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z @ 0x1801B22FC (-Create@CDesktopTree@@KAJPEAVCComposition@@PEAVCVisual@@U_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??4?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z @ 0x180009424 (--4-$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCColorBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A0DD8 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x1800AC380 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     ?SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z @ 0x1800D8844 (-SetVisualTree@CVisual@@IEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CDesktopTree::Initialize(CDesktopTree *this)
{
  CVisual *v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v2 = (CVisual *)KeyframeInterpolation::operator new(0x268uLL);
  if ( v2 )
    v2 = CVisual::CVisual(v2, *((struct CComposition **)this + 2));
  if ( v2 )
  {
    wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>::operator=((__int64 *)this + 7, (__int64)v2);
    v4 = CVisual::SetVisualTree(*((CVisual **)this + 7), this);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x2Fu, 0LL);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024882, 0x2Au, 0LL);
  }
  return v6;
}
