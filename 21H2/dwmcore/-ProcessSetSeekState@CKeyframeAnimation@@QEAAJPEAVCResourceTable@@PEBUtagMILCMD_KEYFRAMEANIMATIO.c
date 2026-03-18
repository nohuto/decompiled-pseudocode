/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800EDAC0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rax

  if ( *((_QWORD *)this + 48) )
  {
    v3 = *((_QWORD *)this + 2);
    if ( *((_BYTE *)a3 + 24) )
      v4 = *(_QWORD *)(v3 + 608);
    else
      v4 = *((_QWORD *)a3 + 1);
    *((_QWORD *)this + 63) = v4;
    v5 = 0;
    v6 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 572) |= 2u;
    *((_QWORD *)this + 64) = v6;
    *(_BYTE *)(*(_QWORD *)(v3 + 424) + 448LL) |= 2u;
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003303421, 0x1B2u);
  }
  return v5;
}
