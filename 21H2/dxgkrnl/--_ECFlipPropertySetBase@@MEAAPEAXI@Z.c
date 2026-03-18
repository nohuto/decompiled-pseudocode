/*
 * XREFs of ??_ECFlipPropertySetBase@@MEAAPEAXI@Z @ 0x1C00799F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipPropertySetBase@@MEAA@XZ @ 0x1C007EC7C (--1CFlipPropertySetBase@@MEAA@XZ.c)
 */

CFlipPropertySetBase *__fastcall CFlipPropertySetBase::`vector deleting destructor'(CFlipPropertySetBase *P, char a2)
{
  CFlipPropertySetBase::~CFlipPropertySetBase(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
