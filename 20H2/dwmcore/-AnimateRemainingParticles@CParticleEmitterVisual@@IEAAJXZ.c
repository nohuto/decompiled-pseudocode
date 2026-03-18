/*
 * XREFs of ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801DE0A8
 * Callers:
 *     ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801E01A0 (-NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180051DB0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A8270 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x1800CD2F4 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801D0AC0 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 */

__int64 __fastcall CParticleEmitterVisual::AnimateRemainingParticles(CParticleEmitterVisual *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  float v4; // xmm6_4
  float *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  float v8; // xmm1_4
  float v9; // xmm0_4
  CKeyframeAnimation *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-F8h]
  unsigned int v18; // [rsp+20h] [rbp-F8h]
  __int64 v19; // [rsp+28h] [rbp-F0h]
  __int64 v20; // [rsp+30h] [rbp-E8h]
  __int64 v21; // [rsp+38h] [rbp-E0h]
  __int64 v22; // [rsp+40h] [rbp-D8h]
  __int64 v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+60h] [rbp-B8h]
  __int64 v25; // [rsp+68h] [rbp-B0h]
  _DWORD v26[24]; // [rsp+80h] [rbp-98h] BYREF

  v2 = 0;
  v3 = *((_DWORD *)this + 310);
  v4 = 0.0;
  if ( v3 )
  {
    v5 = (float *)*((_QWORD *)this + 125);
    v6 = v3;
    v7 = *((_QWORD *)this + 122) - (_QWORD)v5;
    do
    {
      v8 = *v5;
      v9 = *v5 * *(float *)((char *)v5 + v7);
      ++v5;
      v4 = fmaxf(v4, v8 - v9);
      --v6;
    }
    while ( v6 );
    if ( v4 > 0.0 )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 89));
      *((_QWORD *)this + 89) = 0LL;
      v10 = (CKeyframeAnimation *)DefaultHeap::AllocClear(0x220uLL);
      if ( v10 )
        v10 = CKeyframeAnimation::CKeyframeAnimation(v10, *((struct CComposition **)this + 2));
      *((_QWORD *)this + 89) = v10;
      if ( !v10 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0x3Cu, 0LL);
LABEL_14:
        CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 89));
        *((_QWORD *)this + 89) = 0LL;
        return v2;
      }
      v12 = CResource::RegisterNotifier(this, v10);
      v2 = v12;
      if ( v12 < 0 )
      {
        v18 = 61;
        goto LABEL_13;
      }
      v14 = *((float *)this + 1580);
      v15 = *((_QWORD *)this + 89);
      v26[1] = 0;
      v26[13] = 0;
      *(float *)v26 = v14;
      v26[6] = 3;
      v26[18] = 1;
      *(float *)&v26[12] = v14 + v4;
      *(float *)&v26[20] = v14 + v4;
      v12 = CKeyframeAnimation::Initialize(
              v15,
              (__int64)this,
              52,
              0x12u,
              v17,
              v19,
              v20,
              v21,
              v22,
              1.0,
              v23,
              0.0,
              v24,
              v25,
              (__int64)v26);
      v2 = v12;
      if ( v12 < 0 )
      {
        v18 = 87;
LABEL_13:
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, v18, 0LL);
        goto LABEL_14;
      }
    }
  }
  return v2;
}
