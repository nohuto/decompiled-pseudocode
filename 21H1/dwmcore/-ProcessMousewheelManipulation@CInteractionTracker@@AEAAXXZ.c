/*
 * XREFs of ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CE2D0
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180215D54 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801CBBF4 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x1801CC618 (-CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z.c)
 *     ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1801CC77C (-CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801CCB20 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801CDB88 (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801CDBA8 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801CECB8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA?AUD2DVector3@@XZ @ 0x1802069F4 (-GetLastKeyframeValueForPosition@CScrollPositionKeyframeAnimation@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ @ 0x180206F5C (-GetLastKeyframeValueForScale@CScrollScaleKeyframeAnimation@@QEBAMXZ.c)
 *     ?GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA?AUD2DVector3@@XZ @ 0x180214D70 (-GetActiveManipulationCenterpoint@InteractionSourceManager@@QEBA-AUD2DVector3@@XZ.c)
 *     ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x180214DE4 (-GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTracker::ProcessMousewheelManipulation(CInteractionTracker *this)
{
  char *v1; // rdi
  double ActiveManipulationDelta; // xmm0_8
  float v4; // xmm11_4
  double v5; // xmm0_8
  float v6; // xmm8_4
  double v7; // xmm0_8
  float v8; // xmm9_4
  float LastKeyframeValueForScale; // xmm0_4
  double v10; // xmm3_8
  CInteractionTracker *v11; // rcx
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  __int64 LastKeyframeValueForPosition; // rax
  __int64 v17; // xmm0_8
  unsigned int v18; // eax
  double v19; // xmm2_8
  double v20; // xmm2_8
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  float v23; // xmm0_4
  int v24; // r9d
  _BYTE v25[16]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v26; // [rsp+48h] [rbp-29h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-21h]
  __int64 v28; // [rsp+58h] [rbp-19h] BYREF
  int v29; // [rsp+60h] [rbp-11h]

  v1 = (char *)this + 192;
  ActiveManipulationDelta = InteractionSourceManager::GetActiveManipulationDelta((char *)this + 192, 0LL);
  v4 = *(float *)&ActiveManipulationDelta;
  v5 = InteractionSourceManager::GetActiveManipulationDelta(v1, 1LL);
  v6 = *(float *)&v5;
  v7 = InteractionSourceManager::GetActiveManipulationDelta(v1, 2LL);
  v8 = *(float *)&v7;
  if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 || COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.0000011920929 )
  {
    v28 = 0LL;
    v29 = 0;
    if ( CInteractionTracker::HasRunningDefaultPositionAnimation(this) )
    {
      LastKeyframeValueForPosition = CScrollPositionKeyframeAnimation::GetLastKeyframeValueForPosition(
                                       *((_QWORD *)this + 57),
                                       v25);
      v17 = *(_QWORD *)LastKeyframeValueForPosition;
      v18 = *(_DWORD *)(LastKeyframeValueForPosition + 8);
    }
    else
    {
      v17 = *((_QWORD *)this + 9);
      v18 = *((_DWORD *)this + 20);
    }
    v27 = v18;
    v26 = v17;
    if ( COERCE_FLOAT(LODWORD(v4) & _xmm) >= 0.0000011920929 )
    {
      *(_QWORD *)&v19 = (unsigned int)v26;
      *(float *)&v19 = *(float *)&v26 + v4;
      *(float *)&v28 = *(float *)&v26 + v4;
      LODWORD(v26) = CInteractionTracker::ClampValueToBoundary((__int64)this, 0LL, v19).m128_u32[0];
    }
    if ( COERCE_FLOAT(LODWORD(v6) & _xmm) >= 0.0000011920929 )
    {
      *(_QWORD *)&v20 = HIDWORD(v26);
      *(float *)&v20 = *((float *)&v26 + 1) + v6;
      *((float *)&v28 + 1) = *((float *)&v26 + 1) + v6;
      HIDWORD(v26) = CInteractionTracker::ClampValueToBoundary((__int64)this, 1LL, v20).m128_u32[0];
    }
    v21 = *((_QWORD *)this + 9);
    v27 = 0;
    v22 = v21 - v26;
    if ( !v22 )
      v22 = *((unsigned int *)this + 20) - (unsigned __int64)v27;
    if ( v22 )
    {
      v23 = CInteractionTracker::CalculatePositionAnimationDuration(this, (const struct D2DVector3 *)&v28);
      CInteractionTracker::ScrollToPosition(this, (const struct D2DVector3 *)&v26, v23, v24);
    }
  }
  else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v7 - 1.0) & _xmm) >= 0.0000011920929 )
  {
    if ( CInteractionTracker::HasRunningDefaultScaleAnimation(this) )
      LastKeyframeValueForScale = CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(*((CScrollScaleKeyframeAnimation **)this
                                                                                              + 58));
    else
      LastKeyframeValueForScale = *((float *)this + 32);
    *(_QWORD *)&v10 = LODWORD(FLOAT_0_001);
    *(float *)&v10 = fmaxf(0.001, LastKeyframeValueForScale * v8);
    v12 = CInteractionTracker::ClampValueToBoundary((__int64)this, 2LL, v10).m128_f32[0];
    if ( v13 != v12 )
    {
      v14 = CInteractionTracker::CalculateScaleAnimationDuration(v11, *(float *)&v10);
      InteractionSourceManager::GetActiveManipulationCenterpoint(v1, &v28);
      v26 = v28;
      CInteractionTracker::AnimateToScale(this, v15, (const struct D2DVector2 *)&v26, v14);
    }
  }
}
