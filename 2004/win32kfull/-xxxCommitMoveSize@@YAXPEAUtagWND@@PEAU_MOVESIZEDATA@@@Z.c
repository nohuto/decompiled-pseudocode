/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020F978 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02103CC (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     CkptRestore @ 0x1C00256D4 (CkptRestore.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020C2A4 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020C31C (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C020CC48 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020CF40 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020F4FC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0211D00 (WPP_RECORDER_SF_qdddd.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // r14d
  struct _MOVESIZEDATA *v6; // rdx
  int v7; // r8d
  unsigned __int8 v8; // al
  int v9; // r12d
  struct tagRECT *v10; // rdi
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  int v15; // r8d
  LONG v16; // ecx
  __int64 v17; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // r8
  char v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT *v34; // rdi
  int v35; // eax
  int v36; // edi
  int v37; // ecx
  int v38; // r10d
  int v39; // eax
  int v40; // ecx
  int v41; // edx
  int v42; // ecx
  __int64 v43; // rdx
  char v44; // al
  __int64 v45; // rdx
  int v46; // [rsp+20h] [rbp-49h]
  __int128 v47; // [rsp+50h] [rbp-19h] BYREF
  __int64 v48; // [rsp+60h] [rbp-9h]
  __int128 v49; // [rsp+68h] [rbp-1h] BYREF
  __int64 v50; // [rsp+78h] [rbp+Fh]
  struct tagRECT v51; // [rsp+80h] [rbp+17h] BYREF

  v48 = 0LL;
  v51 = 0LL;
  v50 = 0LL;
  v47 = 0LL;
  v4 = 0;
  v49 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v31 = *((_DWORD *)a2 + 49);
    if ( (v31 & 0x7000) == 0x1000 && (v31 & 0x20) == 0
      || (v32 = *((_QWORD *)a1 + 5), LOBYTE(v32) = ((v31 & 0x100000) == 0) & *(_BYTE *)(v32 + 31), (v32 & 1) != 0) )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
      v34 = Prop;
      if ( Prop )
      {
        v51 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v51);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v51, v34);
        MakeArrangedStateObservable(a2);
      }
    }
    v35 = *((_DWORD *)a2 + 44);
    v36 = 516;
    if ( (v35 == 9 && !v5 || v35 == 10) && !v4 )
      v36 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v32,
        v31,
        v7,
        14,
        v46,
        (char)a1,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9));
    v37 = v36 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v37 = v36;
    v38 = v37;
    if ( (v37 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v38 = v37 | 0x100000;
    v39 = *((_DWORD *)a2 + 70);
    v40 = *((_DWORD *)a2 + 9);
    v41 = v38 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v39 & 8) == 0 )
      v41 = v38;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v40 - *((_DWORD *)a2 + 7),
      v41);
    v42 = *((_DWORD *)a2 + 49);
    if ( (v42 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_96;
    v43 = *((_QWORD *)a1 + 5);
    v44 = *(_BYTE *)(v43 + 233) & 3;
    if ( v44 == 3 )
    {
      v45 = 3537LL;
    }
    else if ( v44 )
    {
      v45 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v43 + 31) & 0x20) != 0 )
        goto LABEL_96;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v45 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v45 = 3530LL;
      }
      else
      {
        if ( (v42 & 0x6000) == 0 )
          goto LABEL_96;
        v45 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v45, 1LL);
LABEL_96:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_98;
  }
  v8 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v9 = v8;
  if ( (*((_DWORD *)a2 + 49) & 0x300) != 0 || v8 )
    v4 = 1;
  v10 = (struct tagRECT *)GetProp((__int64)a1, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
  if ( v10 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v11 = *((_DWORD *)a2 + 49), (v11 & 0x6000) == 0x6000)
      && (v11 & 0x300) == 0x300 )
    {
      v10->left = *((_DWORD *)a2 + 6);
      v10->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v12 = *((_QWORD *)a2 + 27);
      if ( v12 == *((_QWORD *)a2 + 29) )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000) == 0
          && v4
          && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
        {
          *v10 = *(struct tagRECT *)((char *)a2 + 120);
        }
      }
      else if ( v9 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) != 0 )
      {
        if ( (*((_DWORD *)a2 + 49) & 0x1000000) != 0 )
        {
          v13 = *(_QWORD *)&v10->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&v10->left == *((_QWORD *)a2 + 19) )
            v13 = *(_QWORD *)&v10->right - *((_QWORD *)a2 + 20);
          if ( v13 )
          {
            *v10 = *(struct tagRECT *)((char *)a2 + 152);
            v12 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v12 = MonitorFromRect(v10, 2LL, 0);
        v14 = *((_QWORD *)a2 + 29);
        v15 = *((_DWORD *)a2 + 49);
        if ( (v15 & 0x300) == 0x300 )
        {
          v16 = *((_DWORD *)a2 + 75);
          if ( v10->left <= v16 && v16 < v10->right )
          {
            v17 = MonitorFromRect(v10, 2LL, 0);
            v15 = *((_DWORD *)a2 + 49);
            v14 = v17;
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 && (v15 & 0x300) == 0x300 )
          *((_DWORD *)a2 + 49) = v15 | 0x80000;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v47 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v47;
        *((_QWORD *)&v47 + 1) = v12;
        if ( v12 )
          HMLockObject(v12);
        v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v49 = *(_QWORD *)(v19 + 408);
        *(_QWORD *)(v19 + 408) = &v49;
        *((_QWORD *)&v49 + 1) = v14;
        if ( v14 )
          HMLockObject(v14);
        if ( *(_WORD *)(*(_QWORD *)(v12 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v14 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v10, 2LL, 0) != v14 )
        {
          v23 = (_DWORD *)*((_QWORD *)a1 + 5);
          v24 = 32;
          if ( (v23[72] & 0xF) == 2
            && (v10->right - v10->left != v23[24] - v23[22] || v10->bottom - v10->top != v23[25] - v23[23]) )
          {
            v24 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v10,
                 (struct tagMONITOR *)v12,
                 &v51,
                 (struct tagMONITOR *)v14,
                 0LL,
                 a2,
                 v24) )
          {
            *v10 = v51;
          }
        }
        ThreadUnlock1(v21, v20, v22);
        ThreadUnlock1(v26, v25, v27);
      }
    }
  }
  v28 = *((_DWORD *)a2 + 49);
  if ( ((v28 ^ (v28 >> 5)) & 0x300) != 0 || (v28 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v29 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v30 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v29 + 88);
    if ( !v30 )
      v30 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v29 + 96);
    if ( v30 )
    {
      v5 = 1;
      goto LABEL_56;
    }
  }
  v5 = 0;
LABEL_56:
  MakeArrangedStateObservable(a2);
  if ( !v9 )
    goto LABEL_63;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
    xxxMinMaximizeEx(a1, 3u, *((_WORD *)a2 + 99) & 0x10 | gdwPUDFlags & 0x10000 | 6, *((_QWORD *)a2 + 29), 0LL, 0LL);
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
LABEL_98:
    if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
    {
      if ( gSqmIsOptedIn )
      {
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 79));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 80));
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 81));
      }
    }
  }
}
