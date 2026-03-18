/*
 * XREFs of _dynamic_initializer_for__CCompositionDistantLight::sc_Direction__ @ 0x180001A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCompositionDistantLight::sc_Direction__()
{
  __int64 result; // rax
  __int64 v1; // [rsp+10h] [rbp-18h]

  result = 0LL;
  LODWORD(v1) = 0;
  xmmword_180343DB0 = (unsigned __int64)CCompositionLight::SetDirectionProperty;
  qword_180343DC0 = v1;
  return result;
}
