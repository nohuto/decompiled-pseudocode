/*
 * XREFs of sub_180069474 @ 0x180069474
 * Callers:
 *     sub_180069518 @ 0x180069518 (sub_180069518.c)
 * Callees:
 *     sub_18004600C @ 0x18004600C (sub_18004600C.c)
 *     sub_1800693F8 @ 0x1800693F8 (sub_1800693F8.c)
 */

__int64 **__fastcall sub_180069474(__int64 ***a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *j; // rbx
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 i; // rax
  __int64 v11; // rcx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  j = a3;
  if ( a3 == **a1 && a4 == (__int64 *)*a1 )
  {
    sub_1800693F8(a1);
    *a2 = **a1;
  }
  else
  {
    while ( j != a4 )
    {
      v8 = j[2];
      v9 = j;
      if ( *(_BYTE *)(v8 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (__int64 *)i;
        j = (__int64 *)i;
      }
      else
      {
        v11 = *(_QWORD *)v8;
        for ( j = (__int64 *)j[2]; !*(_BYTE *)(v11 + 25); v11 = *(_QWORD *)v11 )
          j = (__int64 *)v11;
      }
      sub_18004600C(a1, v13, v9);
    }
    *a2 = j;
  }
  return a2;
}
