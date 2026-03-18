/*
 * XREFs of ?xxxActivateOnMinimize@@YGHPAUtagWND@@@Z @ 0x256DC
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _xxxMinimizeHungWindow@4 @ 0x19E29E (_xxxMinimizeHungWindow@4.c)
 * Callees:
 *     ?xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x19168 (-xxxSetForegroundWindowWithOptions@@YG_NPAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroun.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _GetWindowCloakState@4 @ 0x26960 (_GetWindowCloakState@4.c)
 *     _SkipWindowOnMonitor@4 @ 0x92526 (_SkipWindowOnMonitor@4.c)
 *     _GetLastTopMostWindow@4 @ 0x933C8 (_GetLastTopMostWindow@4.c)
 *     _GetThreadDesktopWindow@4 @ 0x9E52A (_GetThreadDesktopWindow@4.c)
 *     ?ForceForegroundChangeOnMinimize@@YGHPAUtagWND@@0@Z @ 0xAD5E8 (-ForceForegroundChangeOnMinimize@@YGHPAUtagWND@@0@Z.c)
 */

int __thiscall xxxActivateOnMinimize(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  bool v4; // zf
  int v5; // eax
  BOOL v6; // edx
  int v7; // esi
  int LastTopMostWindow; // eax
  unsigned int *v9; // edi
  unsigned int *v10; // esi
  unsigned int *v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  char v14; // bl
  int v15; // edi
  int v16; // edx
  int v17; // ecx
  unsigned int v19; // eax
  int ThreadDesktopWindow; // eax
  struct tagWND *v21; // [esp+0h] [ebp-30h]
  struct tagWND *v22; // [esp+4h] [ebp-2Ch]
  int v23; // [esp+10h] [ebp-20h] BYREF
  unsigned int *v24; // [esp+14h] [ebp-1Ch]
  int v25; // [esp+18h] [ebp-18h]
  _DWORD *v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  int v28; // [esp+24h] [ebp-Ch]
  int v29; // [esp+28h] [ebp-8h]
  BOOL v30; // [esp+2Ch] [ebp-4h]

  v28 = 0;
  v2 = _gptiCurrent;
  v26 = this;
  v3 = *(_DWORD *)(_gptiCurrent + 236);
  v29 = _gptiCurrent;
  v4 = *(_DWORD *)(v3 + 68) == 0;
  v5 = this[5];
  v6 = !v4;
  v30 = v6;
  v7 = *(_DWORD *)(v5 + 148);
  v23 = 0;
  v27 = v7;
  v24 = 0;
  v25 = 0;
  if ( v7 == 1 )
  {
    LastTopMostWindow = GetLastTopMostWindow(this);
    v2 = v29;
    v6 = v30;
  }
  else
  {
    LastTopMostWindow = 0;
  }
  if ( !LastTopMostWindow )
  {
    v19 = this[14];
    goto LABEL_31;
  }
  v9 = *(unsigned int **)(LastTopMostWindow + 48);
  while ( 1 )
  {
    if ( v6 )
      v10 = *(unsigned int **)(*(_DWORD *)(v2 + 236) + 68);
    else
      v10 = v9;
    v11 = 0;
    if ( v10 )
    {
      do
      {
        if ( (*(_BYTE *)(_HMPheFromObject(v10) + 13) & 1) == 0 )
        {
          v12 = v10[5];
          if ( (*(_BYTE *)(v12 + 19) & 8) == 0 && (*(_BYTE *)(v12 + 23) & 0x18) == 0x10 && !GetWindowCloakState(v10) )
          {
            v13 = v10[5];
            if ( ((*(_BYTE *)(v13 + 23) & 0x20) == 0 || (*(_BYTE *)(v13 + 15) & 7) == 1)
              && (v27 != 1 || *(_DWORD *)(v13 + 148) == 1)
              && !SkipWindowOnMonitor(v10) )
            {
              if ( *(char *)(v10[5] + 16) >= 0 )
                break;
              if ( !v11 )
                v11 = v10;
            }
          }
        }
        if ( v30 )
        {
          v30 = 0;
          v10 = v9;
        }
        else
        {
          v10 = (unsigned int *)v10[12];
        }
      }
      while ( v10 );
      if ( v10 )
        goto LABEL_27;
      v6 = v30;
    }
    if ( v28 )
      break;
    v28 = 1;
    if ( v9 )
    {
      v19 = v9[14];
      v2 = v29;
LABEL_31:
      v9 = *(unsigned int **)(v19 + 60);
    }
    else
    {
      ThreadDesktopWindow = GetThreadDesktopWindow(0);
      if ( ThreadDesktopWindow )
        v9 = *(unsigned int **)(ThreadDesktopWindow + 60);
      else
        v9 = 0;
      v2 = v29;
      v6 = v30;
    }
  }
  v10 = v11;
  if ( !v11 )
    return 0;
LABEL_27:
  v14 = v29;
  v15 = 3;
  v23 = *(_DWORD *)(v29 + 228);
  *(_DWORD *)(v29 + 228) = &v23;
  v24 = v10;
  HMLockObject(v10);
  if ( ForceForegroundChangeOnMinimize(v21, v22) )
  {
    v15 = 7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q(v17, v16, 2u, 10, (int)&WPP_0ee3406538873864a1af3aa425fcf58b_Traceguids, v14);
    }
  }
  xxxSetForegroundWindowWithOptions(v10, v15, 0, 0);
  ThreadUnlock1();
  return 1;
}
