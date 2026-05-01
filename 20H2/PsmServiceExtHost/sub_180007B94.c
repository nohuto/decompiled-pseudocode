/*
 * XREFs of sub_180007B94 @ 0x180007B94
 * Callers:
 *     sub_180007A80 @ 0x180007A80 (sub_180007A80.c)
 * Callees:
 *     sub_180021C00 @ 0x180021C00 (sub_180021C00.c)
 */

unsigned __int64 *__fastcall sub_180007B94(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 *result; // rax
  unsigned __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v5 = *a1;
  v7 = a1[3];
  if ( a2 >= *a1 )
  {
    if ( a2 < a1[1] )
    {
      v10 = *a1;
      v5 = a1[1];
    }
    else if ( a2 < a1[2] )
    {
      v10 = a1[1];
      v5 = a1[2];
    }
    else
    {
      v10 = a1[2];
      v5 = -1LL;
    }
  }
  else
  {
    v10 = 0LL;
  }
  sub_180021C00(a2, a1[3], &v13, &v14);
  v11 = v14;
  if ( v10 <= v13 )
    v10 = v13;
  if ( a2 <= v7 && v5 >= v14 )
    v5 = v14;
  result = a5;
  *a3 = v10;
  *a4 = v5;
  if ( result )
    *result = v11;
  return result;
}
