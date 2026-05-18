/*
 * XREFs of sub_1800D5EC4 @ 0x1800D5EC4
 * Callers:
 *     sub_1800D57FC @ 0x1800D57FC (sub_1800D57FC.c)
 *     sub_1800D5A78 @ 0x1800D5A78 (sub_1800D5A78.c)
 *     sub_1800D5D34 @ 0x1800D5D34 (sub_1800D5D34.c)
 *     sub_1800D5DD4 @ 0x1800D5DD4 (sub_1800D5DD4.c)
 *     sub_1800D5F30 @ 0x1800D5F30 (sub_1800D5F30.c)
 *     sub_1800D5FB8 @ 0x1800D5FB8 (sub_1800D5FB8.c)
 * Callees:
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D5EC4(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *i; // rax

  v3 = (_QWORD *)(a1 + 184);
  v4 = (_QWORD *)(a1 + 144);
  for ( i = v4; i != v3; ++i )
  {
    if ( *i == a3 )
      break;
  }
  if ( i == v3 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_BYTE *)a2 = 0;
  }
  else
  {
    *(_BYTE *)a2 = 1;
    *(_QWORD *)(a2 + 8) = (unsigned int)(i - v4);
  }
  return a2;
}
