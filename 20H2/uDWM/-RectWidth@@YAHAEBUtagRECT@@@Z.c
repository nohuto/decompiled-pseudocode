/*
 * XREFs of ?RectWidth@@YAHAEBUtagRECT@@@Z @ 0x18007FF54
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001431C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180043CC8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RectWidth(const struct tagRECT *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  v2 = a1->right - a1->left;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  return result;
}
