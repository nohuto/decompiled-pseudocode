/*
 * XREFs of ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800C8978
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800C00B0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1800C8924 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x1801D2960 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::UpdatePlaybackState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( *(_QWORD *)(a1 + 360) )
  {
    if ( a2 > 2 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x2BFu, 0LL);
    }
    else
    {
      *(_DWORD *)(a1 + 524) = a2;
      if ( !*(_DWORD *)(a1 + 520) && a2 )
      {
        if ( a3 )
          a4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL);
        *(_QWORD *)(a1 + 456) = a4;
        *(_QWORD *)(a1 + 464) = a4;
      }
      v4 = 0;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 272LL) + 416LL) |= 2u;
    }
  }
  else
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147467259, 0x2B8u, 0LL);
  }
  return v4;
}
