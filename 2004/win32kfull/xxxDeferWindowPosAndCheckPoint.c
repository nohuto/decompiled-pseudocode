/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C002C7DC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C002AA5C (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D862C (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1C0023288 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 *     FindOldMonitor @ 0x1C0026B78 (FindOldMonitor.c)
 *     GetMonitorRectForDpi @ 0x1C0026D24 (GetMonitorRectForDpi.c)
 *     ?Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z @ 0x1C0026DA4 (-Reset@PlaceHolderMonitor@@QEAAXPEAUtagMONITORPOS@@@Z.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z @ 0x1C002CA38 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HH@Z.c)
 *     IsValidMonitor @ 0x1C002CF04 (IsValidMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C002D8A4 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C006A494 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     GetMonitorWorkRectForDpi @ 0x1C008E9E8 (GetMonitorWorkRectForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     GetDpiForSystem @ 0x1C00A4C48 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01D6A28 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C020B87C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z @ 0x1C020C31C (-MigrateRectMonitors@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagMONITOR@@122PEAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020F01C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     xxxInitializeMoveSizeData @ 0x1C021285C (xxxInitializeMoveSizeData.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C025E978 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        struct tagWND *a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        char a7)
{
  char *v9; // rsi
  int v10; // r14d
  int v11; // r15d
  __int64 Prop; // rax
  struct tagRECT *v13; // rbx
  int v14; // eax
  int v15; // r9d
  int OldMonitor; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // r10d
  int v21; // eax
  __int64 v22; // rdx
  unsigned int DpiForSystem; // eax
  __int64 v24; // r8
  __int64 v25; // rax
  struct tagMONITOR *NewMonitor; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct tagMONITOR *v29; // r10
  struct tagMONITOR *v30; // rax
  int v31; // ecx
  int v32; // eax
  unsigned int v33; // eax
  __int64 v34; // r15
  __int64 v35; // rax
  struct tagMONITOR *v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __m128i v40; // xmm7
  __int64 v41; // rax
  __int64 v42; // r8
  __int128 v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // r8
  char *v48; // rcx
  signed __int64 v49; // rax
  int v50; // esi
  __int64 ThreadWin32Thread; // rax
  unsigned __int16 WindowCompositedDpi; // ax
  struct tagMONITOR *v53; // r9
  unsigned int v54; // [rsp+58h] [rbp-B0h]
  _QWORD v56[3]; // [rsp+68h] [rbp-A0h] BYREF
  __m128i v57; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v58[16]; // [rsp+90h] [rbp-78h] BYREF
  __m128i v59; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v60[16]; // [rsp+B0h] [rbp-58h] BYREF
  struct tagRECT v61; // [rsp+C0h] [rbp-48h] BYREF
  struct tagMONITOR *v62[2]; // [rsp+D0h] [rbp-38h]
  struct tagRECT *v63[2]; // [rsp+E0h] [rbp-28h]
  struct tagRECT *v64[2]; // [rsp+F0h] [rbp-18h]
  struct tagRECT v65; // [rsp+100h] [rbp-8h] BYREF
  __m128i v66; // [rsp+110h] [rbp+8h]
  _QWORD v67[44]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v68[88]; // [rsp+288h] [rbp+180h] BYREF
  _QWORD v69[43]; // [rsp+2E0h] [rbp+1D8h] BYREF

  v63[0] = a5;
  v64[0] = a4;
  memset(v67, 0, 0x158uLL);
  v54 = 0;
  v65 = 0LL;
  v61 = 0LL;
  memset(v68, 0, sizeof(v68));
  memset(v69, 0, 0x150uLL);
  v69[5] = v68;
  v9 = (char *)a2 + 40;
  v10 = 1;
  if ( (dword_1C0330C0C & 1) != 0 && (*(_BYTE *)(*(_QWORD *)v9 + 233LL) & 3) != 0 )
  {
    v11 = 3;
    v54 = EvaluateArrangeState(a2);
    v67[2] = a2;
    v19 = *(unsigned int *)(v18 + 88);
    v22 = (unsigned int)((*(_DWORD *)(v18 + 96) - (int)v19) >> 31);
    LODWORD(v22) = (*(_DWORD *)(v18 + 96) - (int)v19) % v20;
    v21 = (*(_DWORD *)(v18 + 96) - (int)v19) / v20;
    LOWORD(v21) = v19 + v21;
    LODWORD(v62[0]) = v21;
    if ( v54 == 3 )
    {
      DpiForSystem = GetDpiForSystem(v19, v22);
      GetDpiDependentMetric(2LL, DpiForSystem, v24);
    }
    HIDWORD(v67[24]) = HIDWORD(v67[24]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, (struct _MOVESIZEDATA *)v67, 11);
  }
  else if ( (*(_BYTE *)(*(_QWORD *)v9 + 20LL) & 0x40) != 0 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  Prop = GetProp((__int64)a2, WORD2(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink), 1LL);
  v13 = (struct tagRECT *)Prop;
  if ( !Prop )
    goto LABEL_6;
  if ( !a5 )
    goto LABEL_6;
  *(_DWORD *)(Prop + 48) &= ~0x20u;
  OldMonitor = FindOldMonitor((__int64)a2, a3, (__int128 *)&a5->left);
  if ( OldMonitor == -1 )
    goto LABEL_6;
  if ( v11 != 3 )
  {
    NormalizeRect(a2, a5, v13, a3, OldMonitor, v11);
    goto LABEL_6;
  }
  v62[0] = (struct tagMONITOR *)(48LL * OldMonitor);
  v25 = ValidateHmonitor(*(_QWORD *)((char *)v62[0] + (unsigned __int64)a3 + 48));
  NewMonitor = (struct tagMONITOR *)v25;
  if ( !v25 || !(unsigned int)IsValidMonitor(v25) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + (unsigned __int64)v62[0] + 8));
    if ( NewMonitor )
      goto LABEL_28;
    NewMonitor = *(struct tagMONITOR **)(GetDispInfo(v28, v27) + 96);
  }
  v29 = v62[0];
LABEL_28:
  if ( (a7 & 1) != 0 )
  {
    v30 = (struct tagMONITOR *)v67[29];
  }
  else
  {
    PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v68, (struct tagMONITORPOS *)((char *)a3 + (_QWORD)v29 + 8));
    v30 = (struct tagMONITOR *)v69;
  }
  v62[0] = v30;
  if ( MigrateRectMonitors(a2, v63[0], v30, &v65, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v67, 0) )
    *v13 = v65;
  if ( (*(_BYTE *)(*(_QWORD *)v9 + 31LL) & 0x20) != 0 )
  {
    v31 = v13[3].left & 8;
    if ( v31 || (v13[3].left & 0x10) != 0 )
    {
      v32 = ((unsigned int)v13[3].left >> 4) & 1;
      if ( v31 )
      {
        if ( v32 )
        {
          v33 = 9;
          goto LABEL_43;
        }
      }
      else if ( v32 )
      {
        v33 = 11;
LABEL_43:
        v63[0] = v13 + 1;
        if ( MigrateRectMonitors(a2, v13 + 1, v62[0], &v65, NewMonitor, 0LL, (struct _MOVESIZEDATA *)v67, v33) )
          *v63[0] = v65;
        else
          v13[3].left &= 0xFFFFFFE7;
        goto LABEL_6;
      }
      v33 = 9;
      if ( v31 )
        v33 = 13;
      goto LABEL_43;
    }
  }
LABEL_6:
  v14 = FindOldMonitor((__int64)a2, a3, (__int128 *)&v64[0]->left);
  if ( v14 != -1 )
  {
    if ( v11 == 3 )
    {
      v34 = 48LL * v14;
      v35 = ValidateHmonitor(*(_QWORD *)((char *)a3 + v34 + 48));
      v36 = (struct tagMONITOR *)v35;
      if ( !v35 || !(unsigned int)IsValidMonitor(v35) )
      {
        v36 = FindNewMonitor((struct tagRECT *)((char *)a3 + v34 + 8));
        if ( !v36 )
          v36 = *(struct tagMONITOR **)(GetDispInfo(v38, v37) + 96);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v68, (struct tagMONITORRECTS *)((char *)a3 + v34 + 8));
      v39 = v69;
      if ( (a7 & 1) != 0 )
        v39 = (_QWORD *)v67[29];
      v67[29] = v39;
      v40 = *GetMonitorRectForDpi(&v57, (__int64)v69, (*(_DWORD *)(*(_QWORD *)v9 + 288LL) >> 8) & 0x1FF);
      v41 = *(_QWORD *)v9;
      *(__m128i *)v62 = v40;
      v42 = *(_DWORD *)(v41 + 288) >> 8;
      LOWORD(v42) = v42 & 0x1FF;
      v43 = *(_OWORD *)GetMonitorWorkRectForDpi(v58, v69, v42);
      v44 = *(_QWORD *)v9;
      *(_OWORD *)v64 = v43;
      v45 = *GetMonitorRectForDpi(&v59, (__int64)v36, (*(_DWORD *)(v44 + 288) >> 8) & 0x1FF);
      v46 = *(_QWORD *)v9;
      v66 = v45;
      v47 = *(_DWORD *)(v46 + 288) >> 8;
      LOWORD(v47) = v47 & 0x1FF;
      *(_OWORD *)v63 = *(_OWORD *)GetMonitorWorkRectForDpi(v60, v36, v47);
      v48 = (char *)(v40.m128i_i64[0] - v45.m128i_i64[0]);
      if ( v40.m128i_i64[0] == v45.m128i_i64[0] )
        v48 = (char *)v62[1] - v66.m128i_i64[1];
      if ( v48 )
        goto LABEL_59;
      v49 = (char *)v64[0] - (char *)v63[0];
      if ( v64[0] == v63[0] )
        v49 = (char *)v64[1] - (char *)v63[1];
      if ( v49 )
LABEL_59:
        v50 = 0;
      else
        v50 = 1;
      v56[2] = 0LL;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v56[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v56;
      v56[1] = v36;
      if ( v36 )
        HMLockObject(v36);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v54, v67, a2, v36, v50) )
      {
        a6 |= 0x100000u;
        v61 = *(struct tagRECT *)&v67[5];
      }
      else
      {
        v10 = 0;
      }
      ThreadUnlock1();
    }
    else
    {
      if ( (unsigned int)_ShouldMaximizeWindow(a2) )
      {
        v11 = 1;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v9 + 232LL) & 0x8000) != 0 )
      {
        v11 = 2;
      }
      NormalizeRect(a2, &v61, v64[0], a3, v15, v11);
      if ( (*(_BYTE *)(*(_QWORD *)v9 + 21LL) & 8) == 0 )
        return _DeferWindowPos(
                 a1,
                 a2,
                 0LL,
                 (unsigned int)v61.left,
                 v61.top,
                 v61.right - v61.left,
                 v61.bottom - v61.top,
                 a6,
                 0);
      WindowCompositedDpi = GetWindowCompositedDpi(a2);
      *(_QWORD *)(*(_QWORD *)v9 + 168LL) = GetMonitorRegionForDpi(v53, WindowCompositedDpi);
      DirtyVisRgnTrackers(a2);
    }
    if ( v10 )
      return _DeferWindowPos(
               a1,
               a2,
               0LL,
               (unsigned int)v61.left,
               v61.top,
               v61.right - v61.left,
               v61.bottom - v61.top,
               a6,
               0);
  }
  return a1;
}
