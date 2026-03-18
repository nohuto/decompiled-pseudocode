/*
 * XREFs of ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x18006C930
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x18006A758 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x168uLL);
  return this;
}
