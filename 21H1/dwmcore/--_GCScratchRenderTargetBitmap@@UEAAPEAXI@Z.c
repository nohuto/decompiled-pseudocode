/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1800CE870
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z @ 0x1800F0A70 (--_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180032450 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CScratchRenderTargetBitmap *__fastcall CScratchRenderTargetBitmap::`scalar deleting destructor'(
        CScratchRenderTargetBitmap *this,
        char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
