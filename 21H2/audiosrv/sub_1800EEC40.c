/*
 * XREFs of sub_1800EEC40 @ 0x1800EEC40
 * Callers:
 *     sub_1800B7E08 @ 0x1800B7E08 (sub_1800B7E08.c)
 *     sub_1800EEC40 @ 0x1800EEC40 (sub_1800EEC40.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800EEC40 @ 0x1800EEC40 (sub_1800EEC40.c)
 */

_UNKNOWN **__fastcall sub_1800EEC40(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 i; // rbx
  __int64 *v7; // rdi
  unsigned __int64 v8; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !*(_BYTE *)(i + 25); result = (_UNKNOWN **)sub_1800472E0((__int64)v7, 0x48uLL) )
  {
    sub_1800EEC40(a1, a2, *(_QWORD *)(i + 16));
    v7 = (__int64 *)i;
    i = *(_QWORD *)i;
    v8 = v7[7];
    if ( v8 >= 8 )
      sub_1800472E0(v7[4], 2 * v8 + 2);
    v7[6] = 0LL;
    v7[7] = 7LL;
    *((_WORD *)v7 + 16) = 0;
  }
  return result;
}
