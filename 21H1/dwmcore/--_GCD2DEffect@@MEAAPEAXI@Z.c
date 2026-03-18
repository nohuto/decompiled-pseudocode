/*
 * XREFs of ??_GCD2DEffect@@MEAAPEAXI@Z @ 0x18024E300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DEffect@@MEAA@XZ @ 0x18024E270 (--1CD2DEffect@@MEAA@XZ.c)
 */

CD2DEffect *__fastcall CD2DEffect::`scalar deleting destructor'(CD2DEffect *this, char a2)
{
  CD2DEffect::~CD2DEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
