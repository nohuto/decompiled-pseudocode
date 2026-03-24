/*
 * XREFs of _dynamic_initializer_for__CCompositionAmbientLight::sc_Intensity__ @ 0x180001990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCompositionAmbientLight::sc_Intensity__()
{
  __int64 result; // rax
  __int64 v1; // [rsp+10h] [rbp-18h]

  result = 0LL;
  LODWORD(v1) = 0;
  xmmword_180345D40 = (unsigned __int64)CCompositionLight::SetAnimatedProperty;
  qword_180345D50 = v1;
  return result;
}
