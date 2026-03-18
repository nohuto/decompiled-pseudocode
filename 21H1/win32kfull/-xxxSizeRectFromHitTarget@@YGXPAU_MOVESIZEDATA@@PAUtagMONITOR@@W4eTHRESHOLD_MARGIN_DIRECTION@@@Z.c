/*
 * XREFs of ?xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x175C45
 * Callers:
 *     ?xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z @ 0x175333 (-xxxSizeOrMoveRect@@YGHPAU_MOVESIZEDATA@@KPAKPAUtagRECT@@PAPAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406 (-xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAU.c)
 *     ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382 (-ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 */

void __fastcall xxxSizeRectFromHitTarget(int a1, int a2, unsigned int a3)
{
  int *MonitorWorkRectForWindow; // eax
  int v6; // ecx
  int v7; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  int v11; // edx
  int v12; // edx
  int v13; // esi
  int v14; // ecx
  _DWORD *v15; // edi
  int *v16; // edi
  const struct tagRECT *v17; // [esp+0h] [ebp-3Ch]
  struct tagRECT *v18; // [esp+4h] [ebp-38h]
  int v19[5]; // [esp+10h] [ebp-2Ch] BYREF
  int v20; // [esp+24h] [ebp-18h] BYREF
  int v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+2Ch] [ebp-10h]
  int v23; // [esp+30h] [ebp-Ch]

  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( !xxxGetSizeRectFromShell(a1, a2, a3, &v20) )
  {
    MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(a2, *(_DWORD **)(a1 + 8), v19);
    v20 = *MonitorWorkRectForWindow;
    v21 = MonitorWorkRectForWindow[1];
    v22 = MonitorWorkRectForWindow[2];
    v23 = MonitorWorkRectForWindow[3];
    if ( a3 == 1 )
    {
      v22 = v20 + (v22 - v20) / 2;
    }
    else if ( a3 == 2 )
    {
      v20 = v22 - (v22 - v20) / 2;
    }
    ExtendRectByWindowMargin((const struct tagWND *)&v20, v17, v18);
    if ( a3 < 2 )
    {
      v9 = *(_DWORD *)(a1 + 100);
      v10 = v9;
      if ( v9 >= v22 - v20 )
        v10 = v22 - v20;
      v11 = *(_DWORD *)(a1 + 92);
      if ( v11 <= v10 )
      {
        v11 = *(_DWORD *)(a1 + 100);
        if ( v9 >= v22 - v20 )
          v11 = v22 - v20;
      }
      v22 = v11 + v20;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_26;
      v6 = *(_DWORD *)(a1 + 100);
      v7 = v6;
      if ( v6 >= v22 - v20 )
        v7 = v22 - v20;
      v8 = *(_DWORD *)(a1 + 92);
      if ( v8 <= v7 )
      {
        v8 = *(_DWORD *)(a1 + 100);
        if ( v6 >= v22 - v20 )
          v8 = v22 - v20;
      }
      v20 = v22 - v8;
    }
    v12 = *(_DWORD *)(a1 + 104);
    v13 = v12;
    if ( v12 >= v23 - v21 )
      v13 = v23 - v21;
    v14 = *(_DWORD *)(a1 + 96);
    if ( v14 <= v13 )
    {
      v14 = *(_DWORD *)(a1 + 104);
      if ( v12 >= v23 - v21 )
        v14 = v23 - v21;
    }
    v23 = v14 + v21;
  }
LABEL_26:
  v15 = (_DWORD *)(a1 + 60);
  if ( (*(_DWORD *)(a1 + 184) & 0x2000000) == 0 )
    v15 = (_DWORD *)(a1 + 28);
  *v15 = v20;
  v16 = v15 + 1;
  *v16++ = v21;
  *v16 = v22;
  v16[1] = v23;
}
