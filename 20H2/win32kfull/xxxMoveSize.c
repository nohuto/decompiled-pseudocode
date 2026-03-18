/*
 * XREFs of xxxMoveSize @ 0x1C0212444
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C0027E44 (bSetDevDragWidth.c)
 *     SlowAppThreadInShellFrame @ 0x1C0029684 (SlowAppThreadInShellFrame.c)
 *     bSetDevDragRect @ 0x1C002A4E0 (bSetDevDragRect.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C002CE34 (IsAdaptiveQueueDetachExempted.c)
 *     GetProcessDpiServerInfo @ 0x1C003331C (GetProcessDpiServerInfo.c)
 *     xxxCapture @ 0x1C0039468 (xxxCapture.c)
 *     WPP_RECORDER_SF_q @ 0x1C003EC50 (WPP_RECORDER_SF_q.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     xxxDispatchMessage @ 0x1C004CFF0 (xxxDispatchMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0055B10 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     xxxInternalGetMessage @ 0x1C007E984 (xxxInternalGetMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     xxxTranslateMessage @ 0x1C0108870 (xxxTranslateMessage.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C011CC94 (-zzzShowCursor@@YAH_N@Z.c)
 *     ChangeComposableCursor @ 0x1C01D3BE8 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01E1AF4 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E23E8 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E673C (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020A25C (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020A9B4 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F6A4 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020F734 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0210864 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C02110B8 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C02119DC (xxxInitializeMoveSizeData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveSize(struct tagWND *a1, unsigned int a2, int a3)
{
  int v3; // r15d
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  struct tagWND *v15; // rdx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned int v22; // edx
  struct tagTHREADINFO *v23; // rax
  int v24; // eax
  int v25; // ecx
  struct tagWND *v26; // rdx
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // r8d
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 ProcessDpiServerInfo; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD v37[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v38; // [rsp+40h] [rbp-29h] BYREF
  __int64 v39; // [rsp+50h] [rbp-19h]
  unsigned int v40[4]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v41[2]; // [rsp+68h] [rbp-1h]
  __int128 v42; // [rsp+78h] [rbp+Fh]
  int v43; // [rsp+D0h] [rbp+67h] BYREF
  int v44; // [rsp+D8h] [rbp+6Fh] BYREF

  *(_OWORD *)v40 = 0LL;
  v3 = 0;
  *(_OWORD *)v41 = 0LL;
  v43 = 0;
  v39 = 0LL;
  result = *((_QWORD *)a1 + 2);
  v42 = 0LL;
  v38 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( *(_QWORD *)(result + 432) == v8 && !*(_QWORD *)(gptiCurrent + 672LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x2FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        *(_QWORD *)&v38 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v38;
        *((_QWORD *)&v38 + 1) = v9;
        HMLockObject(v9);
        xxxSendMessage(v9, 0x14Fu, 0LL, 0LL);
        ThreadUnlock1(v11, v10, v12);
      }
    }
    result = Win32AllocPoolWithQuotaZInit(344LL, 1936552789LL);
    v13 = result;
    if ( result )
    {
      v14 = gActiveMoveSizeDataList;
      if ( *(__int64 **)(gActiveMoveSizeDataList + 8) != &gActiveMoveSizeDataList )
        goto LABEL_86;
      *(_QWORD *)(v13 + 8) = &gActiveMoveSizeDataList;
      *(_QWORD *)v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      gActiveMoveSizeDataList = v13;
      *(_QWORD *)(gptiCurrent + 672LL) = v13;
      v37[0] = v13 + 16;
      v37[1] = a1;
      HMAssignmentLock(v37);
      *(_DWORD *)(v13 + 196) = *(_DWORD *)(v13 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      xxxInitializeMoveSizeData(a1, (struct _MOVESIZEDATA *)v13, a2, a3, 0);
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 )
        gdwPUDFlags |= 0x10000000u;
      else
        gdwPUDFlags &= ~0x10000000u;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), 2);
      xxxQueryShellForSizeCooperation((struct _MOVESIZEDATA *)v13);
      if ( gpqForeground )
      {
        v15 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v15 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
          {
            v16 = 33;
            if ( *((_QWORD *)v15 + 2) == gptiCurrent )
              v15 = a1;
            else
              v16 = 49;
            xxxWindowEvent(0x80000004, v15, 0, 2u, v16);
          }
        }
      }
      xxxWindowEvent(0xAu, a1, 0, 0, 0);
      xxxWindowEvent(0x19u, a1, 0, a2, 0);
      xxxDrawDragRect((struct _MOVESIZEDATA *)v13);
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x10u;
      v41[1] = (*(unsigned __int16 *)(v13 + 304) << 16) | *(unsigned __int16 *)(v13 + 300);
      xxxSendMessage((unsigned __int64)a1, 0x231u, 0LL, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_q(
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          v17,
          1,
          17,
          (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids,
          (char)a1);
      }
      xxxCapture(gptiCurrent, a1, 6);
      CCursorClip::EnableSpeedBump(gpCursorClip, (*(_DWORD *)(v13 + 196) & 0xC00) != 0);
      LOBYTE(v18) = 1;
      zzzShowCursor(v18);
      if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      {
        EnableDwmSwCursorMoveSize(&v43);
        *(_DWORD *)(v13 + 196) ^= (*(_DWORD *)(v13 + 196) ^ (v43 << 27)) & 0x8000000;
      }
      if ( (*(_DWORD *)(v13 + 196) & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
              goto LABEL_56;
            if ( (unsigned int)xxxInternalGetMessage(v40, 0LL, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v13 + 196) & 8) != 0 )
              goto LABEL_56;
            if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 0x40000) == 0
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v19, v20) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0, 0LL) )
                goto LABEL_56;
            }
            else
            {
              v21 = *(_QWORD *)(gptiCurrent + 432LL);
              v44 = 0;
              v22 = 200;
              if ( *(_DWORD *)(v21 + 392) <= 1u )
                v22 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(15367LL, v22, (enum SLEEP_STATUS *)&v44) || v44 )
              {
                if ( v44 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 392LL) > 1u
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 48LL)
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) + 56LL) )
                  {
                    v23 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v23 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v23, v44 == 2, 1);
                  }
                }
              }
              else
              {
LABEL_56:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) != a1 )
                {
                  xxxMS_TrackMove((unsigned __int64 *)a1, 256, 0x1BuLL, 1LL, (struct _MOVESIZEDATA *)v13);
                  goto LABEL_69;
                }
                v24 = *(_DWORD *)(v13 + 196);
                if ( (v24 & 8) != 0 )
                {
                  *(_DWORD *)(v13 + 196) = v24 & 0xFFFFFFF7;
                  goto LABEL_69;
                }
                LOBYTE(v25) = *(_DWORD *)(v13 + 196);
                if ( v40[2] == 35 )
                {
                  xxxCallHook(2, 0LL, 0LL, 5);
                  v24 = *(_DWORD *)(v13 + 196);
                  LOBYTE(v25) = v24;
                }
                if ( (v24 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(a1, v40[2], v41[0], v41[1], (struct _MOVESIZEDATA *)v13) )
                    goto LABEL_69;
                  v25 = *(_DWORD *)(v13 + 196);
                }
                if ( (v25 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v40[2],
                    v41[0],
                    (unsigned __int16)(WORD2(v42) + *(_WORD *)(v13 + 168)) | ((unsigned __int16)(WORD4(v42)
                                                                                               + *(_WORD *)(v13 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v13);
                  v25 = *(_DWORD *)(v13 + 196);
                }
                if ( (v25 & 8) != 0 )
                  goto LABEL_69;
              }
            }
          }
          if ( v40[2] - 256 <= 9 || v40[2] == 35 || v40[2] - 512 <= 0xE )
          {
            *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 776LL);
            if ( !v3 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x1800000) != 0 )
              {
                v3 = 2;
                *(_DWORD *)(v13 + 196) ^= (*(_DWORD *)(v13 + 196) ^ (*(_DWORD *)(v13 + 196) + 0x8000)) & 0x38000;
              }
              else
              {
                v3 = 1;
              }
            }
            goto LABEL_56;
          }
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v40, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v40, 0);
            *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
            xxxDispatchMessage(v40);
            *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
          }
        }
      }
LABEL_69:
      CCursorClip::EnableSpeedBump(gpCursorClip, 0);
      if ( gpqForeground )
      {
        v26 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v26 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
            xxxWindowEvent(0x80000005, v26, 0, 2u, 0x21u);
        }
      }
      xxxWindowEvent(0xBu, a1, 0, 0, 0);
      xxxSendMessage((unsigned __int64)a1, 0x232u, 0LL, 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = 4;
        WPP_RECORDER_SF_q(v28, v27, 1, 18, (__int64)&WPP_44fe173a72dc32ad3264e41cf6895406_Traceguids, (char)a1);
      }
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v13, v27, v29);
      v30 = *(_DWORD *)(v13 + 196);
      if ( (v30 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v30 = *(_DWORD *)(v13 + 196);
      }
      *(_DWORD *)(v13 + 196) = v30 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v32, v31, v33);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x10u;
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 672LL) = 0LL;
      HMAssignmentUnlock(v13 + 16);
      v35 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v36 = *(_QWORD **)(v13 + 8), *v36 != v13) )
LABEL_86:
        __fastfail(3u);
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
      Win32FreePool(v13);
      return zzzShowCursor(0LL);
    }
  }
  return result;
}
