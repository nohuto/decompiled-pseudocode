/*
 * XREFs of ?UnboundedValueAtTime@CScaleMotion@@AEBAMM@Z @ 0x180211470
 * Callers:
 *     ?AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ @ 0x1802112C0 (-AdvanceInertiaToTimeDefault@CScaleMotion@@MEAAMXZ.c)
 *     ?CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ @ 0x1802112F0 (-CalculateNaturalEndpoint@CScaleMotion@@MEBAMXZ.c)
 * Callees:
 *     powf @ 0x1800E25C8 (powf.c)
 *     logf_0 @ 0x1800EBD23 (logf_0.c)
 */

float __fastcall CScaleMotion::UnboundedValueAtTime(CScaleMotion *this, float a2)
{
  float v4; // xmm6_4

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) <= 0.0000011920929 )
    return (float)(a2 * *((float *)this + 12)) + *((float *)this + 11);
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) < 0.0000011920929 || (*((_BYTE *)this + 8) & 1) == 0 )
    return *((float *)this + 11);
  v4 = (float)(powf(*((float *)this + 8), a2) - 1.0) * *((float *)this + 12);
  return (float)(v4 / logf_0(*((float *)this + 8))) + *((float *)this + 11);
}
