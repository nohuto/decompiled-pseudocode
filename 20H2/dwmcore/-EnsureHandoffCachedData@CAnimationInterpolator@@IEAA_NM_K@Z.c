/*
 * XREFs of ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18021D09C
 * Callers:
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18021D218 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 * Callees:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18021D3E0 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

char __fastcall CAnimationInterpolator::EnsureHandoffCachedData(CAnimationInterpolator *this, float a2, __int64 a3)
{
  char InterpolatedValue; // di
  char v6; // al
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm6_4
  float v12; // [rsp+40h] [rbp+8h] BYREF

  InterpolatedValue = 1;
  if ( (*((_BYTE *)this + 24) & 2) == 0 )
  {
    v12 = 0.0;
    InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, 0LL, &v12, 0LL);
    if ( InterpolatedValue )
    {
      InterpolatedValue = CAnimationInterpolator::GetInterpolatedValue(this, a3, (float *)this + 4, 0LL);
      if ( InterpolatedValue )
      {
        v6 = *((_BYTE *)this + 24);
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 4) - v12) & _xmm) >= 0.0000011920929 )
        {
          v7 = *((float *)this + 4);
          v8 = v7 - v12;
          *((_BYTE *)this + 24) = v6 | 1;
          v9 = (float)(v7 - a2) / v8;
          *((float *)this + 5) = v9;
          InterpolatedValue = _finite(v9) != 0 ? InterpolatedValue : 0;
        }
        else
        {
          *((_BYTE *)this + 24) = v6 & 0xFE;
        }
        if ( InterpolatedValue )
        {
          v10 = a2 - v12;
          *((_BYTE *)this + 24) |= 2u;
          *((float *)this + 3) = v10;
        }
      }
    }
  }
  return InterpolatedValue;
}
