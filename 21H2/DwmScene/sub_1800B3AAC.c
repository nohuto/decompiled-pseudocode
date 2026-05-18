/*
 * XREFs of sub_1800B3AAC @ 0x1800B3AAC
 * Callers:
 *     sub_1800ABA08 @ 0x1800ABA08 (sub_1800ABA08.c)
 *     sub_1800AC6B4 @ 0x1800AC6B4 (sub_1800AC6B4.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

char *__fastcall sub_1800B3AAC(__int64 a1, char *a2, char *a3, __int64 a4)
{
  char *v4; // rdx
  _QWORD *v5; // rcx
  char *result; // rax

  if ( a2 != a3 )
  {
    v4 = &a2[-a4];
    v5 = (_QWORD *)(a4 + 40);
    do
    {
      *((_BYTE *)v5 - 40) = *((_BYTE *)v5 + (_QWORD)v4 - 40);
      *(v5 - 4) = *(_QWORD *)((char *)v5 + (_QWORD)v4 - 32);
      *(v5 - 3) = *(_QWORD *)((char *)v5 + (_QWORD)v4 - 24);
      *(v5 - 2) = *(_QWORD *)((char *)v5 + (_QWORD)v4 - 16);
      *(v5 - 1) = 0LL;
      *v5 = 0LL;
      *(v5 - 1) = *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8);
      *v5 = *(_QWORD *)((char *)v5 + (_QWORD)v4);
      *(_QWORD *)((char *)v5 + (_QWORD)v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + (_QWORD)v4) = 0LL;
      v5 += 6;
      result = &v4[(_QWORD)v5 - 40];
    }
    while ( result != a3 );
  }
  return result;
}
