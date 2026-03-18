/*
 * XREFs of ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0244D34
 * Callers:
 *     xxxEndScroll @ 0x1C0245424 (xxxEndScroll.c)
 *     xxxTrackBox @ 0x1C02465A0 (xxxTrackBox.c)
 * Callees:
 *     DrawFrameControl @ 0x1C0036FB0 (DrawFrameControl.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C005DE40 (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00CD660 (xxxWindowEvent.c)
 *     BitBltSysBmp @ 0x1C00FE3CC (BitBltSysBmp.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0244318 (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02443B8 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall zzzDrawInvertScrollArea(struct tagWND *a1, struct tagSBTRACK *a2, int a3, unsigned int a4)
{
  unsigned int v4; // esi
  unsigned __int16 v9; // ax
  unsigned int v10; // r12d
  int v11; // r8d
  bool v12; // zf
  int v13; // ebx
  __int64 v14; // rcx
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // edi
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // edx
  int v21; // eax
  int v22; // eax
  HDC v23; // rdi
  unsigned int v24; // r9d
  unsigned __int16 v25; // ax
  unsigned int v26; // r8d
  HDC DCEx; // [rsp+30h] [rbp-58h]
  __m128i v28; // [rsp+38h] [rbp-50h] BYREF

  v4 = 2;
  if ( a4 < 2 )
  {
    if ( (*(_DWORD *)a2 & 8) != 0 )
    {
      RecalcTrackRect(a2);
      *(_DWORD *)a2 &= ~8u;
    }
    v28 = *((__m128i *)a2 + 2);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
    v13 = *(_DWORD *)a2 & 2;
    DpiForSystem = GetDpiForSystem(v14);
    DpiDependentMetric = GetDpiDependentMetric(v13 == 0 ? 0xB : 0, DpiForSystem);
    v18 = GetDpiForSystem(v17);
    v19 = GetDpiDependentMetric(v13 != 0 ? 10 : 1, v18);
    v20 = _mm_cvtsi128_si32(v28);
    v10 = 3;
    if ( DpiDependentMetric == _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)) - v20
      && v19 == v28.m128i_i32[3] - v28.m128i_i32[1] )
    {
      v21 = *(_DWORD *)a2;
      if ( a4 )
        v22 = ~(2 * (_BYTE)v21) & 4 | 0x32;
      else
        v22 = (v21 & 2) != 0 ? 46 : 58;
      v23 = DCEx;
      v24 = v22 + 1;
      if ( !a3 )
        v24 = v22;
      BitBltSysBmp((__int64)DCEx, v20, v28.m128i_i32[1], v24, 1);
    }
    else
    {
      v23 = DCEx;
      DrawFrameControl(DCEx, (struct tagRECT *)&v28, 3u, (a4 != 0) | (a3 != 0 ? 0x4200 : 0) | ~*(_DWORD *)a2 & 2);
    }
    _ReleaseDC(v23);
    if ( a4 )
      v25 = 1544;
    else
      v25 = 1537;
    SetOrClrWF(a3 != 0, (__int64)a1, v25, 1);
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    v4 = a4 != 0 ? 5 : 1;
    v12 = (v11 & 4) == 0;
  }
  else
  {
    InvertScrollHilite(a1, (const struct tagRECT *)a2);
    if ( a4 == 2 )
      v9 = 1538;
    else
      v9 = 1540;
    SetOrClrWF(a3 != 0, (__int64)a1, v9, 1);
    v10 = 3;
    v11 = *(_DWORD *)a2;
    if ( !gdwDeferWinEvent )
      v10 = 1;
    if ( a4 != 2 )
      v4 = 4;
    v12 = (v11 & 4) == 0;
  }
  if ( v12 )
    v26 = ((v11 & 2) != 0) | 0xFFFFFFFA;
  else
    v26 = -4;
  xxxWindowEvent(0x800Au, a1, v26, v4, v10);
}
