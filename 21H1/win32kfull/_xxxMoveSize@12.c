/*
 * XREFs of _xxxMoveSize@12 @ 0x177959
 * Callers:
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 * Callees:
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     ?xxxCallHook@@YGHHIJH@Z @ 0x6A6D0 (-xxxCallHook@@YGHHIJH@Z.c)
 *     _GetProcessDpiServerInfo@0 @ 0x91B9E (_GetProcessDpiServerInfo@0.c)
 *     _xxxCallMsgFilter@8 @ 0x94CF8 (_xxxCallMsgFilter@8.c)
 *     _xxxInternalGetMessage@24 @ 0xA199C (_xxxInternalGetMessage@24.c)
 *     _xxxWaitMessageEx@12 @ 0xA19D2 (_xxxWaitMessageEx@12.c)
 *     _xxxTranslateMessage@8 @ 0xA5F1E (_xxxTranslateMessage@8.c)
 *     ?zzzShowCursor@@YGH_N@Z @ 0xAEA1C (-zzzShowCursor@@YGH_N@Z.c)
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _IsAdaptiveQueueDetachExempted@4 @ 0xC1162 (_IsAdaptiveQueueDetachExempted@4.c)
 *     _SlowAppThreadInShellFrame@16 @ 0xC4096 (_SlowAppThreadInShellFrame@16.c)
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     _bSetDevDragWidth@8 @ 0xDB5E6 (_bSetDevDragWidth@8.c)
 *     _ChangeComposableCursor@4 @ 0x143332 (_ChangeComposableCursor@4.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     ?AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z @ 0x170B43 (-AdjustProcessPriorityForDrag@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z @ 0x174748 (-xxxMS_TrackMove@@YGXPAUtagWND@@W4_WM_VALUE@@IJPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z @ 0x1751C3 (-xxxQueryShellForSizeCooperation@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z @ 0x17522A (-xxxReportMoveSizeCompletionToShell@@YGXPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z @ 0x176158 (-xxxTrackInitSize@@YGHPAUtagWND@@IIJPAU_MOVESIZEDATA@@@Z.c)
 *     _xxxDrawDragRect@12 @ 0x176759 (_xxxDrawDragRect@12.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall xxxMoveSize(struct tagEVENTHOOK *a1, struct tagWND *a2, int a3)
{
  int v4; // esi
  int result; // eax
  _DWORD *v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // eax
  struct tagEVENTHOOK *v10; // ecx
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v17; // eax
  struct _LIST_ENTRY *v18; // eax
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  int v22; // ecx
  struct tagEVENTHOOK *v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int ProcessDpiServerInfo; // eax
  int v28; // ecx
  _DWORD *v29; // eax
  int v30; // [esp+0h] [ebp-44h]
  struct _MOVESIZEDATA *v31; // [esp+4h] [ebp-40h]
  int v32[7]; // [esp+10h] [ebp-34h] BYREF
  int v33; // [esp+2Ch] [ebp-18h] BYREF
  _DWORD *v34; // [esp+30h] [ebp-14h]
  int v35; // [esp+34h] [ebp-10h]
  struct tagEVENTHOOK *v36; // [esp+38h] [ebp-Ch]
  int v37; // [esp+3Ch] [ebp-8h]
  struct tagWND *v38; // [esp+40h] [ebp-4h]

  v36 = a1;
  v38 = a2;
  memset(v32, 0, sizeof(v32));
  v37 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v4 = *(_DWORD *)(_gptiCurrent + 236);
  result = *((_DWORD *)a1 + 2);
  if ( *(_DWORD *)(result + 236) == v4 && !*(_DWORD *)(_gptiCurrent + 368) )
  {
    v6 = *(_DWORD **)(v4 + 60);
    if ( v6 )
    {
      if ( (*(_WORD *)(v6[5] + 30) & 0x3FFF) != 0x2A2 )
      {
        v6 = (_DWORD *)v6[14];
        if ( !v6 || (*(_WORD *)(v6[5] + 30) & 0x3FFF) != 0x2A2 )
          v6 = 0;
      }
      if ( v6 )
      {
        v33 = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = &v33;
        v34 = v6;
        HMLockObject(v6);
        xxxSendMessage(v6, 0, 0);
        ThreadUnlock1();
      }
    }
    result = Win32AllocPoolWithQuotaZInit(312, 1936552789);
    v8 = result;
    if ( result )
    {
      v9 = gActiveMoveSizeDataList;
      if ( *(int **)(gActiveMoveSizeDataList + 4) != &gActiveMoveSizeDataList )
        goto LABEL_90;
      *(_DWORD *)v8 = gActiveMoveSizeDataList;
      *(_DWORD *)(v8 + 4) = &gActiveMoveSizeDataList;
      *(_DWORD *)(v9 + 4) = v8;
      gActiveMoveSizeDataList = v8;
      *(_DWORD *)(_gptiCurrent + 368) = v8;
      HMAssignmentLock(&gActiveMoveSizeDataList, v7);
      *(_DWORD *)(v8 + 184) = *(_DWORD *)(v8 + 184) & 0xFFEC7FFF | 0x100000;
      *(_DWORD *)(v8 + 276) = *(_DWORD *)(_gptiCurrent + 428);
      *(_DWORD *)(v8 + 280) = *(_DWORD *)(_gptiCurrent + 432);
      AdjustProcessPriorityForDrag((_DWORD *)v8);
      xxxInitializeMoveSizeData(a1, (struct _MOVESIZEDATA *)v8, (int)v38, a3, 0);
      if ( (*(_BYTE *)(v8 + 184) & 0x20) != 0 )
        _gdwPUDFlags |= 0x10000000u;
      else
        _gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 22) & 4) == 0 )
        bSetDevDragWidth(*(_DWORD *)(_gpDispInfo + 20), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)(v8 + 8));
      if ( _gpqForeground )
      {
        v10 = *(struct tagEVENTHOOK **)(_gpqForeground + 60);
        if ( v10 )
        {
          if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
          {
            v11 = *((_DWORD *)v10 + 2);
            if ( v11 == _gptiCurrent )
              v10 = a1;
            xxxWindowEvent(0x80000004, v10, 0, (struct tagWND *)2, v11 == _gptiCurrent ? 33 : 49);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0, 0, 0);
      xxxWindowEvent(0x19u, a1, 0, v38, 0);
      xxxDrawDragRect((char *)v8, 0);
      *(_DWORD *)(_gptiCurrent + 264) |= 0x10u;
      v32[3] = *(unsigned __int16 *)(v8 + 268) | (*(unsigned __int16 *)(v8 + 272) << 16);
      xxxSendMessage(a1, 0, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_q(v13, v12, 1u, 17, (int)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, (char)a1);
      }
      xxxCapture(_gptiCurrent, (int)a1, 6);
      CCursorClip::EnableSpeedBump(_gpCursorClip, (*(_DWORD *)(v8 + 184) & 0xC00) != 0);
      zzzShowCursor(1);
      if ( IsToplevelWindowDesktopComposed(a1) )
      {
        v14 = 0;
        if ( !_gProtocolType && !_gbRemoteFxSession )
        {
          ChangeComposableCursor((void *)1);
          v14 = 0x8000000;
        }
        v15 = v14 | *(_DWORD *)(v8 + 184) & 0xF7FFFFFF;
        *(_DWORD *)(v8 + 184) = v15;
      }
      else
      {
        v15 = *(_DWORD *)(v8 + 184);
      }
      if ( (v15 & 8) != 0 )
        goto LABEL_73;
LABEL_32:
      if ( *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) != a1 )
        goto LABEL_60;
      while ( 1 )
      {
        if ( xxxInternalGetMessage(v32, 0, 0, 1u, 0) )
        {
          if ( v32[1] >= 0x200u && v32[1] <= 0x20Eu || v32[1] == 35 || v32[1] >= 0x100u && v32[1] <= 0x109u )
          {
            v20 = v37 == 0;
            *(_DWORD *)(v8 + 276) = *(_DWORD *)(_gptiCurrent + 428);
            *(_DWORD *)(v8 + 280) = *(_DWORD *)(_gptiCurrent + 432);
            if ( v20 )
            {
              if ( (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) & 0x1800000) != 0 )
              {
                v37 = 2;
                *(_DWORD *)(v8 + 184) ^= (*(_DWORD *)(v8 + 184) ^ (*(_DWORD *)(v8 + 184) + 0x8000)) & 0x38000;
              }
              else
              {
                v37 = 1;
              }
            }
LABEL_60:
            if ( *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) != a1 )
            {
              xxxMS_TrackMove((struct tagHOOK **)a1, 256, 27, 1, v8);
              goto LABEL_73;
            }
            v21 = *(_DWORD *)(v8 + 184);
            if ( (v21 & 8) != 0 )
            {
              *(_DWORD *)(v8 + 184) = v21 & 0xFFFFFFF7;
              goto LABEL_73;
            }
            v22 = *(_DWORD *)(v8 + 184);
            if ( v32[1] == 35 )
            {
              xxxCallHook(0, 2, 0, 5u, v30, (int)v31);
              v21 = *(_DWORD *)(v8 + 184);
              LOBYTE(v22) = v21;
            }
            if ( (v21 & 1) == 0 )
            {
LABEL_67:
              if ( (v22 & 1) == 0 )
              {
                xxxMS_TrackMove(
                  (struct tagHOOK **)a1,
                  v32[1],
                  v32[2],
                  (unsigned __int16)(LOWORD(v32[5]) + *(_WORD *)(v8 + 156)) | ((unsigned __int16)(LOWORD(v32[6])
                                                                                                + *(_WORD *)(v8 + 160)) << 16),
                  v8);
                v22 = *(_DWORD *)(v8 + 184);
              }
              if ( (v22 & 8) != 0 )
                goto LABEL_73;
              goto LABEL_32;
            }
            if ( xxxTrackInitSize(v32[1], (unsigned int *)a1, (struct tagWND *)v32[2], v32[3], (_DWORD *)v8, v30, v31) )
            {
              v22 = *(_DWORD *)(v8 + 184);
              goto LABEL_67;
            }
LABEL_73:
            CCursorClip::EnableSpeedBump(_gpCursorClip, 0);
            if ( _gpqForeground )
            {
              v23 = *(struct tagEVENTHOOK **)(_gpqForeground + 60);
              if ( v23 )
              {
                if ( _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
                  xxxWindowEvent(0x80000005, v23, 0, (struct tagWND *)2, 33);
              }
            }
            xxxWindowEvent(0xBu, a1, 0, 0, 0);
            xxxSendMessage(a1, 0, 0);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = 4;
              WPP_RECORDER_SF_q(v25, v24, 1u, 18, (int)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, (char)a1);
            }
            xxxReportMoveSizeCompletionToShell((_DWORD *)v8);
            v26 = *(_DWORD *)(v8 + 184);
            if ( (v26 & 0x8000000) != 0 )
            {
              ChangeComposableCursor(0);
              v26 = *(_DWORD *)(v8 + 184);
            }
            *(_DWORD *)(v8 + 184) = v26 & 0xF7EFFFFF;
            AdjustProcessPriorityForDrag((_DWORD *)v8);
            if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 22) & 4) == 0 )
            {
              ProcessDpiServerInfo = GetProcessDpiServerInfo();
              bSetDevDragWidth(*(_DWORD *)(_gpDispInfo + 20), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
            }
            bSetDevDragRect(*(_DWORD **)(_gpDispInfo + 20), 0, 0, 0);
            *(_DWORD *)(_gptiCurrent + 264) &= ~0x10u;
            if ( (*(_BYTE *)(v8 + 184) & 0x20) != 0 && ghrgnUpdateSave )
            {
              GreDeleteObject(ghrgnUpdateSave);
              ghrgnUpdateSave = 0;
              gnUpdateSave = 0;
            }
            _gdwPUDFlags &= ~0x10000000u;
            *(_DWORD *)(_gptiCurrent + 368) = 0;
            HMAssignmentUnlock(v8 + 8);
            v28 = *(_DWORD *)v8;
            if ( *(_DWORD *)(*(_DWORD *)v8 + 4) == v8 )
            {
              v29 = *(_DWORD **)(v8 + 4);
              if ( *v29 == v8 )
              {
                *v29 = v28;
                *(_DWORD *)(v28 + 4) = v29;
                Win32FreePool(v8);
                return zzzShowCursor(0);
              }
            }
LABEL_90:
            __fastfail(3u);
          }
          if ( !xxxCallMsgFilter((unsigned int *)v32, (v38 != (struct tagWND *)9) + 3) )
          {
            xxxTranslateMessage((int)v32, 0);
            *(_DWORD *)(_gptiCurrent + 264) |= 0x8000u;
            xxxDispatchMessage((unsigned int *)v32);
            *(_DWORD *)(_gptiCurrent + 264) &= ~0x8000u;
          }
        }
        else
        {
          if ( (*(_BYTE *)(v8 + 184) & 8) != 0 )
            goto LABEL_60;
          if ( (*(_DWORD *)(_gptiCurrent + 688) & 0x40000) == 0 || IsAdaptiveQueueDetachExempted(_gptiCurrent) )
          {
            if ( !xxxWaitMessageEx((void *)0x3CFF, 0) )
              goto LABEL_60;
          }
          else
          {
            a3 = 0;
            if ( !xxxWaitMessageEx((void *)0x3C07, (int)&a3) && !a3 )
              goto LABEL_60;
            if ( a3 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 288) > 1u )
              {
                CurrentThread = KeGetCurrentThread();
                if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 24) )
                {
                  v17 = KeGetCurrentThread();
                  if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v17) + 252) + 28) )
                  {
                    v18 = (struct _LIST_ENTRY *)SlowAppThreadInShellFrame(_gptiCurrent, 0, 0, 1);
                    v19 = 0;
                    if ( v18 )
                    {
                      LOBYTE(v19) = a3 == 2;
                      TryDetachShellFrame(_gptiCurrent, v18, v19, 1);
                    }
                  }
                }
              }
            }
          }
        }
        if ( *(struct tagEVENTHOOK **)(*(_DWORD *)(_gptiCurrent + 236) + 56) != a1 )
          goto LABEL_60;
      }
    }
  }
  return result;
}
