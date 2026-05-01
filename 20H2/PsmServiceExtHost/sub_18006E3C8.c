/*
 * XREFs of sub_18006E3C8 @ 0x18006E3C8
 * Callers:
 *     sub_18006ECD0 @ 0x18006ECD0 (sub_18006ECD0.c)
 *     sub_1800701C0 @ 0x1800701C0 (sub_1800701C0.c)
 * Callees:
 *     sub_18006E004 @ 0x18006E004 (sub_18006E004.c)
 *     sub_18006E348 @ 0x18006E348 (sub_18006E348.c)
 */

_QWORD *__fastcall sub_18006E3C8(_QWORD **a1)
{
  _QWORD *result; // rax
  __int64 v3; // r8
  volatile signed __int64 *v4; // rdi
  _QWORD *v5; // rdx

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == a1 )
      break;
    v3 = *result;
    v4 = result - 7;
    if ( *(_QWORD **)(*result + 8LL) != result || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    *(_OWORD *)result = 0LL;
    sub_18006E004(result - 7);
    sub_18006E348(v4);
  }
  return result;
}
