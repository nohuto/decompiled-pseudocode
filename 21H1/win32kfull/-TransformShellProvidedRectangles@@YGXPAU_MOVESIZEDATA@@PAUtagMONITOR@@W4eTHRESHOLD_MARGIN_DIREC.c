/*
 * XREFs of ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538
 * Callers:
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406 (-xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAU.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     ?GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z @ 0x171195 (-GetOverlapCoordinatesForArrangement@@YGKQBUtagRECT@@0H@Z.c)
 */

int __fastcall TransformShellProvidedRectangles(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD *a4,
        int a5,
        int a6,
        int *a7,
        int a8)
{
  int v9; // ecx
  int OverlapCoordinatesForArrangement; // eax
  int *MonitorWorkRectForWindow; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // esi
  char v18; // cl
  int v19; // edx
  int result; // eax
  int v21; // ecx
  int v22; // esi
  int v23; // [esp-8h] [ebp-50h]
  const struct tagRECT *v24; // [esp+0h] [ebp-48h]
  int v25; // [esp+4h] [ebp-44h]
  int v26[4]; // [esp+10h] [ebp-38h] BYREF
  int v27; // [esp+20h] [ebp-28h] BYREF
  int v28; // [esp+24h] [ebp-24h]
  int v29; // [esp+28h] [ebp-20h]
  int v30; // [esp+2Ch] [ebp-1Ch]
  int v31; // [esp+30h] [ebp-18h]
  int v32; // [esp+34h] [ebp-14h]
  int v33; // [esp+38h] [ebp-10h]
  int v34; // [esp+3Ch] [ebp-Ch]
  int v35; // [esp+40h] [ebp-8h]
  int v36; // [esp+44h] [ebp-4h]

  v34 = a2;
  v9 = *(_DWORD *)(a2 + 20);
  v35 = a1[25];
  v36 = a1[23];
  v31 = a1[26];
  v32 = a1[24];
  OverlapCoordinatesForArrangement = GetOverlapCoordinatesForArrangement(a4, (_DWORD *)(v9 + 32), 0, v24, v25);
  v23 = a1[2];
  v33 = OverlapCoordinatesForArrangement;
  TransformRectBetweenCoordinateSpaces(a7, a4, v23, a6);
  if ( a5 && a8 )
    TransformRectBetweenCoordinateSpaces(a8, a5, a1[2], a6);
  MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v34, (_DWORD *)a1[2], v26);
  v27 = *MonitorWorkRectForWindow;
  v28 = MonitorWorkRectForWindow[1];
  v29 = MonitorWorkRectForWindow[2];
  v30 = MonitorWorkRectForWindow[3];
  IntersectRect(a7, a7, &v27);
  if ( a3 == 1 )
  {
    v12 = v27;
    v13 = v36;
    v14 = a7[2] - v27;
    *a7 = v27;
    if ( v14 < v13 )
      a7[2] = v12 + v13;
    if ( v14 >= v35 )
      a7[2] = v12 + v35;
  }
  else
  {
    v15 = v29;
    v16 = v29 - *a7;
    v17 = v36;
    a7[2] = v29;
    if ( v16 < v17 )
      *a7 = v15 - v17;
    if ( v16 >= v35 )
      *a7 = v15 - v35;
  }
  v18 = v33;
  v19 = v33 & 2;
  if ( (v33 & 2) != 0 )
    a7[1] = v28;
  if ( (v18 & 8) != 0 )
    a7[3] = v30;
  result = a7[3];
  v21 = a7[1];
  v22 = result - v21;
  if ( result - v21 < v32 )
  {
    if ( v19 )
    {
      result = v21 + v32;
      a7[3] = v21 + v32;
    }
    else
    {
      v21 = result - v32;
      a7[1] = result - v32;
    }
  }
  if ( v22 >= v31 )
  {
    if ( v19 )
    {
      result = v21 + v31;
      a7[3] = v21 + v31;
    }
    else
    {
      result -= v31;
      a7[1] = result;
    }
  }
  return result;
}
