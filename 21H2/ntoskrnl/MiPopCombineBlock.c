/*
 * XREFs of MiPopCombineBlock @ 0x14036B004
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiPopCombineBlock(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 )
    return 0LL;
  if ( (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  return result;
}
