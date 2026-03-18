/*
 * XREFs of _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z @ 0x150D2 (-xxxProcessDesktopRecalc@@YGXPAUtagASYNCDTOPRECALC@@@Z.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 * Callees:
 *     _FindOldMonitor@12 @ 0x153AA (_FindOldMonitor@12.c)
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     ?Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z @ 0x156AE (-Reset@PlaceHolderMonitor@@QAEXPAUtagMONITORPOS@@@Z.c)
 *     ?NormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HH@Z @ 0x15740 (-NormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HH@Z.c)
 *     _IsValidMonitor@4 @ 0x15D06 (_IsValidMonitor@4.c)
 *     ?_ShouldMaximizeWindow@@YGHPAUtagWND@@@Z @ 0x15DE6 (-_ShouldMaximizeWindow@@YGHPAUtagWND@@@Z.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     ?GetWindowCompositedDpi@@YGGPBUtagWND@@@Z @ 0x70750 (-GetWindowCompositedDpi@@YGGPBUtagWND@@@Z.c)
 *     _GetMonitorWorkRectForDpi@8 @ 0x71FAA (_GetMonitorWorkRectForDpi@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z @ 0x144E6D (-FindNewMonitor@@YGPAUtagMONITOR@@PAUtagRECT@@@Z.c)
 *     ?EvaluateArrangeState@@YG?AW4_WARR_STATES@@PAUtagWND@@@Z @ 0x1710C7 (-EvaluateArrangeState@@YG-AW4_WARR_STATES@@PAUtagWND@@@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001 (-xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtag.c)
 *     _xxxInitializeMoveSizeData@20 @ 0x176FCC (_xxxInitializeMoveSizeData@20.c)
 *     ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171 (-GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z.c)
 */

int __fastcall xxxDeferWindowPosAndCheckPoint(
        int a1,
        int a2,
        struct tagRECT *a3,
        struct tagWND *a4,
        int a5,
        int a6,
        char a7)
{
  struct tagMONITORRECTS *v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int DpiForSystem; // eax
  unsigned __int16 v13; // ax
  int Prop; // eax
  int v15; // ecx
  struct tagRECT *v16; // edi
  struct tagRECT *OldMonitor; // eax
  struct tagMONITOR *v18; // eax
  struct tagMONITOR *NewMonitor; // esi
  struct tagWND *v20; // edi
  struct tagWND *v21; // edi
  unsigned int v22; // eax
  int v23; // eax
  int v24; // ecx
  _DWORD *v25; // edi
  struct tagRECT *v26; // edi
  struct tagRECT *v27; // eax
  int v28; // esi
  struct tagMONITOR *v29; // eax
  _DWORD *MonitorWorkRectForDpi; // eax
  _DWORD *MonitorRectForDpi; // eax
  _DWORD *v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  struct tagMONITOR *v38; // esi
  int v40; // [esp-4h] [ebp-2F0h]
  const struct tagWND *v41; // [esp+0h] [ebp-2ECh]
  int v42; // [esp+0h] [ebp-2ECh]
  const struct tagWND *v43; // [esp+0h] [ebp-2ECh]
  struct tagMONITOR *v44; // [esp+0h] [ebp-2ECh]
  unsigned int v45; // [esp+4h] [ebp-2E8h]
  unsigned __int16 v46; // [esp+4h] [ebp-2E8h]
  _BYTE v47[16]; // [esp+10h] [ebp-2DCh] BYREF
  struct tagWND *v48; // [esp+20h] [ebp-2CCh]
  int v49; // [esp+24h] [ebp-2C8h]
  int v50; // [esp+28h] [ebp-2C4h]
  struct tagMONITORRECTS *v51; // [esp+2Ch] [ebp-2C0h]
  int v52; // [esp+30h] [ebp-2BCh]
  struct tagWND *v53; // [esp+34h] [ebp-2B8h]
  int v54; // [esp+38h] [ebp-2B4h]
  struct tagRECT *v55; // [esp+3Ch] [ebp-2B0h]
  int v56; // [esp+40h] [ebp-2ACh]
  struct tagMONITOR *v57; // [esp+44h] [ebp-2A8h]
  int v58; // [esp+48h] [ebp-2A4h]
  int v59; // [esp+4Ch] [ebp-2A0h]
  int v60; // [esp+50h] [ebp-29Ch]
  int v61; // [esp+54h] [ebp-298h]
  _DWORD v62[78]; // [esp+58h] [ebp-294h] BYREF
  _BYTE v63[76]; // [esp+190h] [ebp-15Ch] BYREF
  _DWORD v64[49]; // [esp+1DCh] [ebp-110h] BYREF
  _DWORD v65[4]; // [esp+2A0h] [ebp-4Ch]
  _DWORD v66[4]; // [esp+2B0h] [ebp-3Ch]
  _DWORD v67[5]; // [esp+2C0h] [ebp-2Ch] BYREF
  struct tagRECT v68; // [esp+2D4h] [ebp-18h] BYREF

  v55 = a3;
  v48 = a4;
  v52 = a5;
  v50 = a1;
  memset(v62, 0, sizeof(v62));
  v49 = 0;
  memset(&v68, 0, sizeof(v68));
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  memset(v63, 0, sizeof(v63));
  memset(v64, 0, sizeof(v64));
  v64[5] = v63;
  if ( (dword_26901C & 1) != 0 && IsSemiMaximized(v41) )
  {
    v8 = (struct tagMONITORRECTS *)3;
    v51 = (struct tagMONITORRECTS *)3;
    v9 = EvaluateArrangeState();
    v10 = *(_DWORD *)(a2 + 20);
    v62[2] = a2;
    v49 = v9;
    v54 = (unsigned __int16)(*(_WORD *)(v10 + 52) + (*(_DWORD *)(v10 + 60) - *(_DWORD *)(v10 + 52)) / 2);
    if ( v9 == 3 )
    {
      v11 = *(_DWORD *)(v10 + 56);
      DpiForSystem = GetDpiForSystem();
      v13 = v11 - 1 + GetDpiDependentMetric(2, DpiForSystem);
      v8 = v51;
    }
    else
    {
      v13 = *(_WORD *)(v10 + 56) + 2;
    }
    v62[46] = ((unsigned int)&loc_2FFFE + 2) | v62[46] & 0xFFFF7FFF;
    xxxInitializeMoveSizeData(a2, v62, 9, (unsigned __int16)v54 | (v13 << 16), 11);
  }
  else
  {
    v8 = (struct tagMONITORRECTS *)((*(unsigned __int8 *)(*(_DWORD *)(a2 + 20) + 12) >> 5) & 2);
    v51 = v8;
  }
  v54 = 1;
  Prop = _GetProp(1);
  v53 = (struct tagWND *)Prop;
  if ( Prop )
  {
    v15 = v52;
    if ( v52 )
    {
      v16 = v55;
      *(_DWORD *)(Prop + 48) &= ~0x20u;
      OldMonitor = (struct tagRECT *)FindOldMonitor(v15);
      if ( OldMonitor != (struct tagRECT *)-1 )
      {
        if ( v8 != (struct tagMONITORRECTS *)3 )
        {
          NormalizeRect(v53, v16, OldMonitor, v8, (int)v41, v45);
          goto LABEL_34;
        }
        v56 = 40 * (_DWORD)OldMonitor;
        v18 = (struct tagMONITOR *)ValidateHmonitor(*(&v16[2].right + 10 * (_DWORD)OldMonitor));
        NewMonitor = v18;
        v57 = v18;
        if ( !v18 || !IsValidMonitor(v18) )
        {
          NewMonitor = FindNewMonitor((struct tagRECT *)v41);
          v57 = NewMonitor;
          if ( !NewMonitor )
          {
            NewMonitor = *(struct tagMONITOR **)(GetDispInfo() + 52);
            v57 = NewMonitor;
          }
        }
        if ( (a7 & 1) != 0 )
        {
          v20 = (struct tagWND *)v62[51];
        }
        else
        {
          PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v63, (struct tagMONITORPOS *)((char *)&v16->top + v56));
          v20 = (struct tagWND *)v64;
        }
        v56 = (int)v20;
        if ( MigrateRectMonitors(v20, &v68, NewMonitor, 0, (struct tagMONITOR *)v62, 0, v41, v45) )
        {
          v21 = v53;
          *(_DWORD *)v53 = v68.left;
          v21 = (struct tagWND *)((char *)v21 + 4);
          *(_DWORD *)v21 = v68.top;
          v21 = (struct tagWND *)((char *)v21 + 4);
          *(_DWORD *)v21 = v68.right;
          *((_DWORD *)v21 + 1) = v68.bottom;
          v20 = (struct tagWND *)v56;
        }
        if ( (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 23) & 0x20) != 0 )
        {
          v22 = *((_DWORD *)v53 + 12);
          if ( (v22 & 0x18) != 0 )
          {
            v23 = (v22 >> 4) & 1;
            v24 = *((_DWORD *)v53 + 12) & 8;
            if ( v24 && v23 )
              goto LABEL_29;
            if ( v23 )
            {
              v40 = 11;
              goto LABEL_30;
            }
            if ( !v24 )
LABEL_29:
              v40 = 9;
            else
              v40 = 13;
LABEL_30:
            v56 = (int)v53 + 16;
            if ( MigrateRectMonitors(v20, &v68, v57, 0, (struct tagMONITOR *)v62, (struct tagMONITOR *)v40, v41, v45) )
            {
              v25 = (_DWORD *)v56;
              *(_DWORD *)v56 = v68.left;
              *++v25 = v68.top;
              *++v25 = v68.right;
              v25[1] = v68.bottom;
            }
            else
            {
              *((_DWORD *)v53 + 12) &= 0xFFFFFFE7;
            }
          }
        }
      }
    }
  }
LABEL_34:
  v26 = v55;
  v27 = (struct tagRECT *)FindOldMonitor(v48);
  v55 = v27;
  if ( v27 != (struct tagRECT *)-1 )
  {
    v28 = (int)v51;
    if ( v51 == (struct tagMONITORRECTS *)3 )
    {
      v55 = (struct tagRECT *)(40 * (_DWORD)v27);
      v29 = (struct tagMONITOR *)ValidateHmonitor(*(&v26[2].right + 10 * (_DWORD)v27));
      v57 = v29;
      if ( !v29 || !IsValidMonitor(v29) )
      {
        v57 = FindNewMonitor((struct tagRECT *)v41);
        if ( !v57 )
          v57 = *(struct tagMONITOR **)(GetDispInfo() + 52);
      }
      PlaceHolderMonitor::Reset((PlaceHolderMonitor *)v63, (struct tagMONITORPOS *)((char *)&v55->top + (_DWORD)v26));
      if ( (a7 & 1) == 0 )
        v62[51] = v64;
      v68 = *(struct tagRECT *)GetMonitorRectForDpi(v67);
      MonitorWorkRectForDpi = (_DWORD *)GetMonitorWorkRectForDpi(v67);
      v65[0] = *MonitorWorkRectForDpi;
      v65[1] = MonitorWorkRectForDpi[1];
      v65[2] = MonitorWorkRectForDpi[2];
      v65[3] = MonitorWorkRectForDpi[3];
      MonitorRectForDpi = (_DWORD *)GetMonitorRectForDpi(v67);
      v66[0] = *MonitorRectForDpi;
      v66[1] = MonitorRectForDpi[1];
      v66[2] = MonitorRectForDpi[2];
      v66[3] = MonitorRectForDpi[3];
      v32 = (_DWORD *)GetMonitorWorkRectForDpi(v47);
      v33 = 0;
      v67[0] = *v32;
      v67[1] = v32[1];
      v67[2] = v32[2];
      v67[3] = v32[3];
      while ( *(&v68.left + v33) == v66[v33] )
      {
        if ( ++v33 == 4 )
        {
          v34 = 0;
          while ( v65[v34] == v67[v34] )
          {
            if ( ++v34 == 4 )
            {
              v35 = 1;
              goto LABEL_50;
            }
          }
          break;
        }
      }
      v35 = 0;
LABEL_50:
      v68.bottom = 0;
      CurrentThread = KeGetCurrentThread();
      ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
      v38 = v57;
      v68.top = *(_DWORD *)(ThreadWin32Thread + 228);
      *(_DWORD *)(ThreadWin32Thread + 228) = &v68.top;
      v68.right = (LONG)v38;
      if ( v38 )
        HMLockObject(v38);
      if ( (unsigned __int8)xxxEvaluateDestRectForMonitorMigration(v49, v62, a2, v38, v35) )
      {
        a6 |= 0x100000u;
        v58 = v62[7];
        v59 = v62[8];
        v60 = v62[9];
        v61 = v62[10];
      }
      else
      {
        v54 = 0;
      }
      ThreadUnlock1();
    }
    else
    {
      if ( _ShouldMaximizeWindow(v41) )
      {
        v28 = 1;
      }
      else if ( (*(_DWORD *)(*(_DWORD *)(a2 + 20) + 144) & 0x8000) != 0 )
      {
        v28 = 2;
      }
      NormalizeRect(v48, v26, v55, (struct tagMONITORRECTS *)v28, v42, v45);
      if ( (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 13) & 8) == 0 )
        return _DeferWindowPos(v50, a2, 0, v58, v59, v60 - v58, v61 - v59, a6, 0);
      GetWindowCompositedDpi(v43);
      *(_DWORD *)(*(_DWORD *)(a2 + 20) + 108) = GetMonitorRegionForDpi(v44, v46);
      DirtyVisRgnTrackers(a2);
    }
    if ( v54 )
      return _DeferWindowPos(v50, a2, 0, v58, v59, v60 - v58, v61 - v59, a6, 0);
  }
  return v50;
}
