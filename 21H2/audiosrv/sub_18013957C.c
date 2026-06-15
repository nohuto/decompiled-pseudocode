/*
 * XREFs of sub_18013957C @ 0x18013957C
 * Callers:
 *     sub_18013933C @ 0x18013933C (sub_18013933C.c)
 *     sub_1801398F0 @ 0x1801398F0 (sub_1801398F0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18013957C(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  if ( a2 >= *(_QWORD *)(a1 + 16) )
    return 0LL;
  result = *(_QWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  for ( ; a2; --a2 )
    result = (_QWORD *)*result;
  return result;
}
