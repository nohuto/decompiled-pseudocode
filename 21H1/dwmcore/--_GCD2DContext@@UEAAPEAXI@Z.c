/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18023E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800A4D6C (--1CD2DContext@@UEAA@XZ.c)
 */

CD2DResourceManager **__fastcall CD2DContext::`scalar deleting destructor'(CD2DResourceManager **this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
