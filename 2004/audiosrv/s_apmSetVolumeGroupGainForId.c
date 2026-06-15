/*
 * XREFs of s_apmSetVolumeGroupGainForId @ 0x1800F8F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConvertDbToEngineVolume@@YAMM@Z @ 0x1800C7624 (-ConvertDbToEngineVolume@@YAMM@Z.c)
 *     s_apmSetVolumeGroupGainScalarForId @ 0x1800F8F80 (s_apmSetVolumeGroupGainScalarForId.c)
 */

__int64 __fastcall s_apmSetVolumeGroupGainForId(__int64 a1, __int64 a2, float a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ConvertDbToEngineVolume(a3);
  v5 = s_apmSetVolumeGroupGainScalarForId(a1, 0LL, a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x322,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\playbackmanagerrpc.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
