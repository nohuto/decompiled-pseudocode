/*
 * XREFs of ?UsePixelSnapping@CVisual@@AEBA_NAEBVCMILMatrix@@@Z @ 0x18006C1DC
 * Callers:
 *     ?GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006C068 (-GetRootTransform@CVisual@@QEBAXPEAVCMILMatrix@@@Z.c)
 * Callees:
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800C208C (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

bool __fastcall CVisual::UsePixelSnapping(CVisual *this, const struct CMILMatrix *a2)
{
  char v2; // r11

  v2 = 0;
  if ( (*((_BYTE *)this + 94) & 2) != 0 )
    return (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a2) != 0;
  return v2;
}
