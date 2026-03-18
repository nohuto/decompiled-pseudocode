/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x180031710
 * Callers:
 *     ??_ECRenderTargetBitmap@@OFA@EAAPEAXI@Z @ 0x1800ED4A0 (--_ECRenderTargetBitmap@@OFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180032450 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
