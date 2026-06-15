/*
 * XREFs of ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800B92F0
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800C26E8 (-SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z.c)
 * Callees:
 *     _o_log10_0 @ 0x18006B560 (_o_log10_0.c)
 *     pow @ 0x18006B56C (pow.c)
 */

double __fastcall CVolumeUnit::ConvertScalarToDb(CVolumeUnit *this, double a2)
{
  if ( pow(10.0, -9.6) <= a2 )
    return o_log10_0(a2) * 20.0;
  else
    return DOUBLE_N192_0;
}
