/*
 * XREFs of ?xxxEvaluateDestRectForMonitorMigration@@YG_NW4_WARR_STATES@@PAU_MOVESIZEDATA@@PAUtagWND@@PAUtagMONITOR@@H@Z @ 0x174001
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     ?xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z @ 0x172C47 (-xxxApplyArrangeAction@@YGHPAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1717C5 (-IsDockTargetActive@@YGEPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z @ 0x17197A (-IsVerticallyMaximizedMoveSizeData@@YG_NPBU_MOVESIZEDATA@@@Z.c)
 *     ?MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z @ 0x171A18 (-MigrateRectMonitors@@YG_NPAUtagWND@@PAUtagRECT@@PAUtagMONITOR@@122PAU_MOVESIZEDATA@@K@Z.c)
 *     ?WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z @ 0x172B9E (-WasVerticallyMaximized@@YG_NPAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@@PAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x174294 (-xxxForceSizeRecToDockTarget@@YGHPAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagMONITOR@.c)
 */

bool __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, int a2, _DWORD *a3, struct tagMONITOR *a4, int a5)
{
  int v5; // esi
  int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  bool v11; // al
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // edi
  bool v15; // al
  int *MonitorWorkRectForWindow; // eax
  int v17; // esi
  bool v18; // al
  int v19; // ecx
  int v20; // edi
  struct tagRECT *v21; // ecx
  int v22; // esi
  struct _MOVESIZEDATA *v24; // [esp+0h] [ebp-6Ch]
  struct _MOVESIZEDATA *v25; // [esp+0h] [ebp-6Ch]
  unsigned int v26; // [esp+4h] [ebp-68h]
  unsigned int v27; // [esp+4h] [ebp-68h]
  int v28[5]; // [esp+10h] [ebp-5Ch] BYREF
  int v29; // [esp+24h] [ebp-48h]
  int v30; // [esp+28h] [ebp-44h]
  int v31; // [esp+2Ch] [ebp-40h]
  int v32; // [esp+30h] [ebp-3Ch]
  struct tagMONITOR *v33; // [esp+34h] [ebp-38h]
  struct tagMONITOR *v34; // [esp+38h] [ebp-34h]
  int v35; // [esp+3Ch] [ebp-30h]
  int v36; // [esp+40h] [ebp-2Ch] BYREF
  int v37; // [esp+44h] [ebp-28h] BYREF
  struct tagMONITOR *v38; // [esp+48h] [ebp-24h]
  struct tagRECT *v39; // [esp+4Ch] [ebp-20h]
  _DWORD *v40; // [esp+50h] [ebp-1Ch]
  struct tagRECT v41; // [esp+54h] [ebp-18h] BYREF

  v5 = (int)a4;
  v40 = a3;
  v34 = a4;
  memset(&v41, 0, sizeof(v41));
  v7 = 0;
  v36 = 0;
  v37 = 0;
  v33 = 0;
  v39 = 0;
  v8 = a1 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
        {
          v11 = MigrateRectMonitors(
                  (LONG *)(v40[5] + 52),
                  v40,
                  *(struct tagWND **)(a2 + 204),
                  (struct tagRECT *)(a2 + 28),
                  a4,
                  0,
                  (struct tagMONITOR *)a2,
                  (struct tagMONITOR *)0x20,
                  v24,
                  v26);
LABEL_39:
          v7 = v11;
        }
      }
      else
      {
        if ( !a5
          || (*(_DWORD *)(a2 + 184) & 0x4200) != 0x4200
          || WasVerticallyMaximized((_DWORD *)a2)
          || IsVerticallyMaximizedMoveSizeData((_DWORD *)a2) )
        {
          v7 = xxxForceSizeRecToDockTarget(a2, 2, a4, &v36, &v41, &v37);
        }
        else
        {
          v7 = MigrateRectMonitors(
                 (LONG *)(v40[5] + 52),
                 v40,
                 *(struct tagWND **)(a2 + 204),
                 (struct tagRECT *)(a2 + 28),
                 a4,
                 0,
                 (struct tagMONITOR *)a2,
                 (struct tagMONITOR *)3,
                 v24,
                 v26);
        }
        *(_DWORD *)(a2 + 184) ^= (unsigned int)&loc_80000 & (*(_DWORD *)(a2 + 184) ^ (v7 << 19));
      }
    }
    else
    {
      if ( !a5
        || (*(_DWORD *)(a2 + 184) & 0x2100) != 0x2100
        || WasVerticallyMaximized((_DWORD *)a2)
        || IsVerticallyMaximizedMoveSizeData((_DWORD *)a2) )
      {
        v7 = xxxForceSizeRecToDockTarget(a2, 1, a4, &v36, &v41, &v37);
      }
      else
      {
        v7 = MigrateRectMonitors(
               (LONG *)(v40[5] + 52),
               v40,
               *(struct tagWND **)(a2 + 204),
               (struct tagRECT *)(a2 + 28),
               a4,
               0,
               (struct tagMONITOR *)a2,
               (struct tagMONITOR *)5,
               v24,
               v26);
      }
      *(_DWORD *)(a2 + 184) ^= (unsigned int)&loc_80000 & (*(_DWORD *)(a2 + 184) ^ (v7 << 19));
    }
  }
  else
  {
    if ( !IsDockTargetActive(a2, (int)a4, 0) && !IsDockTargetActive(v13, v12, 3) )
    {
      v7 = 0;
      return v7 != 0;
    }
    v14 = v40;
    v15 = MigrateRectMonitors(
            (LONG *)(v40[5] + 52),
            v40,
            *(struct tagWND **)(a2 + 204),
            &v41,
            a4,
            0,
            (struct tagMONITOR *)a2,
            (struct tagMONITOR *)1,
            v24,
            v26);
    v7 = v15;
    if ( v15 )
    {
      v38 = a4;
      v35 = v41.left + (v41.right - v41.left) / 2;
      do
      {
        MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v5, v14, v28);
        v29 = *MonitorWorkRectForWindow;
        v30 = MonitorWorkRectForWindow[1];
        v31 = MonitorWorkRectForWindow[2];
        v32 = MonitorWorkRectForWindow[3];
        v17 = (int)v34;
        v18 = IsDockTargetActive(a2, (int)v34, 0);
        v20 = v35;
        if ( v18 && v29 <= v35 && v35 <= v31 )
          v33 = (struct tagMONITOR *)v17;
        if ( IsDockTargetActive(v19, v17, 3) && v29 <= v20 && v20 <= v31 )
        {
          v21 = (struct tagRECT *)v17;
          v39 = (struct tagRECT *)v17;
        }
        else
        {
          v21 = v39;
        }
        v22 = *(_DWORD *)(v17 + 156);
        if ( v22 == _gpDispInfo + 80 )
          v22 = *(_DWORD *)(_gpDispInfo + 80);
        v14 = v40;
        v5 = v22 - 156;
        v34 = (struct tagMONITOR *)v5;
      }
      while ( (struct tagMONITOR *)v5 != v38 );
      if ( !v21 || !v33 )
      {
        v7 = 0;
        return v7 != 0;
      }
      v11 = MigrateRectMonitors(
              (LONG *)(v40[5] + 52),
              v40,
              *(struct tagWND **)(a2 + 204),
              (struct tagRECT *)(a2 + 28),
              v33,
              v39,
              (struct tagMONITOR *)a2,
              (struct tagMONITOR *)1,
              v25,
              v27);
      goto LABEL_39;
    }
  }
  return v7 != 0;
}
