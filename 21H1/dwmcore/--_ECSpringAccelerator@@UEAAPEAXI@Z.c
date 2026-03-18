/*
 * XREFs of ??_ECSpringAccelerator@@UEAAPEAXI@Z @ 0x1801CB91C
 * Callers:
 *     ??_ECSpringAccelerator@@W7EAAPEAXI@Z @ 0x1800EDDA0 (--_ECSpringAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 */

CSpringAccelerator *__fastcall CSpringAccelerator::`vector deleting destructor'(CSpringAccelerator *this, char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
