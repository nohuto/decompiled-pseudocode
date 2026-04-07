/*
 * XREFs of ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004FC28
 * Callers:
 *     ?Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004F840 (-Lock@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800C0210 (-CopyPixels@CCompressedSourceBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x18004FC58 (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::EnsureUncompressedBitmap(CCompressedSourceBitmap *this)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 33) )
  {
    v2 = CCompressedSourceBitmap::DecompressBitmap(this);
    v1 = v2;
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x12Cu);
  }
  return v1;
}
