/*
 * XREFs of ??_EDXGPROCESSVM@@UEAAPEAXI@Z @ 0x1C00489D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSVM@@UEAA@XZ @ 0x1C004891C (--1DXGPROCESSVM@@UEAA@XZ.c)
 */

DXGPROCESSVM *__fastcall DXGPROCESSVM::`vector deleting destructor'(DXGPROCESSVM *P, char a2)
{
  DXGPROCESSVM::~DXGPROCESSVM(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
