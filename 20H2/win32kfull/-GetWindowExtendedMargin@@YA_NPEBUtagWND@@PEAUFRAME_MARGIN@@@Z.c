/*
 * XREFs of ?GetWindowExtendedMargin@@YA_NPEBUtagWND@@PEAUFRAME_MARGIN@@@Z @ 0x1C001BEC8
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C001BA50 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01CF98C (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01D0718 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C020B2D8 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     UpdateSizeTrackingInfo @ 0x1C0210CC8 (UpdateSizeTrackingInfo.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EE78 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EF70 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetWindowCompositionInfo @ 0x1C0048CE4 (_GetWindowCompositionInfo.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 */

char __fastcall GetWindowExtendedMargin(const struct tagWND *a1, struct FRAME_MARGIN *a2)
{
  char v4; // di
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  INT ScaledLogPixels; // ebx
  __int16 v13; // ax
  INT v14; // ecx
  __int16 v15; // ax
  INT v16; // ecx
  __int16 v17; // ax
  INT v18; // ecx
  _OWORD v19[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]

  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  *(_QWORD *)a2 = 0LL;
  if ( !(unsigned int)IsTopLevelWindow(a1)
    || !(unsigned int)GetWindowCompositionInfo(a1, v19)
    || !(_WORD)v20 && __PAIR32__(WORD1(v20), 0) == HIWORD(v20) && !WORD2(v20) )
  {
    return 0;
  }
  v4 = 1;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0
    && (v9 = *((_QWORD *)a1 + 5), v10 = *(_DWORD *)(v9 + 288), (v10 & 0xF) == 0)
    && (v10 & 0x40000000) != 0
    && (v11 = *(unsigned __int16 *)(v9 + 284), (_WORD)v11 != 96) )
  {
    ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v11, v6, v7, v8);
    v13 = EngMulDiv((__int16)v20, 96, ScaledLogPixels);
    v14 = SWORD2(v20);
    *(_WORD *)a2 = v13;
    v15 = EngMulDiv(v14, 96, ScaledLogPixels);
    v16 = SWORD1(v20);
    *((_WORD *)a2 + 2) = v15;
    v17 = EngMulDiv(v16, 96, ScaledLogPixels);
    v18 = SHIWORD(v20);
    *((_WORD *)a2 + 1) = v17;
    *((_WORD *)a2 + 3) = EngMulDiv(v18, 96, ScaledLogPixels);
  }
  else
  {
    *(_QWORD *)a2 = v20;
  }
  return v4;
}
