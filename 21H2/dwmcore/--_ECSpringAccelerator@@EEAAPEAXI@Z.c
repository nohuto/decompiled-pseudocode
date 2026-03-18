/*
 * XREFs of ??_ECSpringAccelerator@@EEAAPEAXI@Z @ 0x180218D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::`vector deleting destructor'(CSpringAccelerator *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
