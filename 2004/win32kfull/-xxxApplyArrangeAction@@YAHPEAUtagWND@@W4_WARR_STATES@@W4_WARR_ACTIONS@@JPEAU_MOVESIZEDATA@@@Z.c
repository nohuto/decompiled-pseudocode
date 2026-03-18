/*
 * XREFs of ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020D910
 * Callers:
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C020E07C (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C0026E38 (UpdateCheckpoint.c)
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxMinMaximizeEx @ 0x1C005A998 (xxxMinMaximizeEx.c)
 *     GetMonitorWorkRectForWindow @ 0x1C005CDF0 (GetMonitorWorkRectForWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020C0BC (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z @ 0x1C020CB14 (-SetCurrentHitTargetMonitor@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@H@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020CC9C (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020E280 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAUtagMONITOR@@H@Z @ 0x1C020F01C (-xxxEvaluateDestRectForMonitorMigration@@YA_NW4_WARR_STATES@@PEAU_MOVESIZEDATA@@PEAUtagWND@@PEAU.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C02103CC (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 */

__int64 __fastcall xxxApplyArrangeAction(struct tagWND *a1, unsigned int a2, int a3, int a4, struct _MOVESIZEDATA *a5)
{
  unsigned int v7; // esi
  BOOL v8; // ecx
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // rdx
  char *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  unsigned __int8 v30; // al
  __int64 v31; // rbx
  __int64 v32; // rbx
  unsigned int v33; // r12d
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  struct tagMONITOR *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int16 v49; // r14
  __int64 v50; // r10
  __int64 v51; // r10
  __int64 v52; // rbx
  bool v53; // zf
  struct tagMONITOR *v54; // r15
  __int64 v55; // rcx
  unsigned int v56; // ebx
  int v57; // ecx
  int v58; // r12d
  __int64 ThreadWin32Thread; // rax
  struct tagMONITOR *v61; // [rsp+30h] [rbp-81h] BYREF
  int v62; // [rsp+38h] [rbp-79h]
  __int64 v63; // [rsp+40h] [rbp-71h] BYREF
  __int128 v64; // [rsp+48h] [rbp-69h] BYREF
  __int64 v65; // [rsp+58h] [rbp-59h]
  char v66; // [rsp+60h] [rbp-51h] BYREF
  char v67; // [rsp+70h] [rbp-41h] BYREF
  __int128 v68; // [rsp+80h] [rbp-31h] BYREF
  __int128 v69; // [rsp+90h] [rbp-21h] BYREF
  __int128 v70; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v71[2]; // [rsp+B0h] [rbp-1h] BYREF

  v62 = a4;
  v65 = 0LL;
  v7 = 1;
  v64 = 0LL;
  *(_OWORD *)v71 = 0LL;
  v8 = a5 && (*((_DWORD *)a5 + 70) & 8) != 0;
  if ( !a3 )
  {
    v58 = 2;
    if ( a2 - 1 <= 2 )
      v58 = 6;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v64 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v64;
    *((_QWORD *)&v64 + 1) = 0LL;
    v7 = xxxMinMaximizeEx(a1, 3u, v58 | 0x10u, 0LL, v71, 0LL) != 0;
    goto LABEL_96;
  }
  v9 = a3 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( !v10 )
    {
      xxxSysCommand(a1, 61730, 0LL);
      return v7;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v63 = 0LL;
      v61 = 0LL;
      if ( a2 == 4 )
      {
        *((_DWORD *)a5 + 60) = 4;
        UpdateCheckpoint((__int64)a1);
      }
      v42 = *((_QWORD *)a5 + 29);
      v43 = v61;
      do
      {
        v44 = *((_QWORD *)a5 + 2);
        v70 = 0LL;
        v45 = *(_QWORD *)(v44 + 40);
        if ( (*(_DWORD *)(v45 + 288) & 0xF) == 2 || v42 == *((_QWORD *)a5 + 26) )
        {
          v70 = *GetMonitorWorkRectForWindow(&v68, v42, a1);
        }
        else
        {
          v70 = *(_OWORD *)(*(_QWORD *)(v42 + 40) + 44LL);
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v45);
          PhysicalToLogicalDPIRect(&v70, &v70, CurrentThreadDpiAwarenessContext, (char *)a5 + 208);
        }
        v49 = v62;
        if ( IsDockTargetActive((__int64)a5, v42, 0) && (int)v70 <= (__int16)v62 )
        {
          v50 = v63;
          if ( (__int16)v62 <= SDWORD2(v70) )
            v50 = v42;
          v63 = v50;
        }
        if ( IsDockTargetActive(v48, v47, 3) && (int)v70 <= (__int16)v62 && (__int16)v62 <= SDWORD2(v70) )
          v43 = (struct tagMONITOR *)v42;
        v52 = *(_QWORD *)(v42 + 280);
        if ( v52 == gpDispInfo + 144LL )
          v52 = *(_QWORD *)(gpDispInfo + 144LL);
        v42 = v52 - 280;
      }
      while ( v42 != *((_QWORD *)a5 + 29) );
      v61 = v43;
      v53 = v43 == 0LL;
      v7 = 1;
      if ( !v53 && v51 )
      {
        v54 = v61;
        LOWORD(v62) = *((_WORD *)GetMonitorWorkRectForWindow(&v69, v42, a1) + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 40LL) + 288LL) & 0xF) != 2 )
        {
          v55 = *(unsigned __int16 *)(*(_QWORD *)(v63 + 40) + 64LL);
          if ( *(_WORD *)(*((_QWORD *)v61 + 5) + 64LL) != (_WORD)v55 )
          {
            v54 = (struct tagMONITOR *)v63;
            v61 = (struct tagMONITOR *)(unsigned int)v49;
            v56 = W32GetCurrentThreadDpiAwarenessContext(v55);
            LogicalToPhysicalDPIPoint(&v61, &v61, v56, (char *)a5 + 208);
            PhysicalToLogicalDPIPoint(&v61, &v61, v56, &v63);
            v49 = (__int16)v61;
          }
        }
        SizeRect(
          a5,
          (unsigned __int16)(v49 + *((_WORD *)a5 + 84)) | ((unsigned __int16)(v62 + *((_WORD *)a5 + 86)) << 16),
          v54,
          0LL);
        goto LABEL_88;
      }
      return 0;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = *((_QWORD *)a5 + 29);
            v16 = *(_QWORD *)(v15 + 288);
            if ( v16 == gpDispInfo + 144LL )
              v16 = *(_QWORD *)(gpDispInfo + 152LL);
            v17 = v16 - 280;
            if ( v17 != v15 )
            {
              while ( a2 )
              {
                v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
                *(_QWORD *)&v64 = *(_QWORD *)(v18 + 408);
                *(_QWORD *)(v18 + 408) = &v64;
                *((_QWORD *)&v64 + 1) = v17;
                if ( v17 )
                  HMLockObject(v17);
                v19 = xxxEvaluateDestRectForMonitorMigration(a2, a5, a1, v17, 0);
                v23 = v19;
                if ( v19 )
                {
                  if ( a2 != 1 )
                    goto LABEL_40;
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v26 = &v66;
                  goto LABEL_39;
                }
                v24 = *(_QWORD *)(v17 + 288);
                ThreadUnlock1(v21, v20, v22);
                if ( v24 == gpDispInfo + 144LL )
                  v24 = *(_QWORD *)(gpDispInfo + 152LL);
                v17 = v24 - 280;
                if ( v17 == *((_QWORD *)a5 + 29) )
                  goto LABEL_43;
              }
LABEL_45:
              SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
LABEL_88:
              *(_OWORD *)((char *)a5 + 24) = *(_OWORD *)((char *)a5 + 40);
              xxxCommitMoveSize(a1, a5);
              return v7;
            }
          }
        }
        else
        {
          v27 = *((_QWORD *)a5 + 29);
          v28 = *(_QWORD *)(v27 + 280);
          if ( v28 == gpDispInfo + 144LL )
            v28 = *(_QWORD *)(gpDispInfo + 144LL);
          v17 = v28 - 280;
          if ( v17 != v27 )
          {
            while ( a2 )
            {
              v29 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              *(_QWORD *)&v64 = *(_QWORD *)(v29 + 408);
              *(_QWORD *)(v29 + 408) = &v64;
              *((_QWORD *)&v64 + 1) = v17;
              if ( v17 )
                HMLockObject(v17);
              v30 = xxxEvaluateDestRectForMonitorMigration(a2, a5, a1, v17, 0);
              v23 = v30;
              if ( v30 )
              {
                if ( a2 == 1 )
                {
                  *((_DWORD *)a5 + 44) = 3;
                  SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                  v26 = &v67;
LABEL_39:
                  *((_DWORD *)a5 + 75) = HIDWORD(*(_QWORD *)GetMonitorWorkRectForWindow(v26, v25, a1));
                }
                else
                {
LABEL_40:
                  if ( a2 - 2 <= 1 )
                    SetCurrentHitTargetMonitor(a5, (struct tagMONITOR *)v17, 1);
                }
                ThreadUnlock1(v21, v20, v22);
LABEL_43:
                if ( v23 )
                  goto LABEL_88;
                return 0;
              }
              v31 = *(_QWORD *)(v17 + 280);
              ThreadUnlock1(v21, v20, v22);
              if ( v31 == gpDispInfo + 144LL )
                v31 = *(_QWORD *)(gpDispInfo + 144LL);
              v17 = v31 - 280;
              if ( v17 == *((_QWORD *)a5 + 29) )
                goto LABEL_43;
            }
            goto LABEL_45;
          }
        }
        return 0;
      }
      v32 = *((_QWORD *)a5 + 29);
      v33 = 2;
      if ( a2 == 3 && !v8 )
      {
        v34 = *(_QWORD *)(v32 + 280);
        if ( v34 == gpDispInfo + 144LL )
          v34 = *(_QWORD *)(gpDispInfo + 144LL);
        v33 = 1;
        v32 = v34 - 280;
      }
      v35 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v64 = *(_QWORD *)(v35 + 408);
      *(_QWORD *)(v35 + 408) = &v64;
      *((_QWORD *)&v64 + 1) = v32;
      if ( v32 )
        HMLockObject(v32);
      v36 = v33;
    }
    else
    {
      v32 = *((_QWORD *)a5 + 29);
      if ( a2 == 2 && !v8 )
      {
        v40 = *(_QWORD *)(v32 + 288);
        if ( v40 == gpDispInfo + 144LL )
          v40 = *(_QWORD *)(gpDispInfo + 152LL);
        v7 = 2;
        v32 = v40 - 280;
      }
      v41 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v64 = *(_QWORD *)(v41 + 408);
      *(_QWORD *)(v41 + 408) = &v64;
      *((_QWORD *)&v64 + 1) = v32;
      if ( v32 )
        HMLockObject(v32);
      v36 = v7;
    }
    v7 = xxxProgrammaticSemiMaximize(a5, v32, v36);
LABEL_96:
    ThreadUnlock1(v38, v37, v39);
    return v7;
  }
  v57 = 0;
  if ( a2 - 1 <= 2 )
    v57 = 4;
  return xxxMinMaximizeEx(a1, 6u, v57 | gdwPUDFlags & 0x10000u, 0LL, 0LL, 0LL) != 0;
}
