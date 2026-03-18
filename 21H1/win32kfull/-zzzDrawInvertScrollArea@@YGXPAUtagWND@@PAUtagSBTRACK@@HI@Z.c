/*
 * XREFs of ?zzzDrawInvertScrollArea@@YGXPAUtagWND@@PAUtagSBTRACK@@HI@Z @ 0x1A3360
 * Callers:
 *     _xxxEndScroll@8 @ 0x1A391B (_xxxEndScroll@8.c)
 *     _xxxTrackBox@20 @ 0x1A48C7 (_xxxTrackBox@20.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _xxxWindowEvent@20 @ 0x426C2 (_xxxWindowEvent@20.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 *     _BitBltSysBmp@20 @ 0x910DA (_BitBltSysBmp@20.c)
 *     ?InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z @ 0x1A2BEF (-InvertScrollHilite@@YGXPAUtagWND@@PAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z @ 0x1A2C4E (-RecalcTrackRect@@YGXPAUtagSBTRACK@@@Z.c)
 */

void __userpurge zzzDrawInvertScrollArea(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        struct tagSBTRACK *a4,
        int a5,
        unsigned int a6)
{
  struct tagEVENTHOOK *v7; // edi
  BOOL v8; // ecx
  unsigned __int16 v9; // ax
  int v10; // edx
  struct tagWND *v11; // ecx
  HDC DCEx; // eax
  int v13; // edi
  int v14; // edi
  INT DpiForSystem; // eax
  int DpiDependentMetric; // esi
  INT v17; // eax
  int v18; // eax
  struct tagSBTRACK *v19; // esi
  int v20; // eax
  struct tagWND *v21; // edi
  BOOL v22; // eax
  unsigned __int16 v23; // cx
  unsigned int v24; // eax
  int v25; // [esp+10h] [ebp-18h] BYREF
  int v26; // [esp+14h] [ebp-14h]
  int v27; // [esp+18h] [ebp-10h]
  int v28; // [esp+1Ch] [ebp-Ch]
  struct tagEVENTHOOK *v29; // [esp+20h] [ebp-8h]
  HDC v30; // [esp+24h] [ebp-4h]

  v7 = (struct tagEVENTHOOK *)a2;
  v29 = (struct tagEVENTHOOK *)a2;
  if ( (unsigned int)a4 < 2 )
  {
    if ( (*(_BYTE *)a1 & 8) != 0 )
    {
      RecalcTrackRect((int)a1);
      *a1 &= ~8u;
    }
    v25 = a1[4];
    v26 = a1[5];
    v27 = a1[6];
    v28 = a1[7];
    DCEx = (HDC)_GetDCEx(v29, 0, 65537);
    v13 = *a1;
    v30 = DCEx;
    v14 = v13 & 2;
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(v14 != 0 ? 0 : 11, DpiForSystem);
    v17 = GetDpiForSystem();
    v18 = GetDpiDependentMetric(v14 != 0 ? 10 : 1, v17);
    if ( DpiDependentMetric == v27 - v25 && v18 == v28 - v26 )
    {
      v19 = a4;
      if ( a4 )
        v20 = ~(2 * (unsigned __int8)*a1) & 4 | 0x32;
      else
        v20 = (*a1 & 2) != 0 ? 46 : 58;
      v21 = a3;
      if ( a3 )
        ++v20;
      BitBltSysBmp(v30, v25, v26, v20, 1);
    }
    else
    {
      v21 = a3;
      v19 = a4;
      DrawFrameControl(v30, &v25, (HDC)3, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~(unsigned __int8)*a1 & 2);
    }
    _ReleaseDC(v30);
    v22 = 0;
    if ( v19 )
    {
      v23 = 1544;
      v22 = v21 != 0;
    }
    else
    {
      v23 = 1537;
      LOBYTE(v22) = v21 != 0;
    }
    v7 = v29;
    SetOrClrWF(v22, (int)v29, v23, 1);
    v10 = _gdwDeferWinEvent != 0 ? 3 : 1;
    v11 = (struct tagWND *)(4 * (v19 != 0) + 1);
  }
  else
  {
    InvertScrollHilite(a2, a1);
    v8 = 0;
    if ( a4 == (struct tagSBTRACK *)2 )
    {
      v9 = 1538;
      LOBYTE(v8) = a3 != 0;
    }
    else
    {
      v9 = 1540;
      v8 = a3 != 0;
    }
    SetOrClrWF(v8, (int)v7, v9, 1);
    v10 = _gdwDeferWinEvent != 0 ? 3 : 1;
    v11 = (struct tagWND *)(2 * (a4 != (struct tagSBTRACK *)2) + 2);
  }
  if ( (*a1 & 4) != 0 )
    v24 = -4;
  else
    v24 = ((*a1 & 2) != 0) | 0xFFFFFFFA;
  xxxWindowEvent(0x800Au, v7, v24, v11, v10);
}
