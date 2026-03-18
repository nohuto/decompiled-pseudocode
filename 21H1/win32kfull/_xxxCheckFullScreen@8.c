/*
 * XREFs of _xxxCheckFullScreen@8 @ 0x71BE6
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     _xxxAddFullScreen@4 @ 0x12380 (_xxxAddFullScreen@4.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetWindowBordersWithDpiAwareness@12 @ 0x314A8 (_GetWindowBordersWithDpiAwareness@12.c)
 *     _GetMonitorRectForWindow@8 @ 0x33538 (_GetMonitorRectForWindow@8.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _GetWindowDpiLastNotify@4 @ 0x6E59C (_GetWindowDpiLastNotify@4.c)
 *     ?IsMaxedRect@@YGHPAUtagRECT@@PBUtagSIZERECT@@@Z @ 0x71F00 (-IsMaxedRect@@YGHPAUtagRECT@@PBUtagSIZERECT@@@Z.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _xxxRemoveFullScreen@4 @ 0x7202E (_xxxRemoveFullScreen@4.c)
 *     _RECTFromSIZERECT@8 @ 0x9C8EE (_RECTFromSIZERECT@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382 (-ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 *     _GetScreenRectForWindow@4 @ 0x1B725D (_GetScreenRectForWindow@4.c)
 */

int __fastcall xxxCheckFullScreen(_DWORD *a1, int *a2)
{
  int v3; // ecx
  int v4; // esi
  int v5; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *MonitorWorkRectForWindow; // eax
  int *MonitorRectForWindow; // eax
  bool v11; // zf
  int v12; // edx
  int v13; // ecx
  INT WindowDpiLastNotify; // eax
  int v15; // eax
  int DpiDependentMetric; // edi
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int WindowBordersWithDpiAwareness; // eax
  int v24; // ecx
  struct tagRECT *v25; // [esp+0h] [ebp-60h]
  struct tagRECT *v26; // [esp+0h] [ebp-60h]
  const struct tagSIZERECT *v27; // [esp+4h] [ebp-5Ch]
  struct tagRECT *v28; // [esp+4h] [ebp-5Ch]
  int v30; // [esp+10h] [ebp-50h]
  int v31; // [esp+14h] [ebp-4Ch]
  int v32; // [esp+18h] [ebp-48h]
  int v33; // [esp+1Ch] [ebp-44h]
  int v34; // [esp+20h] [ebp-40h]
  int v35; // [esp+24h] [ebp-3Ch]
  int v36; // [esp+28h] [ebp-38h]
  _DWORD v37[3]; // [esp+2Ch] [ebp-34h] BYREF
  _DWORD v38[5]; // [esp+38h] [ebp-28h] BYREF
  int v39; // [esp+4Ch] [ebp-14h] BYREF
  int v40; // [esp+50h] [ebp-10h]
  int v41; // [esp+54h] [ebp-Ch]
  int v42; // [esp+58h] [ebp-8h]

  v30 = 0;
  v37[2] = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v3 = *(_DWORD *)(GetDispInfo() + 52);
  v36 = v3;
  if ( *(_DWORD *)*_gpDispInfo > 1u )
  {
    GetScreenRectForWindow(a1, v38);
    if ( IsMaxedRect(v25, v27) )
      return 0;
    RECTFromSIZERECT(&v39, v5);
    v4 = _MonitorFromRect(&v39, 1, *(_DWORD *)(a1[5] + 184));
    v31 = v4;
  }
  else
  {
    v4 = v3;
    v31 = v3;
  }
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v37[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v37;
  v37[1] = v4;
  HMLockObject(v4);
  MonitorWorkRectForWindow = (int *)GetMonitorWorkRectForWindow(v4, a1, v38);
  v32 = *MonitorWorkRectForWindow;
  v33 = MonitorWorkRectForWindow[1];
  v34 = MonitorWorkRectForWindow[2];
  v35 = MonitorWorkRectForWindow[3];
  if ( !IsMaxedRect(v25, v27) )
  {
    if ( (*(_BYTE *)(a1[5] + 23) & 1) != 0 )
      SetOrClrWF(0, (int)a1, 0x340u, 1);
    v19 = xxxRemoveFullScreen(a1);
    goto LABEL_39;
  }
  MonitorRectForWindow = GetMonitorRectForWindow(v38);
  v11 = (*(_BYTE *)(a1[5] + 23) & 1) == 0;
  v39 = *MonitorRectForWindow;
  v40 = MonitorRectForWindow[1];
  v41 = MonitorRectForWindow[2];
  v42 = MonitorRectForWindow[3];
  if ( !v11
    && (SetOrClrWF(1, (int)a1, 0x340u, 1), v12 = a1[5], (*(_BYTE *)(v12 + 23) & 1) != 0)
    && (((*(_BYTE *)(v12 + 22) & 0xC0) == 0xC0) & *(_BYTE *)(v12 + 22)) != 0 )
  {
    v13 = *(_DWORD *)(v12 + 184) & 0xF;
    if ( v13 == 3 )
    {
      WindowDpiLastNotify = (*(_DWORD *)(v12 + 184) >> 8) & 0x1FF;
    }
    else if ( (*(_DWORD *)(v12 + 144) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( !v13 && (v15 = *(_DWORD *)(a1[2] + 248)) != 0 && (*(_BYTE *)(**(_DWORD **)(v15 + 4) + 32) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_DWORD *)(a1[2] + 232) + 160);
    }
    DpiDependentMetric = GetDpiDependentMetric(2, WindowDpiLastNotify);
    v17 = *a2;
    if ( *a2 + DpiDependentMetric > v41
      || v17 + a2[2] < v41
      || (v18 = a2[1], v18 + DpiDependentMetric > v40)
      || v18 + a2[3] < v42 )
    {
      if ( (*(_BYTE *)(a1[5] + 12) & 0x40) != 0 )
        v30 = xxxRemoveFullScreen(a1);
      if ( a1[45] )
      {
        v39 = v32;
        v40 = v33;
        v41 = v34;
        v42 = v35;
        ExtendRectByWindowMargin((const struct tagWND *)&v39, v26, v28);
        v20 = v39;
        v21 = v40;
        a2[2] = v41 - v39;
        v22 = v42 - v21;
        *a2 = v20;
        a2[1] = v21;
        a2[3] = v22;
      }
      else
      {
        WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v17);
        *a2 = v32 - WindowBordersWithDpiAwareness;
        a2[1] = v33 - WindowBordersWithDpiAwareness;
        WindowBordersWithDpiAwareness *= 2;
        v24 = v35 + WindowBordersWithDpiAwareness - v33;
        a2[2] = v34 + WindowBordersWithDpiAwareness - v32;
        if ( v31 == v36 && (*(_BYTE *)(a1[5] + 13) & 2) == 0 && v24 >= a2[3] )
          v24 = a2[3];
        a2[3] = v24;
      }
      goto LABEL_40;
    }
    if ( (*(_BYTE *)(a1[5] + 12) & 0x40) == 0 )
      goto LABEL_24;
  }
  else if ( IsMaxedRect(v26, (const struct tagSIZERECT *)v28) )
  {
LABEL_24:
    v19 = xxxAddFullScreen(a1);
LABEL_39:
    v30 = v19;
  }
LABEL_40:
  ThreadUnlock1();
  return v30;
}
