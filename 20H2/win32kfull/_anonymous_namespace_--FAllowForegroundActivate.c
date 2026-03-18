/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C002B96C
 * Callers:
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C002B5C4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00C1950 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C002BACC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C002BDA8 (IsImmersiveBandOrShellManaged.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C002CF0C (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C002D180 (IsForegroundLocked.c)
 *     WPP_RECORDER_SF_qq @ 0x1C003EB74 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0040298 (WPP_RECORDER_SF_.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  int v5; // edx
  __int64 v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // r9d
  char v13; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !(unsigned __int8)anonymous_namespace_::RemoveForegroundActivate() )
    return 0;
  v5 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || (v3 = *(_QWORD *)(gptiCurrent + 432LL), gpqForeground == v3)
    || (unsigned int)IsForegroundLocked() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_(v3, v5, 2, 17, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v6 + 27) & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v12 = 18;
LABEL_27:
    v13 = a1;
LABEL_33:
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(v6, v5, 2, v12, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v13);
    return 0;
  }
  if ( *(_DWORD *)(v6 + 236) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v12 = 19;
    goto LABEL_27;
  }
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) || *(int *)(v2 + 12) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(v8, v7, 2, 20, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids);
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(v2)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1)
      && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 21;
LABEL_32:
        v13 = v2;
        goto LABEL_33;
      }
      return 0;
    }
    if ( (unsigned int)IsImmersiveBroker(v2) )
    {
      if ( gpqForeground )
      {
        v11 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v11 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged(v11) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v12 = 22;
              goto LABEL_32;
            }
            return 0;
          }
        }
      }
    }
    if ( !(unsigned __int8)anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_qq(v10, v9, 2, 23, (__int64)&WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, v2, a1);
      }
      return 0;
    }
  }
  return 1;
}
