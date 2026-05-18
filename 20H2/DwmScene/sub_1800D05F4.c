/*
 * XREFs of sub_1800D05F4 @ 0x1800D05F4
 * Callers:
 *     sub_1800CFF2C @ 0x1800CFF2C (sub_1800CFF2C.c)
 *     sub_1800D01A8 @ 0x1800D01A8 (sub_1800D01A8.c)
 *     sub_1800D0464 @ 0x1800D0464 (sub_1800D0464.c)
 *     sub_1800D0504 @ 0x1800D0504 (sub_1800D0504.c)
 *     sub_1800D0660 @ 0x1800D0660 (sub_1800D0660.c)
 *     sub_1800D06E8 @ 0x1800D06E8 (sub_1800D06E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800D05F4(__int64 a1, __int64 a2, __int64 a3)
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
