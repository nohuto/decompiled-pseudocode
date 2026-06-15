/*
 * XREFs of sub_18006644C @ 0x18006644C
 * Callers:
 *     sub_1800661E0 @ 0x1800661E0 (sub_1800661E0.c)
 *     sub_18006644C @ 0x18006644C (sub_18006644C.c)
 *     sub_180138D38 @ 0x180138D38 (sub_180138D38.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18006644C @ 0x18006644C (sub_18006644C.c)
 */

_UNKNOWN **__fastcall sub_18006644C(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a3; !*(_BYTE *)(i + 25); result = (_UNKNOWN **)sub_1800472E0((__int64)v7, 0x60uLL) )
  {
    sub_18006644C(a1, a2, *(_QWORD *)(i + 16));
    v7 = (__int64 *)i;
    i = *(_QWORD *)i;
    v8 = v7[11];
    if ( v8 >= 8 )
      sub_1800472E0(v7[8], 2 * v8 + 2);
    v7[10] = 0LL;
    v7[11] = 7LL;
    *((_WORD *)v7 + 32) = 0;
    v9 = v7[7];
    if ( v9 >= 8 )
      sub_1800472E0(v7[4], 2 * v9 + 2);
    v7[6] = 0LL;
    v7[7] = 7LL;
    *((_WORD *)v7 + 16) = 0;
  }
  return result;
}
