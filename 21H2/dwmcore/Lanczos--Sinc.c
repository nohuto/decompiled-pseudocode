/*
 * XREFs of Lanczos::Sinc @ 0x1801E7218
 * Callers:
 *     Lanczos::Lanczos @ 0x1801E71B0 (Lanczos--Lanczos.c)
 * Callees:
 *     _o_sin_0 @ 0x180101958 (_o_sin_0.c)
 */

double __fastcall Lanczos::Sinc(double a1)
{
  if ( a1 == 0.0 )
    return DOUBLE_1_0;
  else
    return o_sin_0(a1) / a1;
}
