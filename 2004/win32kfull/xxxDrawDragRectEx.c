/*
 * XREFs of xxxDrawDragRectEx @ 0x1C0211F54
 * Callers:
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C021127C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0211E40 (xxxCancelTrackingForThread.c)
 *     xxxDrawDragRect @ 0x1C0211F38 (xxxDrawDragRect.c)
 * Callees:
 *     LockW32Thread @ 0x1C00343CC (LockW32Thread.c)
 *     _ScreenToClient @ 0x1C003BFD8 (_ScreenToClient.c)
 *     bSetDevDragRect @ 0x1C004BF00 (bSetDevDragRect.c)
 *     _SetSystemTimer @ 0x1C006024C (_SetSystemTimer.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     IntersectRect @ 0x1C007176C (IntersectRect.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00B3C70 (PopAndFreeW32ThreadLock.c)
 *     FindTimer @ 0x1C00C0ABC (FindTimer.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     DetectNewMonitor @ 0x1C01E5624 (DetectNewMonitor.c)
 *     ?DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z @ 0x1C020B784 (-DoesQualifyForResizeOptimization@@YAHPEAU_MOVESIZEDATA@@@Z.c)
 *     ?DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z @ 0x1C020B7E4 (-DoesRequireResizeLayoutSynchronization@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxMS_FlushWigglies@@YAXXZ @ 0x1C020F900 (-xxxMS_FlushWigglies@@YAXXZ.c)
 *     xxxUpdateThreadsWindows @ 0x1C0213ACC (xxxUpdateThreadsWindows.c)
 *     FindSpb @ 0x1C021ACF4 (FindSpb.c)
 *     FreeSpb @ 0x1C021AD24 (FreeSpb.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0240210 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GreWindowResizeComplete @ 0x1C0271130 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1C0271370 (GreWindowResizeStarted.c)
 *     bMoveDevDragRect @ 0x1C0286698 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028696C (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0286B4C (bSetDevPreviewRect.c)
 */

__int64 __fastcall xxxDrawDragRectEx(struct _MOVESIZEDATA *a1, __int64 a2, int a3, struct tagRECT *a4)
{
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  __int64 result; // rax
  signed int v11; // esi
  unsigned int v12; // r14d
  __int64 v13; // rcx
  struct tagRECT *v14; // r13
  int v15; // edx
  struct tagRECT v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r15
  struct tagRECT *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r9
  LONG left; // ecx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 Spb; // rax
  __int64 RectRgnIndirect; // rax
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r8
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v35; // r13
  LONG bottom; // r8d
  _DWORD *v37; // rdx
  int v38; // eax
  struct tagWND *v39; // r14
  int v40; // r13d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r9
  __int128 v47; // xmm0
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  BOOL v58; // r13d
  __int64 v59; // rax
  const struct tagWND *v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  BOOL v64; // [rsp+40h] [rbp-C0h]
  int v65; // [rsp+44h] [rbp-BCh]
  unsigned int v66; // [rsp+44h] [rbp-BCh]
  int v67; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v68; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT *v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h]
  int v72[2]; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+78h] [rbp-88h]
  int v74; // [rsp+7Ch] [rbp-84h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  struct tagRECT v76; // [rsp+88h] [rbp-78h] BYREF
  __int64 v77; // [rsp+98h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-60h]
  __int64 v79; // [rsp+A8h] [rbp-58h]
  __int64 v80; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v82; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v83; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v85; // [rsp+F0h] [rbp-10h]
  struct tagRECT v86; // [rsp+F8h] [rbp-8h] BYREF

  v69 = a4;
  v8 = 1;
  if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
  {
    v65 = 1;
    v9 = 5;
  }
  else
  {
    v65 = 0;
    v9 = 4;
  }
  result = *((unsigned int *)a1 + 49);
  v11 = a3 & 0xF0000000;
  v12 = a3 & 0xFFFFFFF;
  if ( (result & 0x10) == 0 )
  {
    result = *((_QWORD *)a1 + 2);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 27LL) & 8) == 0 )
    {
      if ( a2 )
        *a4 = *(struct tagRECT *)a2;
      return result;
    }
  }
  if ( !a2 )
    goto LABEL_13;
  v13 = *((_QWORD *)a1 + 3) - *(_QWORD *)a2;
  if ( !v13 )
    v13 = *((_QWORD *)a1 + 4) - *(_QWORD *)(a2 + 8);
  if ( v13 )
  {
LABEL_13:
    v14 = (struct tagRECT *)a2;
    if ( !a2 )
      v14 = v69;
    v64 = 0;
    v76 = *v14;
    if ( v11 >= 0 && v12 == 3 && (unsigned int)DetectNewMonitor((struct tagWND **)a1, &v76) )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL) & 0xF;
      v64 = v15 != 2;
      if ( a2 && (v15 != 2 || (*((_DWORD *)a1 + 49) & 0x20) == 0) )
      {
        v16 = v76;
        *v69 = v76;
        *(struct tagRECT *)a2 = v16;
      }
      if ( v15 != 2 )
      {
        xxxMS_FlushWigglies(v15 != 2);
        GenerateMouseMove(0LL);
      }
    }
    v17 = *((_DWORD *)a1 + 49);
    if ( (v17 & 0x20) != 0 && ((v17 & 0x4000000) == 0 || v12 >= 2) )
    {
      v18 = *((_QWORD *)a1 + 2);
      v73 = 0;
      v71 = 0;
      v66 = 0;
      v19 = *(_QWORD *)(v18 + 16);
      v79 = 0LL;
      v67 = 0;
      v84 = 0LL;
      v75 = gptiCurrent;
      v85 = 0LL;
      if ( v19 != gptiCurrent )
        LockW32Thread(v19, &v84);
      *(_DWORD *)(v19 + 480) |= 0x8000u;
      v20 = v69;
      if ( a2 )
        *v69 = *(struct tagRECT *)a2;
      v21 = *((_QWORD *)a1 + 2);
      v22 = *(_QWORD *)(v21 + 104);
      v68 = *v20;
      if ( v22 )
      {
        if ( !(unsigned int)IsTopLevelWindow(v21) )
        {
          ScreenToClient(v23, &v68);
          ScreenToClient(v24, &v68.right);
          if ( (*(_BYTE *)(*(_QWORD *)(v25 + 40) + 26LL) & 0x40) != 0 )
          {
            left = v68.left;
            v68.left = v68.right;
            v68.right = left;
          }
        }
      }
      v27 = *(_QWORD *)(v21 + 40);
      v28 = v21;
      if ( *(char *)(v27 + 16) < 0 )
      {
        v83 = *(_OWORD *)(v27 + 88);
        if ( a2 )
        {
          if ( (unsigned int)IntersectRect(&v83, (int *)&v83, (int *)a2) )
          {
            Spb = FindSpb(v21);
            FreeSpb(Spb);
            v28 = *((_QWORD *)a1 + 2);
          }
        }
      }
      RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(v28 + 40) + 88LL);
      v31 = *((_QWORD *)a1 + 2);
      v32 = RectRgnIndirect;
      v33 = *(_QWORD *)(*(_QWORD *)(v31 + 40) + 168LL);
      if ( v33 )
      {
        GreCombineRgn(RectRgnIndirect, RectRgnIndirect, v33, 1LL);
        v31 = *((_QWORD *)a1 + 2);
      }
      v74 = (*((_DWORD *)a1 + 49) & 0x300) != 0 ? 1049108 : 532;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v77 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v77;
      v78 = v31;
      if ( v31 )
        HMLockObject(v31);
      v35 = (struct tagWND *)*((_QWORD *)a1 + 2);
      bottom = v68.bottom;
      v37 = (_DWORD *)*((_QWORD *)v35 + 5);
      v72[0] = v68.right - v68.left;
      if ( v37[24] - v37[22] == v68.right - v68.left && v37[25] - v37[23] == v68.bottom - v68.top )
        v38 = v73;
      else
        v38 = 1;
      v39 = v35;
      if ( v38 )
      {
        if ( (unsigned int)DoesQualifyForResizeOptimization(a1) )
        {
          v70 = 0;
          v66 = DoesRequireResizeLayoutSynchronization(v35);
          if ( (unsigned int)GreWindowResizeStarted(&v70, *(_QWORD *)v35, v66, &v67, &v70) && v67 )
            SetSystemTimer(*((_QWORD *)a1 + 2), 65522, v70, (int)ResizeTimerFunc, 1);
          v39 = (struct tagWND *)*((_QWORD *)a1 + 2);
          v40 = 1;
          bottom = v68.bottom;
          goto LABEL_55;
        }
        bottom = v68.bottom;
      }
      v40 = v71;
LABEL_55:
      xxxSetWindowPos(v39, 0LL, (unsigned int)v68.left, (unsigned int)v68.top, v72[0], bottom - v68.top, v74);
      if ( (*((_DWORD *)a1 + 49) & 0x20000000) != 0 )
      {
        v44 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 256LL));
        v45 = *((_QWORD *)a1 + 2);
        *((_QWORD *)a1 + 26) = v44;
        if ( (unsigned int)IsTopLevelWindow(v45) )
        {
          v41 = *(_QWORD *)(v46 + 40);
          if ( (*(_DWORD *)(v41 + 288) & 0xF) == 2 && (*(_DWORD *)(*(_QWORD *)(v46 + 16) + 640LL) & 0x2000000) == 0 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(v41 + 88);
              v46 = *((_QWORD *)a1 + 2);
            }
            *v69 = *(struct tagRECT *)(*(_QWORD *)(v46 + 40) + 88LL);
            v47 = *(_OWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
            *(_QWORD *)((char *)a1 + 292) = *(_QWORD *)((char *)a1 + 300);
            *(_OWORD *)((char *)a1 + 120) = v47;
            *((_DWORD *)a1 + 73) -= *((_DWORD *)a1 + 30);
            *((_DWORD *)a1 + 74) -= *((_DWORD *)a1 + 31);
          }
        }
        *((_DWORD *)a1 + 49) &= ~0x20000000u;
      }
      ThreadUnlock1(v42, v41, v43);
      if ( *(struct _MOVESIZEDATA **)(v19 + 664) == a1 )
      {
        v48 = GreCreateRectRgnIndirect(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 88LL);
        v49 = v48;
        v50 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 168LL);
        if ( v50 )
          GreCombineRgn(v48, v48, v50, 1LL);
        if ( v32 )
        {
          if ( v49 )
          {
            GreCombineRgn(v32, v32, v49, 4LL);
          }
          else
          {
            GreDeleteObject(v32);
            v32 = 0LL;
          }
        }
        v51 = *(_QWORD *)(GetDesktopWindow(*((_QWORD *)a1 + 2)) + 112);
        v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v77 = *(_QWORD *)(v52 + 408);
        *(_QWORD *)(v52 + 408) = &v77;
        v78 = v51;
        if ( v51 )
          HMLockObject(v51);
        v53 = v51;
        v54 = v75;
        xxxUpdateThreadsWindows(v75, v53, v32);
        ThreadUnlock1(v56, v55, v57);
        if ( v40 )
        {
          GreWindowResizeComplete(*(_QWORD *)(gpDispInfo + 40LL), **((_QWORD **)a1 + 2));
          if ( v67 )
          {
            if ( !v66 )
              FindTimer(*((_QWORD *)a1 + 2), 65522LL, 2u, 1, 0LL);
          }
        }
        GreDeleteObject(v49);
      }
      else
      {
        v54 = v75;
      }
      result = GreDeleteObject(v32);
      *(_DWORD *)(v19 + 480) &= ~0x8000u;
      if ( v19 != v54 )
        result = PopAndFreeW32ThreadLock((__int64)&v84);
      v58 = v64;
      goto LABEL_81;
    }
    v86 = *v14;
    v60 = (const struct tagWND *)*((_QWORD *)a1 + 2);
    v82 = *(_OWORD *)(*gpDispInfo + 24LL);
    ReduceRectByWindowMargin(v60, &v86, &v86);
    if ( v11 >= 0 )
      v61 = *((_QWORD *)a1 + 26);
    else
      v61 = *((_QWORD *)a1 + 29);
    v80 = v61;
    result = LogicalToPhysicalDPIRect(
               &v86,
               &v86,
               *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
               &v80);
    v58 = v64;
    if ( (*((_DWORD *)a1 + 49) & 0x4000000) == 0 )
      v9 = v65;
    if ( v64 )
      result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v86, (__int64)&v82, v9);
    if ( a2 )
    {
      if ( (*((_BYTE *)a1 + 196) & 0x20) != 0 && v11 < 0 )
      {
        bMoveDevPreviewRect(*(_QWORD *)(gpDispInfo + 40LL), &v86, v9, **((_QWORD **)a1 + 2), *(_QWORD *)(gpsi + 4960LL));
      }
      else
      {
        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448)
          || (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                        + 64LL) & 1) == 0 )
        {
          v8 = 0;
        }
        bMoveDevDragRect(*(_QWORD *)(gpDispInfo + 40LL), &v86, &v82, v8);
      }
      result = (__int64)v69;
      *v69 = *(struct tagRECT *)a2;
      goto LABEL_81;
    }
    if ( v12 )
    {
      if ( v12 != 1 || v11 >= 0 )
      {
LABEL_81:
        if ( v58 && *((_DWORD *)a1 + 44) == 9 )
        {
          v59 = *((_QWORD *)a1 + 26);
          *(_QWORD *)v72 = 0LL;
          v81 = v59;
          PhysicalToLogicalDPIPoint(
            v72,
            (char *)a1 + 308,
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 40LL) + 288LL),
            &v81);
          *((_DWORD *)a1 + 42) = v76.left - v72[0];
          result = (unsigned int)(v76.top - v72[1]);
          *((_DWORD *)a1 + 43) = result;
        }
        return result;
      }
      v62 = gpDispInfo;
      v63 = *(_QWORD *)(gpsi + 4960LL);
    }
    else
    {
      if ( v11 >= 0 )
      {
        result = bSetDevDragRect(*(HDEV *)(gpDispInfo + 40LL), (__int64)&v86, (__int64)&v82, v9);
        goto LABEL_81;
      }
      v62 = gpDispInfo;
      v63 = *(_QWORD *)(gpsi + 4960LL);
    }
    result = bSetDevPreviewRect(*(HDEV *)(v62 + 40), v63);
    goto LABEL_81;
  }
  return result;
}
