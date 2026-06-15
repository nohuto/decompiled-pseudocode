/*
 * XREFs of ?SetVolumeLimitScalar@CVolumeUnit@@QEAAJM@Z @ 0x1800C1B48
 * Callers:
 *     ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1800C1A90 (-SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z.c)
 * Callees:
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x18005D66C (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 *     ?ConvertScalarToDb@CVolumeUnit@@IEAANN@Z @ 0x1800B8720 (-ConvertScalarToDb@CVolumeUnit@@IEAANN@Z.c)
 */

__int64 __fastcall CVolumeUnit::SetVolumeLimitScalar(CVolumeUnit *this, float a2)
{
  double v3; // xmm0_8
  CVolumeUnit *v4; // rcx
  double v5; // xmm0_8
  __int64 result; // rax
  float v7; // xmm1_4

  if ( a2 < 0.0 || a2 > 1.0 )
    return 2147942487LL;
  v3 = CVolumeUnit::ScalarFromTaper(this, (*((double *)this + 4) - *((double *)this + 3)) * a2 + *((double *)this + 3));
  v5 = CVolumeUnit::ConvertScalarToDb(v4, v3);
  result = 0LL;
  v7 = v5;
  *((float *)this + 5) = v7;
  return result;
}
