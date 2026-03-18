/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x18023BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800AFFB8 (--1CD2DContext@@UEAA@XZ.c)
 */

CD2DContext *__fastcall CD2DContext::`scalar deleting destructor'(CD2DContext *this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
