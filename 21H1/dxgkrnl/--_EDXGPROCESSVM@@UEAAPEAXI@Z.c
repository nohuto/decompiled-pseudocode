/*
 * XREFs of ??_EDXGPROCESSVM@@UEAAPEAXI@Z @ 0x1C0046B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C0046AB8 (--1DXGPROCESSVM@@UEAA@XZ.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::`vector deleting destructor'(DXGPROCESSVM *P, char a2)
{
  DXGPROCESSVM::~DXGPROCESSVM(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
