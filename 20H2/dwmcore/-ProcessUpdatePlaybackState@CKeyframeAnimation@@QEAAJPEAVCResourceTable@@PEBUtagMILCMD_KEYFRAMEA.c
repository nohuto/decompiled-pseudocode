/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1800C8314
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z @ 0x1800C8368 (-UpdatePlaybackState@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationPlaybackState@@_N_K@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( *((_QWORD *)this + 45) )
  {
    v3 = *((unsigned int *)a3 + 2);
    if ( (unsigned int)v3 > 2 )
    {
      v7 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x185u, 0LL);
    }
    else
    {
      v4 = *((_QWORD *)a3 + 2);
      LOBYTE(a3) = *((_BYTE *)a3 + 24) != 0;
      updated = CKeyframeAnimation::UpdatePlaybackState(this, v3, a3, v4);
      v7 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x18Cu, 0LL);
      else
        return 0;
    }
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0x17Eu, 0LL);
  }
  return v7;
}
