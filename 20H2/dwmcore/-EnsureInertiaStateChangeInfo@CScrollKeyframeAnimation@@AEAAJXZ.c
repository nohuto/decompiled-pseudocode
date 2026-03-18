/*
 * XREFs of ?EnsureInertiaStateChangeInfo@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020C270
 * Callers:
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020C1A0 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180024C20 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014C964 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014DDBC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801C8D20 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ @ 0x1801D09D4 (-GetLastKeyframeValue@CKeyframeAnimation@@QEBAPEBVKeyframeValue@@XZ.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18020374C (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v2; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rsi
  int Value; // eax
  const char *v6; // r9
  unsigned int v7; // edi
  const char *v9; // r9
  float AnimationTimeLength; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float CurrentValue; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_BYTE *)this + 712);
  if ( (v2 & 2) == 0 )
  {
    *((_BYTE *)this + 712) = v2 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 552);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 552));
    v7 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v7;
    }
    if ( !*((_BYTE *)this + 628) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xE4,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v6);
      __debugbreak();
    }
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 46) == 1 )
      {
        if ( *((_DWORD *)this + 156) != 52 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xED,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 68), 1);
        v14 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 68), 0);
        v15 = *v4;
        v16 = *((float *)this + 139);
        v17 = *((float *)this + 140);
        *((_DWORD *)this + 176) = 52;
        *((float *)this + 158) = (float)(v15 - v14) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 159) = (float)(v16 - CurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 160) = (float)(v17 - 0.0) * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 46) != 2 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x102,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        if ( *((_DWORD *)this + 156) != 18 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xF9,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
          __debugbreak();
        }
        v11 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 68), 2);
        v12 = *v4;
        *((_DWORD *)this + 176) = 18;
        *((float *)this + 158) = (float)(v12 - v11) / AnimationTimeLength;
      }
      *((_BYTE *)this + 708) = 1;
    }
  }
  return 0LL;
}
