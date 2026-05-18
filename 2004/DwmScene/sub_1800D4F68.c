/*
 * XREFs of sub_1800D4F68 @ 0x1800D4F68
 * Callers:
 *     sub_1800D1F0C @ 0x1800D1F0C (sub_1800D1F0C.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

char *__fastcall sub_1800D4F68(__int64 a1, char *a2, char *a3, __int64 a4)
{
  char *v4; // rdx
  _QWORD *v5; // rcx
  char *result; // rax

  if ( a2 != a3 )
  {
    v4 = &a2[-a4];
    v5 = (_QWORD *)(a4 + 24);
    do
    {
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      *(_OWORD *)(v5 - 3) = *(_OWORD *)((char *)v5 + (_QWORD)v4 - 24);
      *(_OWORD *)(v5 - 1) = *(_OWORD *)((char *)v5 + (_QWORD)v4 - 8);
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 15LL;
      *((_BYTE *)v5 + (_QWORD)v4 - 24) = 0;
      v5[1] = *(_QWORD *)((char *)v5 + (_QWORD)v4 + 8);
      v5[2] = *(_QWORD *)((char *)v5 + (_QWORD)v4 + 16);
      v5 += 6;
      result = &v4[(_QWORD)v5 - 24];
    }
    while ( result != a3 );
  }
  return result;
}
