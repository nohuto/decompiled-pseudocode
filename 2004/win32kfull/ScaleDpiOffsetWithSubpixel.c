/*
 * XREFs of ScaleDpiOffsetWithSubpixel @ 0x1C01E639C
 * Callers:
 *     OffsetChildren @ 0x1C00B04D4 (OffsetChildren.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z @ 0x1C01E45F4 (-GetDpiRectWithSubpixel@@YAXPEAUtagRECT@@PEAMPEAUtagWND@@21111@Z.c)
 * Callees:
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C01097BC (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x1C01E4820 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 */

void __fastcall ScaleDpiOffsetWithSubpixel(int *a1, float *a2, struct tagWND *a3, struct tagWND *a4)
{
  int WindowCoordinateSpaceDpi; // ebp
  unsigned __int16 v8; // ax
  float v9; // xmm2_4

  WindowCoordinateSpaceDpi = (unsigned __int16)GetWindowCoordinateSpaceDpi(a3);
  v8 = GetWindowCoordinateSpaceDpi(a4);
  if ( v8 )
  {
    v9 = (float)WindowCoordinateSpaceDpi / (float)v8;
    ScaleValueWithSubpixel(a1, a2, v9);
    ScaleValueWithSubpixel(a1 + 1, a2 + 1, v9);
  }
}
