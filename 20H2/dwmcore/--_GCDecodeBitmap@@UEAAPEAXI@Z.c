/*
 * XREFs of ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x180263C70
 * Callers:
 *     ??_ECDecodeBitmap@@WFA@EAAPEAXI@Z @ 0x1800F34F0 (--_ECDecodeBitmap@@WFA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRenderTargetBitmap@@MEAA@XZ @ 0x18006C4F8 (--1CRenderTargetBitmap@@MEAA@XZ.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::`scalar deleting destructor'(CDecodeBitmap *this, char a2)
{
  CRenderTargetBitmap::~CRenderTargetBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
