/*
 * XREFs of ?CurrentInertiaVelocity@CScaleMotion@@MEBAMXZ @ 0x18025FFF0
 * Callers:
 *     <none>
 * Callees:
 *     powf @ 0x18010194C (powf.c)
 */

float __fastcall CScaleMotion::CurrentInertiaVelocity(CScaleMotion *this)
{
  float v1; // xmm1_4

  v1 = *((float *)this + 6);
  if ( v1 >= *((float *)this + 17) )
    return 0.0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 8) - 1.0) & _xmm) <= 0.0000011920929 )
    return *((float *)this + 12);
  if ( COERCE_FLOAT(*((_DWORD *)this + 8) & _xmm) >= 0.0000011920929 && (*((_BYTE *)this + 8) & 1) != 0 )
    return powf(*((float *)this + 8), v1) * *((float *)this + 12);
  else
    return 0.0;
}
