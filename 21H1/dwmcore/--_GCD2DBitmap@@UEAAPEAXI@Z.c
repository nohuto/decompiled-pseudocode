/*
 * XREFs of ??_GCD2DBitmap@@UEAAPEAXI@Z @ 0x1800CB770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x180030C70 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
