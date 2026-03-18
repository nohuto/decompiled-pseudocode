/*
 * XREFs of ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619
 * Callers:
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24 (-GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     _GetMaxTrackSizeForWindow@4 @ 0x706DC (_GetMaxTrackSizeForWindow@4.c)
 *     _GetMonitorWorkRectForWindow@8 @ 0x71F30 (_GetMonitorWorkRectForWindow@8.c)
 *     _RECTFromSIZERECT@8 @ 0x9C8EE (_RECTFromSIZERECT@8.c)
 *     ?IsVerticallyMaximized@@YG_NPBUtagWND@@@Z @ 0xB4A40 (-IsVerticallyMaximized@@YG_NPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall ExtendArrangedRectangleByFrameMargin(_DWORD *a1, int *a2)
{
  int v4; // eax
  int *MonitorWorkRectForWindow; // eax
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // edx
  char v10; // al
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // edx
  char v16; // cl
  int v17; // edi
  int v18; // esi
  int v19; // edx
  int v20[3]; // [esp+10h] [ebp-38h] BYREF
  int v21; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+20h] [ebp-28h]
  _DWORD *v23; // [esp+24h] [ebp-24h]
  int v24; // [esp+28h] [ebp-20h]
  int v25; // [esp+2Ch] [ebp-1Ch] BYREF
  int v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h] BYREF
  int v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+3Ch] [ebp-Ch]
  int v30; // [esp+40h] [ebp-8h]

  v25 = 0;
  v26 = 0;
  v23 = a1;
  if ( GetWindowExtendedMargin((int)a1, (int)&v25) )
  {
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v30 = 0;
    RECTFromSIZERECT(&v27, a2);
    v4 = _MonitorFromRect(&v27, 1, *(_DWORD *)(a1[5] + 184));
    if ( v4 )
    {
      MonitorWorkRectForWindow = GetMonitorWorkRectForWindow(v4, a1, v20);
      v6 = *a2;
      v27 = *MonitorWorkRectForWindow;
      v28 = MonitorWorkRectForWindow[1];
      v29 = MonitorWorkRectForWindow[2];
      v30 = MonitorWorkRectForWindow[3];
      if ( v27 > v6
        || (v24 = a2[2], v22 = v6 + v24, v29 < v6 + v24)
        || (v7 = a2[1], v28 > v7)
        || (v21 = a2[3], v30 < v7 + v21) )
      {
        if ( v28 == a2[1] )
        {
          if ( (v14 = v23, IsVerticallyMaximized(v23))
            || (v16 = *(_BYTE *)(v14[5] + 145), (v16 & 1) != 0) && v15 + (__int16)v25 == v27
            || (v16 & 2) != 0 && v15 + a2[2] - SHIWORD(v25) == v29 )
          {
            GetMaxTrackSizeForWindow(v14);
            v17 = a2[3];
            v18 = a2[1];
            if ( v17 - v18 <= v19 && v30 == v17 + v18 )
            {
              v13 = v17 + (__int16)v26 + SHIWORD(v26);
              a2[1] = v18 - (__int16)v26;
LABEL_26:
              a2[3] = v13;
            }
          }
        }
      }
      else
      {
        v8 = v23;
        if ( IsVerticallyMaximized(v23) )
        {
LABEL_15:
          if ( v30 != v21 + v7 )
            return;
          v13 = v21 + (__int16)v26 + SHIWORD(v26);
          a2[1] = v7 - (__int16)v26;
          goto LABEL_26;
        }
        v10 = *(_BYTE *)(v8[5] + 145);
        if ( (v10 & 1) != 0 && v27 == v9 )
        {
          v11 = (__int16)v25;
LABEL_14:
          v12 = v24;
          *a2 = v9 - v11;
          a2[2] = v12 + 2 * v11;
          goto LABEL_15;
        }
        if ( (v10 & 2) != 0 && v29 == v22 )
        {
          v11 = SHIWORD(v25);
          goto LABEL_14;
        }
      }
    }
  }
}
