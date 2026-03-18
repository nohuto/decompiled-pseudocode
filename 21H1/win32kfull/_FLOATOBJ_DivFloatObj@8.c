/*
 * XREFs of _FLOATOBJ_DivFloatObj@8 @ 0xF6F82
 * Callers:
 *     <none>
 * Callees:
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

_DWORD *__stdcall FLOATOBJ_DivFloatObj(int *a1, int *a2)
{
  return divff3_c(a1, a1, a2);
}
