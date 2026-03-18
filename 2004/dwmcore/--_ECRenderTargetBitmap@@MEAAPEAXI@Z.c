/*
 * XREFs of ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x18003D5A0
 * Callers:
 *     ??_ECRenderTargetBitmap@@OFA@EAAPEAXI@Z @ 0x1800F0430 (--_ECRenderTargetBitmap@@OFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18003D758 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

CRenderTargetBitmap *__fastcall CRenderTargetBitmap::`vector deleting destructor'(CRenderTargetBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x100uLL);
  return this;
}
