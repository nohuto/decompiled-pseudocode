/*
 * XREFs of ??A?$DynArray@PEAVCThumbnailData@@$0A@@@QEBAAEAPEAVCThumbnailData@@I@Z @ 0x180088B88
 * Callers:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18001431C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CThumbnailData *,0>::operator[](_QWORD *a1, unsigned int a2)
{
  return *a1 + 8LL * a2;
}
