/*
 * XREFs of ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1802223E0
 * Callers:
 *     ?AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801F6D64 (-AppendDirtyRegionVisualizationRects@CVisual@@AEAAJPEAV-$DynArray@UMilRectF@@$0A@@@@Z.c)
 *     ?CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4DCOMPOSITION_EXPRESSION_TYPE@@AEBUD2DVector4@@MPEAPEAVCScrollKeyframeAnimation@@@Z @ 0x18021A18C (-CreateAndStartKeyframeAnimation@CInteractionTracker@@AEAAJW4Enum@InteractionTrackerProperty@@W4.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x18022DBD8 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180044760 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800465AC (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180049EFC (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x18004A0F8 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x18004D7F8 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x18006FCEC (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ??$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z @ 0x18006FEB4 (--$SAFE_DELETE_ARRAY@E@@YAXAEAPEAE@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800D2E54 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800D8C0C (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::Initialize(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        float a10,
        __int64 a11,
        float a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  int updated; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  SIZE_T CacheSizeForType; // rbx
  void *v20; // rax
  int v21; // r9d
  int v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // rsi
  unsigned int v26; // [rsp+20h] [rbp-28h]

  updated = CBaseExpression::SetTarget(a1, 0, a2, a3, a4, 0, 0, 0LL);
  v18 = updated;
  if ( updated < 0 )
  {
    v26 = 75;
LABEL_13:
    v21 = updated;
    goto LABEL_14;
  }
  CacheSizeForType = (unsigned int)GetCacheSizeForType(*(_DWORD *)(a1 + 152));
  v20 = DefaultHeap::Alloc(CacheSizeForType);
  *(_QWORD *)(a1 + 376) = v20;
  if ( !v20 )
  {
    v18 = -2147024882;
    v21 = -2147024882;
    v26 = 79;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v21, v26);
    goto LABEL_15;
  }
  memset_0(v20, 0, CacheSizeForType);
  *(_DWORD *)(a1 + 360) = 2;
  v22 = CKeyframeAnimation::SetIterationInfo(a1, a10, 0, a12, 0);
  v18 = v22;
  if ( v22 >= 0 )
  {
    updated = CKeyframeAnimation::SetKeyFrameData(a1, 0, 0, a15);
    v18 = updated;
    if ( updated < 0 )
    {
      v26 = 93;
    }
    else
    {
      updated = CBaseExpression::TryRegisterWithExpressionManager((CBaseExpression *)a1);
      v18 = updated;
      if ( updated < 0 )
      {
        v26 = 95;
      }
      else
      {
        updated = CKeyframeAnimation::UpdatePlaybackState(a1, 1u, 1, *(_QWORD *)(*(_QWORD *)(a1 + 16) + 608LL));
        v18 = updated;
        if ( updated >= 0 )
          return v18;
        v26 = 100;
      }
    }
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0LL, v22, 0x58u);
LABEL_15:
  v24 = *(__int64 **)(a1 + 384);
  *(_QWORD *)(a1 + 384) = 0LL;
  if ( v24 )
  {
    KeyframeSequence::RemoveAllKeyFrames((KeyframeSequence *)v24);
    Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v24 + 8);
    DefaultHeap::Free(v24);
  }
  SAFE_DELETE_ARRAY<unsigned char>((void **)(a1 + 376));
  return v18;
}
