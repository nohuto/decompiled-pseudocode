/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180209A54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *a3)
{
  unsigned int v5; // ebx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( *((_QWORD *)this + 17) )
  {
    v9 = 248;
    goto LABEL_8;
  }
  v5 = 0;
  if ( *((_BYTE *)this + 104) )
  {
    v9 = 254;
LABEL_8:
    v5 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024891, v9);
    return v5;
  }
  v6 = operator new(0x10uLL);
  *((_QWORD *)this + 17) = v6;
  if ( v6 )
  {
    *v6 = *(_OWORD *)((char *)a3 + 8);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, -2147024882, 0x103u);
  }
  return v5;
}
