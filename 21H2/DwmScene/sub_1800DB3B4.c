/*
 * XREFs of sub_1800DB3B4 @ 0x1800DB3B4
 * Callers:
 *     sub_1800DAB84 @ 0x1800DAB84 (sub_1800DAB84.c)
 *     sub_1800DB3B4 @ 0x1800DB3B4 (sub_1800DB3B4.c)
 *     sub_18010BD28 @ 0x18010BD28 (sub_18010BD28.c)
 * Callees:
 *     sub_180082C38 @ 0x180082C38 (sub_180082C38.c)
 *     sub_1800DAD28 @ 0x1800DAD28 (sub_1800DAD28.c)
 *     sub_1800DAEE4 @ 0x1800DAEE4 (sub_1800DAEE4.c)
 *     sub_1800DB238 @ 0x1800DB238 (sub_1800DB238.c)
 *     sub_1800DB3B4 @ 0x1800DB3B4 (sub_1800DB3B4.c)
 */

__int64 __fastcall sub_1800DB3B4(__int64 *a1, char *a2, __int64 a3, __int64 (__fastcall *a4)(__int128 *, __int64 *))
{
  __int64 result; // rax
  char *v7; // rbx
  __int64 *v8; // rdi
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  result = (a2 - (char *)a1) >> 4;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_12;
  do
  {
    if ( a3 <= 0 )
      break;
    sub_1800DAEE4(&v9, (unsigned __int64)v8, v7, (unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((v7 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_1800DB3B4(v10, v7, a3, a4, (_DWORD)v9, v10);
      v7 = v9;
    }
    else
    {
      sub_1800DB3B4(v8, v9, a3, a4, (_DWORD)v9, v10);
      v8 = v10;
    }
    result = (v7 - (char *)v8) >> 4;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_12:
    if ( result >= 2 )
      return (__int64)sub_180082C38(v8, (__int64 *)v7, a4);
  }
  else
  {
    sub_1800DAD28((__int64)v8, (__int64)v7, (__int64)a4);
    while ( 1 )
    {
      result = (v7 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( result < 32 )
        break;
      sub_1800DB238(v8, (__int64)v7, (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
      v7 -= 16;
    }
  }
  return result;
}
