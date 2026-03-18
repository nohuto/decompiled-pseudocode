/*
 * XREFs of ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180206F5C
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801CC1A4 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA?AUD2DVector3@@AEBU2@@Z @ 0x1801CD960 (-GetScaleAdjustedPositionIfNeeded@CInteractionTracker@@AEBA-AUD2DVector3@@AEBU2@@Z.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CE2D0 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801D51FC (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180207F4C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

float __fastcall CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(CScrollScaleKeyframeAnimation *this)
{
  KeyframeValue *LastKeyframeValue; // rbx
  int Value; // eax
  const char *v3; // r9
  _DWORD v5[16]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+68h] [rbp-10h]
  char v8; // [rsp+6Ch] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
  memset_0(v5, 0, sizeof(v5));
  v6 = 0LL;
  v7 = 18;
  v8 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)v5);
  if ( Value < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)Value);
    __debugbreak();
  }
  if ( v7 != 18 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
    __debugbreak();
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return *(float *)v5;
}
