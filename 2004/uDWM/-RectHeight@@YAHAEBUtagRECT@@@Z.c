/*
 * XREFs of ?RectHeight@@YAHAEBUtagRECT@@@Z @ 0x18008079C
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180021E40 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800269B4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CD8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectHeight(const struct tagRECT *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = a1->bottom - a1->top;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  return result;
}
