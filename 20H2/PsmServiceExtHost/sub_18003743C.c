/*
 * XREFs of sub_18003743C @ 0x18003743C
 * Callers:
 *     sub_180027644 @ 0x180027644 (sub_180027644.c)
 *     sub_180037340 @ 0x180037340 (sub_180037340.c)
 *     sub_18006DF4C @ 0x18006DF4C (sub_18006DF4C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18003743C(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}
