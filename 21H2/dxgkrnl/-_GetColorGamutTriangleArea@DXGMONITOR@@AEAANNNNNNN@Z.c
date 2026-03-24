/*
 * XREFs of ?_GetColorGamutTriangleArea@DXGMONITOR@@AEAANNNNNNN@Z @ 0x1C018F6DC
 * Callers:
 *     ?_GetColorPrimariesType@DXGMONITOR@@AEAA?AW4ColorPrimaryType@1@XZ @ 0x1C018F39C (-_GetColorPrimariesType@DXGMONITOR@@AEAA-AW4ColorPrimaryType@1@XZ.c)
 * Callees:
 *     <none>
 */

double __fastcall DXGMONITOR::_GetColorGamutTriangleArea(
        DXGMONITOR *this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7)
{
  double v7; // xmm6_8
  double v8; // xmm2_8
  double v9; // xmm6_8

  v7 = a2 * a5 + a4 * a7 + a3 * a6;
  v8 = a3 * a4 + a5 * a6 + a2 * a7;
  if ( v7 <= v8 )
    v9 = v8 - v7;
  else
    v9 = v7 - v8;
  return v9 * 0.5;
}
