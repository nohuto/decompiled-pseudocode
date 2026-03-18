/*
 * XREFs of ?TimeToMinimumVelocity@CPositionMotion@@MEBAMXZ @ 0x18025FD70
 * Callers:
 *     <none>
 * Callees:
 *     _o_logf_0 @ 0x180101934 (_o_logf_0.c)
 */

float __fastcall CPositionMotion::TimeToMinimumVelocity(CPositionMotion *this)
{
  float v2; // xmm6_4
  float v3; // xmm7_4
  float v4; // xmm0_4
  float v5; // xmm6_4
  float v6; // xmm0_4

  v2 = 0.0;
  LODWORD(v3) = *((_DWORD *)this + 12) & _xmm;
  if ( v3 > *((float *)this + 14) )
  {
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) > 0.0000011920929 )
    {
      if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
      {
        v4 = *((float *)this + 14);
        o_logf_0();
        o_logf_0();
        v5 = v4 - v3;
        v6 = *((float *)this + 8);
        o_logf_0();
        return v5 / v6;
      }
    }
    else
    {
      return fmaxf(
               0.0,
               ((float)((float)(*((float *)this + 12) > 0.0) * 3.4028235e38) - *((float *)this + 11))
             / *((float *)this + 12));
    }
  }
  return v2;
}
