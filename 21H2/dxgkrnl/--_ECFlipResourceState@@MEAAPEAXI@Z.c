/*
 * XREFs of ??_ECFlipResourceState@@MEAAPEAXI@Z @ 0x1C007EEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CFlipResourceState@@MEAA@XZ @ 0x1C007EDB4 (--1CFlipResourceState@@MEAA@XZ.c)
 */

CFlipResourceState *__fastcall CFlipResourceState::`vector deleting destructor'(CFlipResourceState *P, char a2)
{
  CFlipResourceState::~CFlipResourceState(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
