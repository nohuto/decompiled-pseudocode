/*
 * XREFs of ?GetAccentBlurBehindBrush@CTopLevelWindow@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x180003814
 * Callers:
 *     ?CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800035BC (-CreateBlurBehindAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCSto.c)
 * Callees:
 *     ?GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAUMilPoint3F@@@Z @ 0x18000387C (-GetAccentBlurBehindBrush@CAccentBlurBehind@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCach.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetAccentBlurBehindBrush(
        CTopLevelWindow *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        struct MilPoint3F *a4)
{
  int v4; // ebx
  __int64 v5; // rax
  CAccentBlurBehind *v7; // rcx
  int AccentBlurBehindBrush; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  void *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  *(_DWORD *)a4 = 1065353216;
  *((_DWORD *)a4 + 1) = 1065353216;
  *((_DWORD *)a4 + 2) = 1065353216;
  v5 = *((_QWORD *)this + 34);
  if ( v5 )
  {
    if ( *(_DWORD *)(v5 + 280) == 3
      && (v7 = *(CAccentBlurBehind **)(v5 + 336)) != 0LL
      && (AccentBlurBehindBrush = CAccentBlurBehind::GetAccentBlurBehindBrush(v7, a2, a3, a4),
          v4 = AccentBlurBehindBrush,
          AccentBlurBehindBrush < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x314,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)AccentBlurBehindBrush,
        v9);
    }
    else
    {
      v4 = 0;
    }
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x622u, v10);
  }
  return (unsigned int)v4;
}
