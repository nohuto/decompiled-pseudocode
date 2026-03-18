/*
 * XREFs of _LW_BrushInit@0 @ 0xEBAA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall LW_BrushInit()
{
  int Bitmap; // eax
  int v1; // edi
  int SolidBrush; // eax

  Bitmap = GreCreateBitmap(8, 8, 1, 1, &unk_250244);
  v1 = Bitmap;
  if ( !Bitmap )
    return 0;
  *(_DWORD *)(_gpsi + 4416) = GreCreatePatternBrush(Bitmap);
  _ghbrWhite = GreGetStockObject(0);
  _ghbrBlack = GreGetStockObject(4);
  if ( !*(_DWORD *)(_gpsi + 4416) )
    return 0;
  GreDeleteObject(v1);
  GreSetBrushOwner(*(_DWORD *)(_gpsi + 4416), 0);
  SolidBrush = GreCreateSolidBrush(0);
  _ghbrHungApp = SolidBrush;
  if ( !SolidBrush )
    return 0;
  GreSetBrushOwner(SolidBrush, 0);
  return 1;
}
