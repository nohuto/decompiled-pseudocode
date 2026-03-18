/*
 * XREFs of ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B9CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BA0C8 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CColorBrush::SetProperty(__int64 a1)
{
  __int64 AnimatablePropertyInfo; // rax
  __int64 v3; // rcx
  __int64 v4; // r11
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 1LL;
  v9[1] = &CColorBrush::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v9);
  if ( AnimatablePropertyInfo )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(AnimatablePropertyInfo + 24))(
           a1 + *(int *)(AnimatablePropertyInfo + 32),
           AnimatablePropertyInfo,
           v4);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x37u, 0LL);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024809, 0x3Bu, 0LL);
  }
  return v7;
}
