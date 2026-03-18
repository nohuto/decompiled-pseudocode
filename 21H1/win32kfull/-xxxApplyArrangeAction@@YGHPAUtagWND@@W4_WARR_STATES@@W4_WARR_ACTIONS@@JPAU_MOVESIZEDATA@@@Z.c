/*
 * XREFs of ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47
 * Callers:
 *     ?xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x173243 (-xxxArrangeWindow@@YGXPAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1717C5 (-IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z @ 0x172097 (-SetCurrentHitTargetMonitor@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z @ 0x17220B (-SizeRect@@YGHPAU_MOVESIZEDATA@@KPAUtagMONITOR@@PAK@Z.c)
 *     ?xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z @ 0x1733E3 (-xxxCommitMoveSize@@YGXPAUtagWND@@PAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 *     ?xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1750AE (-xxxProgrammaticSemiMaximize@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@.c)
 */

BOOL __fastcall xxxApplyArrangeAction(ULONG_PTR a1, struct _MOVESIZEDATA *a2, int a3, unsigned __int16 a4, _DWORD *a5)
{
  _DWORD *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v11; // ecx
  void *v12; // ecx
  struct _MOVESIZEDATA *v13; // ebx
  _DWORD *v14; // eax
  int *v15; // esi
  int CurrentThreadDpiAwarenessContext; // eax
  int *MonitorWorkRectForWindow; // eax
  int v18; // ecx
  struct _MOVESIZEDATA *v19; // edi
  int v20; // ebx
  int v21; // esi
  _DWORD *v22; // esi
  _DWORD *v23; // edi
  struct _MOVESIZEDATA *v24; // edi
  int v25; // edi
  PKTHREAD v26; // eax
  int v27; // eax
  struct _MOVESIZEDATA *v28; // ecx
  int v29; // edi
  struct _MOVESIZEDATA *v30; // edi
  PKTHREAD v31; // eax
  int v32; // eax
  struct _MOVESIZEDATA *v33; // edi
  unsigned __int8 v34; // al
  int v35; // edi
  struct _MOVESIZEDATA *v36; // edx
  int *v37; // eax
  int v38; // edi
  PKTHREAD v39; // eax
  int v40; // eax
  unsigned __int8 v41; // al
  int v42; // edi
  struct _MOVESIZEDATA *v44; // [esp-8h] [ebp-70h]
  struct _MOVESIZEDATA *v45; // [esp-8h] [ebp-70h]
  _DWORD *v46; // [esp-4h] [ebp-6Ch]
  struct tagMONITOR *v47; // [esp+0h] [ebp-68h]
  unsigned int *v48; // [esp+4h] [ebp-64h]
  struct _MOVESIZEDATA *v49; // [esp+10h] [ebp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [esp+14h] [ebp-54h]
  struct _MOVESIZEDATA *v51; // [esp+18h] [ebp-50h]
  struct _MOVESIZEDATA *v52; // [esp+1Ch] [ebp-4Ch]
  _DWORD *v53; // [esp+20h] [ebp-48h]
  int v54; // [esp+24h] [ebp-44h] BYREF
  struct _MOVESIZEDATA *v55; // [esp+28h] [ebp-40h]
  int v56; // [esp+2Ch] [ebp-3Ch]
  _DWORD v57[5]; // [esp+30h] [ebp-38h] BYREF
  int v58; // [esp+44h] [ebp-24h] BYREF
  int v59; // [esp+48h] [ebp-20h]
  int v60; // [esp+4Ch] [ebp-1Ch]
  int v61; // [esp+50h] [ebp-18h]
  int v62[4]; // [esp+54h] [ebp-14h] BYREF

  v51 = a2;
  v5 = a5;
  v54 = 0;
  v6 = 1;
  BugCheckParameter2 = a1;
  v53 = a5;
  v55 = 0;
  v56 = 0;
  memset(v62, 0, sizeof(v62));
  if ( !a5 || (v7 = 1, (a5[62] & 8) == 0) )
    v7 = 0;
  switch ( a3 )
  {
    case 0:
      v8 = 2;
      if ( a2 == (struct _MOVESIZEDATA *)1 || a2 == (struct _MOVESIZEDATA *)2 || a2 == (struct _MOVESIZEDATA *)3 )
        v8 = 6;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v54 = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v54;
      v55 = 0;
      v6 = xxxMinMaximizeEx((struct tagQ *)BugCheckParameter2, (struct tagWND *)3, v8 | 0x10, 0, (unsigned int *)v62, 0) != 0;
      goto LABEL_10;
    case 1:
      v11 = 0;
      if ( a2 == (struct _MOVESIZEDATA *)1 || a2 == (struct _MOVESIZEDATA *)2 || a2 == (struct _MOVESIZEDATA *)3 )
        v11 = 4;
      return xxxMinMaximizeEx(
               (struct tagQ *)BugCheckParameter2,
               (struct tagWND *)6,
               v11 | _gdwPUDFlags & 0x10000,
               0,
               0,
               0) != 0;
    case 2:
      xxxSysCommand((int *)BugCheckParameter2, 61730, 0);
      return v6;
    case 3:
      v49 = 0;
      v51 = 0;
      if ( a2 == (struct _MOVESIZEDATA *)4 )
      {
        v12 = (void *)BugCheckParameter2;
        a5[52] = 4;
        UpdateCheckpoint(v12);
      }
      v13 = (struct _MOVESIZEDATA *)a5[51];
      do
      {
        v58 = 0;
        v59 = 0;
        v60 = 0;
        v61 = 0;
        if ( (*(_DWORD *)(*(_DWORD *)(v5[2] + 20) + 184) & 0xF) == 2
          || (v14 = v5 + 48, v13 == (struct _MOVESIZEDATA *)v5[48]) )
        {
          MonitorWorkRectForWindow = GetMonitorWorkRectForWindow((int)v13, (_DWORD *)BugCheckParameter2, v57);
          v58 = *MonitorWorkRectForWindow;
          v59 = MonitorWorkRectForWindow[1];
          v60 = MonitorWorkRectForWindow[2];
          v61 = MonitorWorkRectForWindow[3];
        }
        else
        {
          v15 = (int *)(*((_DWORD *)v13 + 5) + 32);
          v46 = v14;
          v58 = *v15++;
          v59 = *v15++;
          v60 = *v15;
          v61 = v15[1];
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
          PhysicalToLogicalDPIRect(&v58, &v58, CurrentThreadDpiAwarenessContext, v46);
        }
        v5 = v53;
        if ( IsDockTargetActive((int)v53, (int)v13, 0) && v58 <= (__int16)a4 && (__int16)a4 <= v60 )
          v49 = v13;
        if ( IsDockTargetActive(v18, (int)v13, 3) && v58 <= (__int16)a4 && (__int16)a4 <= v60 )
        {
          v19 = v13;
          v51 = v13;
        }
        else
        {
          v19 = v51;
        }
        v20 = *((_DWORD *)v13 + 39);
        if ( v20 == _gpDispInfo + 80 )
          v20 = *(_DWORD *)(_gpDispInfo + 80);
        v13 = (struct _MOVESIZEDATA *)(v20 - 156);
      }
      while ( v13 != (struct _MOVESIZEDATA *)v53[51] );
      v52 = v13;
      v6 = 1;
      if ( !v19 || !v49 )
        return 0;
      v51 = (struct _MOVESIZEDATA *)a4;
      v52 = (struct _MOVESIZEDATA *)*((unsigned __int16 *)GetMonitorWorkRectForWindow(
                                                            (int)v52,
                                                            (_DWORD *)BugCheckParameter2,
                                                            v57)
                                    + 2);
      if ( (*(_DWORD *)(*(_DWORD *)(v53[2] + 20) + 184) & 0xF) != 2
        && *(_WORD *)(*((_DWORD *)v19 + 5) + 52) != *(_WORD *)(*((_DWORD *)v49 + 5) + 52) )
      {
        v19 = v49;
        v57[1] = 0;
        v57[0] = (__int16)a4;
        v21 = W32GetCurrentThreadDpiAwarenessContext();
        LogicalToPhysicalDPIPoint(v57, v57, v21, v53 + 48);
        PhysicalToLogicalDPIPoint(v57, v57, v21, &v49);
        v5 = v53;
        v51 = (struct _MOVESIZEDATA *)LOWORD(v57[0]);
      }
      SizeRect(
        (unsigned __int16)((_WORD)v51 + *((_WORD *)v5 + 78)) | ((unsigned __int16)((_WORD)v52 + *((_WORD *)v5 + 80)) << 16),
        v5,
        v19,
        0,
        v47,
        v48);
      goto LABEL_42;
    case 4:
      v24 = (struct _MOVESIZEDATA *)a5[51];
      if ( a2 != (struct _MOVESIZEDATA *)2 || v7 )
        goto LABEL_49;
      v25 = *((_DWORD *)v24 + 40);
      if ( v25 == _gpDispInfo + 80 )
        v25 = *(_DWORD *)(_gpDispInfo + 84);
      v6 = 2;
      goto LABEL_48;
    case 5:
      v24 = (struct _MOVESIZEDATA *)a5[51];
      if ( a2 != (struct _MOVESIZEDATA *)3 || v7 )
      {
        v6 = 2;
      }
      else
      {
        v25 = *((_DWORD *)v24 + 39);
        if ( v25 == _gpDispInfo + 80 )
          v25 = *(_DWORD *)(_gpDispInfo + 80);
LABEL_48:
        v24 = (struct _MOVESIZEDATA *)(v25 - 156);
      }
LABEL_49:
      v26 = KeGetCurrentThread();
      v27 = W32GetThreadWin32Thread(v26);
      v54 = *(_DWORD *)(v27 + 228);
      *(_DWORD *)(v27 + 228) = &v54;
      v55 = v24;
      if ( v24 )
        HMLockObject(v24);
      v6 = xxxProgrammaticSemiMaximize(a5, v24, v6);
LABEL_10:
      ThreadUnlock1();
      return v6;
    case 6:
      v28 = (struct _MOVESIZEDATA *)a5[51];
      v29 = *((_DWORD *)v28 + 39);
      if ( v29 == _gpDispInfo + 80 )
        v29 = *(_DWORD *)(_gpDispInfo + 80);
      v30 = (struct _MOVESIZEDATA *)(v29 - 156);
      v49 = v30;
      if ( v30 == v28 )
        return 0;
      while ( 2 )
      {
        if ( !a2 )
          goto LABEL_75;
        v31 = KeGetCurrentThread();
        v32 = W32GetThreadWin32Thread(v31);
        v54 = *(_DWORD *)(v32 + 228);
        *(_DWORD *)(v32 + 228) = &v54;
        v55 = v30;
        if ( v30 )
          HMLockObject(v30);
        v44 = v30;
        v33 = v51;
        v34 = xxxEvaluateDestRectForMonitorMigration(v51, a5, BugCheckParameter2, v44, 0);
        v52 = (struct _MOVESIZEDATA *)v34;
        if ( !v34 )
        {
          v35 = *((_DWORD *)v49 + 39);
          ThreadUnlock1();
          if ( v35 == _gpDispInfo + 80 )
            v35 = *(_DWORD *)(_gpDispInfo + 80);
          a2 = v51;
          v30 = (struct _MOVESIZEDATA *)(v35 - 156);
          v49 = v30;
          if ( v30 == (struct _MOVESIZEDATA *)a5[51] )
            goto LABEL_73;
          continue;
        }
        goto LABEL_87;
      }
    case 7:
      v52 = (struct _MOVESIZEDATA *)a5[51];
      v38 = *((_DWORD *)v52 + 40);
      if ( v38 == _gpDispInfo + 80 )
        v38 = *(_DWORD *)(_gpDispInfo + 84);
      v30 = (struct _MOVESIZEDATA *)(v38 - 156);
      v49 = v30;
      if ( v30 == v52 )
        return 0;
      break;
    default:
      return 0;
  }
  while ( 1 )
  {
    if ( !a2 )
    {
LABEL_75:
      SetCurrentHitTargetMonitor((int)v30, a5, (struct _MOVESIZEDATA *)1, v47, (int)v48);
      goto LABEL_42;
    }
    v39 = KeGetCurrentThread();
    v40 = W32GetThreadWin32Thread(v39);
    v54 = *(_DWORD *)(v40 + 228);
    *(_DWORD *)(v40 + 228) = &v54;
    v55 = v30;
    if ( v30 )
      HMLockObject(v30);
    v45 = v30;
    v33 = v51;
    v41 = xxxEvaluateDestRectForMonitorMigration(v51, a5, BugCheckParameter2, v45, 0);
    v52 = (struct _MOVESIZEDATA *)v41;
    if ( v41 )
      break;
    v42 = *((_DWORD *)v49 + 40);
    ThreadUnlock1();
    if ( v42 == _gpDispInfo + 80 )
      v42 = *(_DWORD *)(_gpDispInfo + 84);
    a2 = v51;
    v30 = (struct _MOVESIZEDATA *)(v42 - 156);
    v49 = v30;
    if ( v30 == (struct _MOVESIZEDATA *)a5[51] )
      goto LABEL_73;
  }
LABEL_87:
  if ( v33 == (struct _MOVESIZEDATA *)1 )
  {
    v36 = v49;
    a5[41] = 3;
    SetCurrentHitTargetMonitor((int)v36, a5, (struct _MOVESIZEDATA *)1, v47, (int)v48);
    v37 = GetMonitorWorkRectForWindow((int)v49, (_DWORD *)BugCheckParameter2, v57);
    v58 = *v37;
    v59 = v37[1];
    v60 = v37[2];
    v61 = v37[3];
    v5 = v53;
    v53[67] = v59;
  }
  else if ( v33 == (struct _MOVESIZEDATA *)2 || v33 == (struct _MOVESIZEDATA *)3 )
  {
    SetCurrentHitTargetMonitor((int)v49, a5, (struct _MOVESIZEDATA *)1, v47, (int)v48);
  }
  ThreadUnlock1();
LABEL_73:
  if ( v52 )
  {
LABEL_42:
    v22 = v5 + 7;
    v23 = v53 + 3;
    v53[3] = *v22++;
    *++v23 = *v22++;
    *++v23 = *v22;
    v23[1] = v22[1];
    xxxCommitMoveSize(v47, (struct _MOVESIZEDATA *)v48);
    return v6;
  }
  return 0;
}
