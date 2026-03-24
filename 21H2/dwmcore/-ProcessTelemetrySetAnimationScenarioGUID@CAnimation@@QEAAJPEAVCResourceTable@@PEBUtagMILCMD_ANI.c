/*
 * XREFs of ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x1801B67B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
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

  if ( *((_QWORD *)this + 16) )
  {
    v9 = 248;
    goto LABEL_8;
  }
  v5 = 0;
  if ( *((_BYTE *)this + 96) )
  {
    v9 = 254;
LABEL_8:
    v5 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024891, v9, 0LL);
    return v5;
  }
  v6 = operator new(0x10uLL);
  *((_QWORD *)this + 16) = v6;
  if ( v6 )
  {
    *v6 = *(_OWORD *)((char *)a3 + 8);
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x103u, 0LL);
  }
  return v5;
}
