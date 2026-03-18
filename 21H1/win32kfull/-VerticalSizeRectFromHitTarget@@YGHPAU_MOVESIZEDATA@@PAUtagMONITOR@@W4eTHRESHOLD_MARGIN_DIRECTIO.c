/*
 * XREFs of ?VerticalSizeRectFromHitTarget@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x172710
 * Callers:
 *     ?HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRECTION@@PAK@Z @ 0x171265 (-HandleNoTargetToDockTargetSizing@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@1W4eTHRESHOLD_MARGIN_DIRE.c)
 *     ?SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z @ 0x172387 (-SnapSizeRect@@YGXPAU_MOVESIZEDATA@@PAUtagCHECKPOINT@@PAUtagMONITOR@@PAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1717C5 (-IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 */

int __fastcall VerticalSizeRectFromHitTarget(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *MonitorWorkRectForWindow; // eax
  int *v8; // eax
  int v9; // edi
  int *v10; // eax
  int *v11; // esi
  int v12; // edi
  int v13; // edi
  int result; // eax
  _DWORD *v15; // edx
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // edx
  int v23; // edx
  int v24; // edi
  int *v25; // eax
  int *v26; // esi
  int v27; // edi
  int v28; // edi
  _DWORD *v29; // edx
  int *v30; // eax
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // esi
  int v35; // eax
  int v36; // edx
  int v37; // edx
  int *v38; // edi
  int *v39; // edi
  _DWORD v40[4]; // [esp+10h] [ebp-60h] BYREF
  int v41; // [esp+20h] [ebp-50h] BYREF
  int v42; // [esp+24h] [ebp-4Ch]
  int v43; // [esp+28h] [ebp-48h]
  int v44; // [esp+2Ch] [ebp-44h]
  int v45; // [esp+30h] [ebp-40h] BYREF
  int v46; // [esp+34h] [ebp-3Ch]
  int v47; // [esp+38h] [ebp-38h]
  int v48; // [esp+3Ch] [ebp-34h]
  int v49; // [esp+40h] [ebp-30h]
  int v50; // [esp+44h] [ebp-2Ch]
  int CurrentThreadDpiAwarenessContext; // [esp+48h] [ebp-28h]
  int v52; // [esp+4Ch] [ebp-24h] BYREF
  int v53; // [esp+50h] [ebp-20h]
  int v54; // [esp+54h] [ebp-1Ch] BYREF
  int v55; // [esp+58h] [ebp-18h]
  int v56; // [esp+5Ch] [ebp-14h] BYREF
  int v57; // [esp+60h] [ebp-10h]
  int v58; // [esp+64h] [ebp-Ch]
  int v59; // [esp+68h] [ebp-8h]

  v52 = 0;
  v55 = 0;
  v45 = a2;
  v53 = a4;
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(a2, *(_DWORD **)(a1 + 8), &v41);
  v46 = *MonitorWorkRectForWindow;
  v47 = MonitorWorkRectForWindow[1];
  v48 = MonitorWorkRectForWindow[2];
  v49 = MonitorWorkRectForWindow[3];
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( v53 )
  {
    v8 = GetMonitorWorkRectForWindow(v53, *(_DWORD **)(a1 + 8), &v41);
    v50 = v49;
    v56 = *v8;
    v57 = v8[1];
    v58 = v8[2];
    v59 = v8[3];
    if ( v59 > v49 )
    {
      v50 = v59;
      v49 = v59;
    }
    if ( v57 < v47 )
      v47 = v57;
  }
  else
  {
    v50 = v49;
  }
  if ( a3 )
  {
    if ( a3 <= 0 )
      return v55;
    if ( a3 <= 2 )
      return 0;
    if ( a3 != 3 )
      return v55;
    v9 = *(_DWORD *)(a1 + 204);
    v55 = 0;
    v53 = v9;
    while ( 1 )
    {
      v10 = GetMonitorWorkRectForWindow(v9, *(_DWORD **)(a1 + 8), v40);
      v41 = *v10;
      v42 = v10[1];
      v43 = v10[2];
      v44 = v10[3];
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184) & 0xF) == 2 || v53 == v45 )
      {
        v56 = v41;
        v57 = v42;
        v58 = v43;
        v59 = v44;
      }
      else
      {
        v11 = (int *)(*(_DWORD *)(v53 + 20) + 32);
        v56 = *v11++;
        v57 = *v11++;
        v58 = *v11;
        v59 = v11[1];
        PhysicalToLogicalDPIRect(&v56, &v56, CurrentThreadDpiAwarenessContext, &v45);
      }
      v12 = v53;
      if ( IsDockTargetActive(a1, v53, 0) && v56 <= a5 && a5 < v58 )
        break;
      v13 = *(_DWORD *)(v12 + 156);
      if ( v13 == _gpDispInfo + 80 )
        v13 = *(_DWORD *)(_gpDispInfo + 80);
      v9 = v13 - 156;
      v53 = v9;
      if ( v9 == *(_DWORD *)(a1 + 204) )
        return v55;
    }
    v15 = *(_DWORD **)(a1 + 8);
    v52 = v12;
    if ( (*(_DWORD *)(v15[5] + 184) & 0xF) == 2
      || *(_WORD *)(*(_DWORD *)(v12 + 20) + 52) == *(_WORD *)(*(_DWORD *)(v45 + 20) + 52) )
    {
      v47 = v42;
    }
    else
    {
      v52 = v45;
      v16 = GetMonitorWorkRectForWindow(v45, v15, v40);
      v15 = *(_DWORD **)(a1 + 8);
      v46 = *v16;
      v47 = v16[1];
      v48 = v16[2];
      v49 = v16[3];
      v12 = v52;
      v50 = v49;
    }
    v17 = *(_DWORD *)(a1 + 28);
    v53 = *(_DWORD *)(a1 + 36);
    v48 = v53;
    v18 = v15[5];
    v46 = v17;
    if ( (*(_DWORD *)(v18 + 184) & 0xF) != 2 && v12 != *(_DWORD *)(a1 + 192) )
    {
      v19 = CurrentThreadDpiAwarenessContext;
      v55 = 0;
      v54 = v17;
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 192);
      PhysicalToLogicalDPIPoint(&v54, &v54, v19, &v52);
      v46 = (__int16)v54;
      v54 = v53;
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 192);
      PhysicalToLogicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, &v52);
      v48 = (__int16)v54;
    }
    v20 = v50;
    v21 = v50 - v47;
    v22 = *(_DWORD *)(a1 + 96);
    if ( v50 - v47 < v22 )
    {
      v47 = v50 - v22;
      v20 = v50;
    }
    v23 = *(_DWORD *)(a1 + 104);
    if ( v21 >= v23 )
      v47 = v20 - v23;
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 204);
    v55 = 0;
    v53 = v24;
    while ( 1 )
    {
      v25 = GetMonitorWorkRectForWindow(v24, *(_DWORD **)(a1 + 8), v40);
      v41 = *v25;
      v42 = v25[1];
      v43 = v25[2];
      v44 = v25[3];
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) + 184) & 0xF) == 2 || v53 == v45 )
      {
        v56 = v41;
        v57 = v42;
        v58 = v43;
        v59 = v44;
      }
      else
      {
        v26 = (int *)(*(_DWORD *)(v53 + 20) + 32);
        v56 = *v26++;
        v57 = *v26++;
        v58 = *v26;
        v59 = v26[1];
        PhysicalToLogicalDPIRect(&v56, &v56, CurrentThreadDpiAwarenessContext, &v45);
      }
      v27 = v53;
      if ( IsDockTargetActive(a1, v53, 3) && v56 <= a5 && a5 < v58 )
        break;
      v28 = *(_DWORD *)(v27 + 156);
      if ( v28 == _gpDispInfo + 80 )
        v28 = *(_DWORD *)(_gpDispInfo + 80);
      v24 = v28 - 156;
      v53 = v24;
      if ( v24 == *(_DWORD *)(a1 + 204) )
        return v55;
    }
    v29 = *(_DWORD **)(a1 + 8);
    v52 = v27;
    if ( (*(_DWORD *)(v29[5] + 184) & 0xF) == 2
      || *(_WORD *)(*(_DWORD *)(v27 + 20) + 52) == *(_WORD *)(*(_DWORD *)(v45 + 20) + 52) )
    {
      v31 = v44;
      v49 = v44;
    }
    else
    {
      v52 = v45;
      v30 = GetMonitorWorkRectForWindow(v45, v29, v40);
      v29 = *(_DWORD **)(a1 + 8);
      v46 = *v30;
      v47 = v30[1];
      v48 = v30[2];
      v49 = v30[3];
      v31 = v49;
      v27 = v52;
    }
    v32 = *(_DWORD *)(a1 + 28);
    v53 = v31;
    v50 = *(_DWORD *)(a1 + 36);
    v48 = v50;
    v33 = v29[5];
    v46 = v32;
    if ( (*(_DWORD *)(v33 + 184) & 0xF) != 2 && v27 != *(_DWORD *)(a1 + 192) )
    {
      v34 = CurrentThreadDpiAwarenessContext;
      v55 = 0;
      v54 = v32;
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 192);
      PhysicalToLogicalDPIPoint(&v54, &v54, v34, &v52);
      v46 = (__int16)v54;
      v54 = v50;
      LogicalToPhysicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, a1 + 192);
      PhysicalToLogicalDPIPoint(&v54, &v54, CurrentThreadDpiAwarenessContext, &v52);
      v48 = (__int16)v54;
    }
    v35 = v47;
    v36 = *(_DWORD *)(a1 + 96);
    if ( v53 - v47 < v36 )
    {
      v49 = v36 + v47;
      v35 = v47;
    }
    v37 = *(_DWORD *)(a1 + 104);
    if ( v53 - v47 >= v37 )
      v49 = v37 + v35;
  }
  result = 1;
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) != 0 )
    v38 = (int *)(a1 + 60);
  else
    v38 = (int *)(a1 + 28);
  *v38 = v46;
  v39 = v38 + 1;
  *v39++ = v47;
  *v39 = v48;
  v39[1] = v49;
  return result;
}
