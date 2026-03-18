/*
 * XREFs of ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1800D6370
 * Callers:
 *     ??_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z @ 0x1800F3650 (--_ECScratchRenderTargetBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18006C4F8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
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
