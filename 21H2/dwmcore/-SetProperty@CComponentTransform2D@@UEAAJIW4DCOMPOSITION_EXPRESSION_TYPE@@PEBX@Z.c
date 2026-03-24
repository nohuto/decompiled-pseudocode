/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BDDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BE2A8 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  int *AnimatablePropertyInfo; // rax
  __int64 v6; // rcx
  float *v7; // r11
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  float v13; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 == 4 && a3 == 18 )
  {
    AnimatablePropertyInfo = (int *)&CComponentTransform2D::sc_RotationAngle;
    v7 = &v13;
    v13 = *a4 * 0.017453292;
  }
  else
  {
    v12[0] = 6LL;
    v12[1] = &CComponentTransform2D::k_rgAnimDef;
    AnimatablePropertyInfo = (int *)AnimationHelper::FindAnimatablePropertyInfo(v12);
    if ( !AnimatablePropertyInfo )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024809, 0x4Au, 0LL);
      return v10;
    }
  }
  v8 = (*((__int64 (__fastcall **)(__int64, int *, float *))AnimatablePropertyInfo + 3))(
         a1 + AnimatablePropertyInfo[8],
         AnimatablePropertyInfo,
         v7);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x46u, 0LL);
  return v10;
}
