/*
 * XREFs of ?UnboundedInertiaPanningAtTime@CPositionMotion@@AEBAMM@Z @ 0x18020CA28
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ @ 0x18020C6C0 (-AdvanceInertiaToTimeDefault@CPositionMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ @ 0x18020C7A0 (-CalculateNaturalEndpoint@CPositionMotion@@MEBAMXZ.c)
 * Callees:
 *     powf @ 0x1800E3D78 (powf.c)
 *     logf_0 @ 0x1800EE983 (logf_0.c)
 */

float __fastcall CPositionMotion::UnboundedInertiaPanningAtTime(CPositionMotion *this, float a2)
{
  float v4; // xmm6_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) <= 0.0000011920929 )
    return a2 * *((float *)this + 12);
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return 0.0;
  v4 = (float)(powf(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return v4 / logf_0(*((float *)this + 8));
}
