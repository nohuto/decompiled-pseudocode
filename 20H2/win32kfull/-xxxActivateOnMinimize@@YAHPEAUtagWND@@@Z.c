/*
 * XREFs of ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C000F220
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     xxxMinimizeHungWindow @ 0x1C023ED30 (xxxMinimizeHungWindow.c)
 * Callees:
 *     SkipWindowOnMonitor @ 0x1C000F9B4 (SkipWindowOnMonitor.c)
 *     GetLastTopMostWindow @ 0x1C00141C4 (GetLastTopMostWindow.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C00388C0 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     CanForceForeground @ 0x1C003BA20 (CanForceForeground.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     GetWindowCloakState @ 0x1C004042C (GetWindowCloakState.c)
 *     GetThreadDesktopWindow @ 0x1C00FBC68 (GetThreadDesktopWindow.c)
 */

__int64 __fastcall xxxActivateOnMinimize(struct tagWND *a1)
{
  int v1; // r12d
  BOOL v3; // r14d
  int v4; // r13d
  __int64 LastTopMostWindow; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 ThreadDesktopWindow; // rax
  unsigned int v12; // edi
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // edx
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h]

  v1 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) != 0LL;
  v4 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
  LastTopMostWindow = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( v4 == 1 )
    LastTopMostWindow = GetLastTopMostWindow();
  if ( !LastTopMostWindow )
  {
    ThreadDesktopWindow = *((_QWORD *)a1 + 13);
    goto LABEL_28;
  }
  v6 = *(_QWORD **)(LastTopMostWindow + 88);
  while ( 1 )
  {
    v7 = v3 ? *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 128LL) : v6;
    v8 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v7) + 25) & 1) == 0 )
        {
          v9 = v7[5];
          if ( (*(_BYTE *)(v9 + 27) & 8) == 0
            && (*(_BYTE *)(v9 + 31) & 0x18) == 0x10
            && !(unsigned int)GetWindowCloakState(v7) )
          {
            v10 = v7[5];
            if ( ((*(_BYTE *)(v10 + 31) & 0x20) == 0 || (*(_BYTE *)(v10 + 23) & 7) == 1)
              && (v4 != 1 || *(_DWORD *)(v10 + 236) == 1)
              && !(unsigned int)SkipWindowOnMonitor(v7) )
            {
              if ( *(char *)(v7[5] + 24LL) >= 0 )
                break;
              if ( !v8 )
                v8 = v7;
            }
          }
        }
        if ( v3 )
        {
          v3 = 0;
          v7 = v6;
        }
        else
        {
          v7 = (_QWORD *)v7[11];
        }
      }
      while ( v7 );
      if ( v7 )
        break;
    }
    if ( v1 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      break;
    }
    v1 = 1;
    if ( v6 )
    {
      ThreadDesktopWindow = v6[13];
      goto LABEL_28;
    }
    ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
    if ( ThreadDesktopWindow )
LABEL_28:
      v6 = *(_QWORD **)(ThreadDesktopWindow + 112);
    else
      v6 = 0LL;
  }
  *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
  v12 = 3;
  *(_QWORD *)(gptiCurrent + 416LL) = &v18;
  *((_QWORD *)&v18 + 1) = v7;
  HMLockObject(v7);
  v13 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v13 + 1232) & 0x40000) != 0 && *(struct tagWND **)(v13 + 1392) == a1 )
  {
    v15 = *(_QWORD *)(v13 + 432);
    if ( v15 == gpqForeground && *(struct tagWND **)(v15 + 120) == a1 )
    {
      v16 = *(_QWORD *)(v13 + 1400);
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 16) == gptiForeground
          && *(_QWORD *)(v7[2] + 432LL) != gpqForeground
          && !(unsigned int)CanForceForeground(*(_QWORD *)(v13 + 424)) )
        {
          v12 = 7;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v17) = 4;
            WPP_RECORDER_SF_q(
              (unsigned int)&WPP_0ee3406538873864a1af3aa425fcf58b_Traceguids,
              v17,
              2,
              10,
              (__int64)&WPP_0ee3406538873864a1af3aa425fcf58b_Traceguids,
              gptiCurrent);
          }
        }
      }
    }
  }
  xxxSetForegroundWindowWithOptions(v7, v12, 0LL);
  ThreadUnlock1();
  return 1LL;
}
