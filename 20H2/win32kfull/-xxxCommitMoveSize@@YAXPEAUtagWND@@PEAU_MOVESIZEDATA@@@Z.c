/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D400
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CA90 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F54C (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C0017D5C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C003A9C0 (CkptRestore.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C020B424 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020B49C (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z @ 0x1C020BDC8 (-ShouldGoMonitorMaximizedMoveSizeData@@YA_NPEAU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C020C0C0 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C020E67C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     WPP_RECORDER_SF_qdddd @ 0x1C0210E80 (WPP_RECORDER_SF_qdddd.c)
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
  __int64 v11; // r9
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r15
  int v16; // r8d
  LONG v17; // ecx
  __int64 v18; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _DWORD *v25; // r8
  char v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // rcx
  struct tagRECT *Prop; // rax
  struct tagRECT *v36; // rdi
  int v37; // eax
  int v38; // edi
  int v39; // ecx
  int v40; // r10d
  int v41; // eax
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  __int64 v45; // rdx
  char v46; // al
  __int64 v47; // rdx
  int v48; // [rsp+20h] [rbp-49h]
  __int128 v49; // [rsp+50h] [rbp-19h] BYREF
  __int64 v50; // [rsp+60h] [rbp-9h]
  __int128 v51; // [rsp+68h] [rbp-1h] BYREF
  __int64 v52; // [rsp+78h] [rbp+Fh]
  struct tagRECT v53; // [rsp+80h] [rbp+17h] BYREF

  v50 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v49 = 0LL;
  v4 = 0;
  v51 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_63:
    v33 = *((_DWORD *)a2 + 49);
    if ( (v33 & 0x7000) == 0x1000 && (v33 & 0x20) == 0
      || (v34 = *((_QWORD *)a1 + 5), LOBYTE(v34) = ((v33 & 0x100000) == 0) & *(_BYTE *)(v34 + 31), (v34 & 1) != 0) )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      v36 = Prop;
      if ( Prop )
      {
        v53 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v53);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL, 0LL);
        SwapRect(&v53, v36);
        MakeArrangedStateObservable(a2);
      }
    }
    v37 = *((_DWORD *)a2 + 44);
    v38 = 516;
    if ( (v37 == 9 && !v5 || v37 == 10) && !v4 )
      v38 = 517;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdddd(
        v34,
        v33,
        v7,
        14,
        v48,
        (char)a1,
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        *((_DWORD *)a2 + 8),
        *((_DWORD *)a2 + 9));
    v39 = v38 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v39 = v38;
    v40 = v39;
    if ( (v39 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v40 = v39 | 0x100000;
    v41 = *((_DWORD *)a2 + 70);
    v42 = *((_DWORD *)a2 + 9);
    v43 = v40 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v41 & 8) == 0 )
      v43 = v40;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v42 - *((_DWORD *)a2 + 7),
      v43);
    v44 = *((_DWORD *)a2 + 49);
    if ( (v44 & 0x100000) == 0 || !gSqmIsOptedIn )
      goto LABEL_96;
    v45 = *((_QWORD *)a1 + 5);
    v46 = *(_BYTE *)(v45 + 233) & 3;
    if ( v46 == 3 )
    {
      v47 = 3537LL;
    }
    else if ( v46 )
    {
      v47 = 3529LL;
    }
    else
    {
      if ( (*(_BYTE *)(v45 + 31) & 0x20) != 0 )
        goto LABEL_96;
      if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
      {
        v47 = 3535LL;
      }
      else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
      {
        v47 = 3530LL;
      }
      else
      {
        if ( (v44 & 0x6000) == 0 )
          goto LABEL_96;
        v47 = 5882LL;
      }
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v47, 1LL);
LABEL_96:
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
    goto LABEL_98;
  }
  v8 = ShouldGoMonitorMaximizedMoveSizeData(v6);
  v9 = v8;
  if ( (*((_DWORD *)a2 + 49) & 0x300) != 0 || v8 )
    v4 = 1;
  v10 = (struct tagRECT *)GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
  if ( v10 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1
      && (v12 = *((_DWORD *)a2 + 49), (v12 & 0x6000) == 0x6000)
      && (v12 & 0x300) == 0x300 )
    {
      v10->left = *((_DWORD *)a2 + 6);
      v10->right = *((_DWORD *)a2 + 8);
    }
    else
    {
      v13 = *((_QWORD *)a2 + 27);
      if ( v13 == *((_QWORD *)a2 + 29) )
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
          v14 = *(_QWORD *)&v10->left - *((_QWORD *)a2 + 19);
          if ( *(_QWORD *)&v10->left == *((_QWORD *)a2 + 19) )
            v14 = *(_QWORD *)&v10->right - *((_QWORD *)a2 + 20);
          if ( v14 )
          {
            *v10 = *(struct tagRECT *)((char *)a2 + 152);
            v13 = *((_QWORD *)a2 + 27);
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 )
          v13 = MonitorFromRect(v10, 2LL, 0LL, v11);
        v15 = *((_QWORD *)a2 + 29);
        v16 = *((_DWORD *)a2 + 49);
        if ( (v16 & 0x300) == 0x300 )
        {
          v17 = *((_DWORD *)a2 + 75);
          if ( v10->left <= v17 && v17 < v10->right )
          {
            v18 = MonitorFromRect(v10, 2LL, 0LL, 768LL);
            v16 = *((_DWORD *)a2 + 49);
            v15 = v18;
          }
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 3) == 3 && (v16 & 0x300) == 0x300 )
          *((_DWORD *)a2 + 49) = v16 | 0x80000;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v49 = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = &v49;
        *((_QWORD *)&v49 + 1) = v13;
        if ( v13 )
          HMLockObject(v13);
        v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v51 = *(_QWORD *)(v20 + 416);
        *(_QWORD *)(v20 + 416) = &v51;
        *((_QWORD *)&v51 + 1) = v15;
        if ( v15 )
          HMLockObject(v15);
        if ( *(_WORD *)(*(_QWORD *)(v13 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v15 + 40) + 64LL)
          && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        {
          xxxGetMinMaxTrackInfo(a2, 0);
        }
        if ( MonitorFromRect(v10, 2LL, 0LL, v21) != v15 )
        {
          v25 = (_DWORD *)*((_QWORD *)a1 + 5);
          v26 = 32;
          if ( (v25[72] & 0xF) == 2
            && (v10->right - v10->left != v25[24] - v25[22] || v10->bottom - v10->top != v25[25] - v25[23]) )
          {
            v26 = 48;
          }
          if ( MigrateRectMonitors(
                 a1,
                 (__m128i *)v10,
                 (struct tagMONITOR *)v13,
                 &v53,
                 (struct tagMONITOR *)v15,
                 0LL,
                 a2,
                 v26) )
          {
            *v10 = v53;
          }
        }
        ThreadUnlock1(v23, v22, v24);
        ThreadUnlock1(v28, v27, v29);
      }
    }
  }
  v30 = *((_DWORD *)a2 + 49);
  if ( ((v30 ^ (v30 >> 5)) & 0x300) != 0 || (v30 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v31 = *((_QWORD *)a1 + 5);
    v4 = 0;
    v32 = *((_QWORD *)a2 + 3) - *(_QWORD *)(v31 + 88);
    if ( !v32 )
      v32 = *((_QWORD *)a2 + 4) - *(_QWORD *)(v31 + 96);
    if ( v32 )
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
