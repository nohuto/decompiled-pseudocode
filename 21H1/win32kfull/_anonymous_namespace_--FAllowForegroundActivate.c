/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1770E
 * Callers:
 *     ?xxxSetFocus@@YGPAUtagWND@@PAU1@@Z @ 0x17FFC (-xxxSetFocus@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1A2C8 (-xxxActivateWindowWithOptions@@YG_NPAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStr.c)
 * Callees:
 *     _IsForegroundLocked@0 @ 0x195B8 (_IsForegroundLocked@0.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1A052 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _IsImmersiveBandOrShellManaged@4 @ 0xADBB0 (_IsImmersiveBandOrShellManaged@4.c)
 */

char __thiscall anonymous_namespace_::FAllowForegroundActivate(_DWORD *this)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx

  v2 = *(_DWORD *)(_gptiCurrent + 232);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
    return 0;
  if ( *(_DWORD *)(_gptiCurrent + 248) != _grpdeskRitInput
    || _gpqForeground == *(_DWORD *)(_gptiCurrent + 236)
    || IsForegroundLocked() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 17, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    return 0;
  }
  v4 = this[5];
  if ( (*(_BYTE *)(v4 + 19) & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(2, 18, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, (char)this);
    return 0;
  }
  if ( *(_DWORD *)(v4 + 148) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(2, 19, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, (char)this);
    return 0;
  }
  if ( IAMThreadAccessGranted(_gptiCurrent) || *(int *)(v2 + 8) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(2, 20, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
  }
  else
  {
    if ( IsImmersiveBroker(v2) && IsImmersiveBandOrShellManaged(this) && (*(_BYTE *)(this[5] + 146) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(2, 21, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v2);
      return 0;
    }
    if ( IsImmersiveBroker(v2) )
    {
      if ( _gpqForeground )
      {
        v5 = *(_DWORD *)(_gpqForeground + 64);
        if ( v5 )
        {
          if ( IsImmersiveBandOrShellManaged(v5) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_q(2, 22, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v2);
            return 0;
          }
        }
      }
    }
    if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(this, 2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(2, 23, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v2, (char)this);
      return 0;
    }
  }
  return 1;
}
