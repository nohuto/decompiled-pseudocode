/*
 * XREFs of ?GetWindowExtendedMargin@@YG_NPBUtagWND@@PAUFRAME_MARGIN@@@Z @ 0x15D24
 * Callers:
 *     ?xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z @ 0x1577E (-xxxNormalizeRect@@YGPAUtagMONITOR@@PAUtagWND@@PAUtagRECT@@1PAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z @ 0x13F619 (-ExtendArrangedRectangleByFrameMargin@@YGXPAUtagWND@@PAUtagSIZERECT@@@Z.c)
 *     _ReduceArrangedRectangleByFrameMargin@12 @ 0x140128 (_ReduceArrangedRectangleByFrameMargin@12.c)
 *     ?IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z @ 0x17184A (-IsEqualRectToArrangedWindow@@YGHPAUtagWND@@QBUtagRECT@@@Z.c)
 *     _UpdateSizeTrackingInfo@12 @ 0x1764E7 (_UpdateSizeTrackingInfo@12.c)
 *     ?ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E382 (-ExtendRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z @ 0x19E459 (-ReduceRectByWindowMargin@@YGXPBUtagWND@@ABUtagRECT@@PAU2@@Z.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __GetWindowCompositionInfo@8 @ 0x6DCA6 (__GetWindowCompositionInfo@8.c)
 */

char __fastcall GetWindowExtendedMargin(int a1, int a2)
{
  int v4; // edi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v7; // eax
  PKTHREAD v8; // eax
  int v9; // ecx
  int v10; // eax
  INT ScaledLogPixels; // edi
  _DWORD v12[9]; // [esp+10h] [ebp-28h] BYREF
  char v13; // [esp+37h] [ebp-1h]

  memset(v12, 0, sizeof(v12));
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( !_IsTopLevelWindow(a1) )
    return 0;
  if ( !_GetWindowCompositionInfo(a1, v12) )
    return 0;
  v4 = v12[8];
  if ( !LOWORD(v12[7]) && __PAIR32__(HIWORD(v12[7]), 0) == HIWORD(v12[8]) && !LOWORD(v12[8]) )
    return 0;
  v13 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( W32GetThreadWin32Thread(CurrentThread)
    && (v7 = KeGetCurrentThread(), *(_DWORD *)(W32GetThreadWin32Thread(v7) + 248))
    && (v8 = KeGetCurrentThread(),
        (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v8) + 248) + 4) + 32) & 1) != 0)
    && (v9 = *(_DWORD *)(a1 + 20), v10 = *(_DWORD *)(v9 + 184), (v10 & 0xF) == 0)
    && (v10 & 0x40000000) != 0
    && *(_WORD *)(v9 + 180) != 96 )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(*(unsigned __int16 *)(v9 + 180));
    *(_WORD *)a2 = EngMulDiv(SLOWORD(v12[7]), 96, ScaledLogPixels);
    *(_WORD *)(a2 + 4) = EngMulDiv(SLOWORD(v12[8]), 96, ScaledLogPixels);
    *(_WORD *)(a2 + 2) = EngMulDiv(SHIWORD(v12[7]), 96, ScaledLogPixels);
    *(_WORD *)(a2 + 6) = EngMulDiv(SHIWORD(v12[8]), 96, ScaledLogPixels);
  }
  else
  {
    *(_DWORD *)a2 = v12[7];
    *(_DWORD *)(a2 + 4) = v4;
  }
  return v13;
}
