/*
 * XREFs of ?TimeToMinimumVelocity@CScaleMotion@@MEBAMXZ @ 0x180260070
 * Callers:
 *     <none>
 * Callees:
 *     _o_logf_0 @ 0x180101934 (_o_logf_0.c)
 */

float __fastcall CScaleMotion::TimeToMinimumVelocity(CScaleMotion *this)
{
  float v1; // xmm4_4
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  v1 = *((float *)this + 12);
  v3 = *((float *)this + 14);
  LODWORD(v4) = LODWORD(v1) & _xmm;
  v5 = 0.0;
  if ( COERCE_FLOAT(LODWORD(v1) & _xmm) > v3 )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
      {
        o_logf_0();
        v7 = *((float *)this + 8);
        o_logf_0();
        return (float)(v3 / v4) / v7;
      }
    }
    else
    {
      if ( (float)(v1 > 0.0) <= 0.0 )
        v6 = 0.0;
      else
        v6 = FLOAT_3_4028235e38;
      return fmaxf(0.0, (float)(v6 - *((float *)this + 11)) / v1);
    }
  }
  return v5;
}
