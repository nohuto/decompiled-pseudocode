/*
 * XREFs of ?LinearizeRGBColorValue@@YANN@Z @ 0x18046FA20
 * Callers:
 *     ?CalculateColorLuminosity@@YANK@Z @ 0x18046D2B4 (-CalculateColorLuminosity@@YANK@Z.c)
 * Callees:
 *     pow @ 0x18008DA20 (pow.c)
 */

double __fastcall LinearizeRGBColorValue(double a1)
{
  double v1; // xmm2_8

  v1 = a1 / 255.0;
  if ( a1 / 255.0 > 0.03928 )
    return pow((v1 + 0.055) / 1.055, 2.4);
  else
    return v1 / 12.92;
}
