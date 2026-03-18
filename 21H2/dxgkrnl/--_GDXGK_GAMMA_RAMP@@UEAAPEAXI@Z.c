/*
 * XREFs of ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0012CD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGK_GAMMA_RAMP@@UEAA@XZ @ 0x1C0012D14 (--1DXGK_GAMMA_RAMP@@UEAA@XZ.c)
 */

DXGK_GAMMA_RAMP *__fastcall DXGK_GAMMA_RAMP::`scalar deleting destructor'(DXGK_GAMMA_RAMP *P, char a2)
{
  DXGK_GAMMA_RAMP::~DXGK_GAMMA_RAMP(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
