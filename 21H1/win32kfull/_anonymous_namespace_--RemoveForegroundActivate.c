/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC
 * Callers:
 *     ?xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z @ 0x1364E (-xxxProcessActivationEvent@@YGXPBUtagQMSG@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 * Callees:
 *     _WPP_RECORDER_SF_qsqs@36 @ 0x1A192 (_WPP_RECORDER_SF_qsqs@36.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 */

char anonymous_namespace_::RemoveForegroundActivate()
{
  int v0; // esi
  const char *v1; // eax
  const char *v2; // ecx
  int v3; // edx
  char v4; // bl
  int v6; // [esp-1Ch] [ebp-28h]
  int v7; // [esp-18h] [ebp-24h]
  int v8; // [esp-14h] [ebp-20h]

  v0 = *(_DWORD *)(_gptiCurrent + 232);
  if ( (*(_BYTE *)(v0 + 8) & 0x40) != 0 )
    ClearAppStarting(*(_DWORD *)(_gptiCurrent + 232));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v1 = "Yes";
    v2 = "Yes";
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 0x20) == 0 )
      v2 = "No";
    if ( (*(_DWORD *)(v0 + 8) & 0x100) == 0 )
      v1 = "No";
    WPP_RECORDER_SF_qsqs(v6, v7, v8, v0, v1, v0, v2);
  }
  v3 = *(_DWORD *)(_gptiCurrent + 264);
  if ( (*(_DWORD *)(v0 + 8) & 0x100) == 0 && (v3 & 0x20) == 0 )
    return 0;
  v4 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(2, 11, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    v3 = *(_DWORD *)(_gptiCurrent + 264);
  }
  *(_DWORD *)(_gptiCurrent + 264) = v3 & 0xFFFFFFDF;
  *(_DWORD *)(v0 + 8) &= ~0x100u;
  return v4;
}
