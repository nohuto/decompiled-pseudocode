/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800B9C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800B9FC8 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800BA0C8 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct CExpressionValue *v8; // r11
  float v10; // xmm0_4
  __int64 v11; // [rsp+28h] [rbp-20h]
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 == 4 )
  {
    v10 = *((float *)this + 46) * 57.295776;
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    *(float *)a3 = v10;
  }
  else
  {
    v12[0] = 6LL;
    v12[1] = &CComponentTransform2D::k_rgAnimDef;
    AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(v12);
    if ( AnimatablePropertyInfo )
    {
      CResource::GetPropertyImpl(this, AnimatablePropertyInfo, v8);
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, v7, -2147024809, 0x6Fu, (void *)(v7 & v11));
    }
  }
  return v3;
}
