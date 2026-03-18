/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002C684
 * Callers:
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C002C0BC (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003045C (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C0115664 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qsqs @ 0x1C0028914 (WPP_RECORDER_SF_qsqs.c)
 *     WPP_RECORDER_SF_ @ 0x1C00B1838 (WPP_RECORDER_SF_.c)
 */

char __fastcall anonymous_namespace_::RemoveForegroundActivate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  const char *v5; // rdx
  const char *v6; // rcx
  int v7; // edx
  bool v8; // cl
  char v9; // si
  int v11; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( (*(_DWORD *)(v4 + 12) & 0x40) != 0 )
    ClearAppStarting(*(_QWORD *)(gptiCurrent + 416LL));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = "Yes";
    v6 = "Yes";
    if ( (*(_DWORD *)(gptiCurrent + 480LL) & 0x20) == 0 )
      v6 = "No";
    if ( (*(_DWORD *)(v4 + 12) & 0x100) == 0 )
      v5 = "No";
    WPP_RECORDER_SF_qsqs((__int64)v6, (__int64)v5, (__int64)"No", a4, v11, v4, v5, v4, v6);
  }
  v7 = *(_DWORD *)(gptiCurrent + 480LL);
  v8 = (*(_DWORD *)(v4 + 12) & 0x100) == 0;
  if ( v8 && (v7 & 0x20) == 0 )
    return 0;
  v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_(v8, v7, 2, 11, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    v7 = *(_DWORD *)(gptiCurrent + 480LL);
  }
  *(_DWORD *)(gptiCurrent + 480LL) = v7 & 0xFFFFFFDF;
  *(_DWORD *)(v4 + 12) &= ~0x100u;
  return v9;
}
