/*
 * XREFs of xxxMoveSize @ 0x1C02132C4
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C000DCC4 (bSetDevDragWidth.c)
 *     WPP_RECORDER_SF_q @ 0x1C0026920 (WPP_RECORDER_SF_q.c)
 *     IsAdaptiveQueueDetachExempted @ 0x1C00302CC (IsAdaptiveQueueDetachExempted.c)
 *     xxxCapture @ 0x1C0035FA8 (xxxCapture.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     GetProcessDpiServerInfo @ 0x1C0060864 (GetProcessDpiServerInfo.c)
 *     xxxWindowEvent @ 0x1C0087C00 (xxxWindowEvent.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0099E30 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     xxxDispatchMessage @ 0x1C00A54AC (xxxDispatchMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     xxxInternalGetMessage @ 0x1C00BE0D4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C0107B70 (xxxTranslateMessage.c)
 *     SlowAppThreadInShellFrame @ 0x1C011AC54 (SlowAppThreadInShellFrame.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C011BCD4 (-zzzShowCursor@@YAH_N@Z.c)
 *     ChangeComposableCursor @ 0x1C01D49F8 (ChangeComposableCursor.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     xxxWaitMessageEx @ 0x1C01E30A8 (xxxWaitMessageEx.c)
 *     xxxCallMsgFilter @ 0x1C01E73FC (xxxCallMsgFilter.c)
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020B0DC (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020B834 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C0210524 (-xxxQueryShellForSizeCooperation@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C02105B4 (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02116E4 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxDrawDragRect @ 0x1C0211F38 (xxxDrawDragRect.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
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
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 ProcessDpiServerInfo; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD v34[2]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v35; // [rsp+40h] [rbp-29h] BYREF
  __int64 v36; // [rsp+50h] [rbp-19h]
  unsigned int v37[4]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v38[2]; // [rsp+68h] [rbp-1h]
  __int128 v39; // [rsp+78h] [rbp+Fh]
  int v40; // [rsp+D0h] [rbp+67h] BYREF
  int v41; // [rsp+D8h] [rbp+6Fh] BYREF

  *(_OWORD *)v37 = 0LL;
  v3 = 0;
  *(_OWORD *)v38 = 0LL;
  v40 = 0;
  v36 = 0LL;
  result = *((_QWORD *)a1 + 2);
  v39 = 0LL;
  v35 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(result + 424) == v8 && !*(_QWORD *)(gptiCurrent + 664LL) )
  {
    v9 = *(_QWORD *)(v8 + 112);
    if ( v9 )
    {
      if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
      {
        v9 = *(_QWORD *)(v9 + 104);
        if ( !v9 || (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x2A2 )
          v9 = 0LL;
      }
      if ( v9 )
      {
        *(_QWORD *)&v35 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v35;
        *((_QWORD *)&v35 + 1) = v9;
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
      *(_QWORD *)(gptiCurrent + 664LL) = v13;
      v34[0] = v13 + 16;
      v34[1] = a1;
      HMAssignmentLock(v34);
      *(_DWORD *)(v13 + 196) = *(_DWORD *)(v13 + 196) & 0xFFEC7FFF | 0x100000;
      *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 768LL);
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
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
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
      *(_DWORD *)(gptiCurrent + 480LL) |= 0x10u;
      v38[1] = (*(unsigned __int16 *)(v13 + 304) << 16) | *(unsigned __int16 *)(v13 + 300);
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
        EnableDwmSwCursorMoveSize(&v40);
        *(_DWORD *)(v13 + 196) ^= (*(_DWORD *)(v13 + 196) ^ (v40 << 27)) & 0x8000000;
      }
      if ( (*(_DWORD *)(v13 + 196) & 8) == 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
              goto LABEL_56;
            if ( (unsigned int)xxxInternalGetMessage(v37, 0LL, 0, 0, 1, 0) )
              break;
            if ( (*(_DWORD *)(v13 + 196) & 8) != 0 )
              goto LABEL_56;
            if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) == 0
              || IsAdaptiveQueueDetachExempted(gptiCurrent, v19, v20) )
            {
              if ( !(unsigned int)xxxWaitMessageEx(15615LL, 0, 0LL) )
                goto LABEL_56;
            }
            else
            {
              v21 = *(_QWORD *)(gptiCurrent + 424LL);
              v41 = 0;
              v22 = 200;
              if ( *(_DWORD *)(v21 + 392) <= 1u )
                v22 = 5000;
              if ( (unsigned int)xxxWaitMessageEx(15367LL, v22, (enum SLEEP_STATUS *)&v41) || v41 )
              {
                if ( v41 )
                {
                  if ( *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 392LL) > 1u
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 48LL)
                    && !*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 56LL) )
                  {
                    v23 = SlowAppThreadInShellFrame(gptiCurrent, 0LL, 0LL, 1);
                    if ( v23 )
                      TryDetachShellFrame(gptiCurrent, (__int64)v23, v41 == 2, 1);
                  }
                }
              }
              else
              {
LABEL_56:
                if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) != a1 )
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
                if ( v37[2] == 35 )
                {
                  xxxCallHook(2, 0LL, 0LL, 5);
                  v24 = *(_DWORD *)(v13 + 196);
                  LOBYTE(v25) = v24;
                }
                if ( (v24 & 1) != 0 )
                {
                  if ( !(unsigned int)xxxTrackInitSize(a1, v37[2], v38[0], v38[1], (struct _MOVESIZEDATA *)v13) )
                    goto LABEL_69;
                  v25 = *(_DWORD *)(v13 + 196);
                }
                if ( (v25 & 1) == 0 )
                {
                  xxxMS_TrackMove(
                    (unsigned __int64 *)a1,
                    v37[2],
                    v38[0],
                    (unsigned __int16)(WORD2(v39) + *(_WORD *)(v13 + 168)) | ((unsigned __int16)(WORD4(v39)
                                                                                               + *(_WORD *)(v13 + 172)) << 16),
                    (struct _MOVESIZEDATA *)v13);
                  v25 = *(_DWORD *)(v13 + 196);
                }
                if ( (v25 & 8) != 0 )
                  goto LABEL_69;
              }
            }
          }
          if ( v37[2] - 256 <= 9 || v37[2] == 35 || v37[2] - 512 <= 0xE )
          {
            *(_QWORD *)(v13 + 308) = *(_QWORD *)(gptiCurrent + 768LL);
            if ( !v3 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x1800000) != 0 )
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
          if ( !(unsigned int)xxxCallMsgFilter((__int64)v37, (unsigned int)(a2 != 9) + 3) )
          {
            xxxTranslateMessage((__int64)v37, 0);
            *(_DWORD *)(gptiCurrent + 480LL) |= 0x8000u;
            xxxDispatchMessage((__int64)v37);
            *(_DWORD *)(gptiCurrent + 480LL) &= ~0x8000u;
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
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
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
      xxxReportMoveSizeCompletionToShell((struct _MOVESIZEDATA *)v13);
      v29 = *(_DWORD *)(v13 + 196);
      if ( (v29 & 0x8000000) != 0 )
      {
        ChangeComposableCursor(0LL);
        v29 = *(_DWORD *)(v13 + 196);
      }
      *(_DWORD *)(v13 + 196) = v29 & 0xF7EFFFFF;
      AdjustProcessPriorityForDrag((struct _MOVESIZEDATA *)v13);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) == 0 )
      {
        ProcessDpiServerInfo = GetProcessDpiServerInfo(v30);
        bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), *(_DWORD *)(ProcessDpiServerInfo + 4) + 3);
      }
      bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), 0LL, 0LL, 0LL);
      *(_DWORD *)(gptiCurrent + 480LL) &= ~0x10u;
      if ( (*(_DWORD *)(v13 + 196) & 0x20) != 0 && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      {
        GreDeleteObject(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type);
        *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type = 0LL;
        WPP_MAIN_CB.AlignmentRequirement = 0;
      }
      gdwPUDFlags &= ~0x10000000u;
      *(_QWORD *)(gptiCurrent + 664LL) = 0LL;
      HMAssignmentUnlock(v13 + 16);
      v32 = *(_QWORD *)v13;
      if ( *(_QWORD *)(*(_QWORD *)v13 + 8LL) != v13 || (v33 = *(_QWORD **)(v13 + 8), *v33 != v13) )
LABEL_86:
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      Win32FreePool(v13);
      return zzzShowCursor(0LL);
    }
  }
  return result;
}
