/*
 * XREFs of sub_180118D90 @ 0x180118D90
 * Callers:
 *     sub_18011B754 @ 0x18011B754 (sub_18011B754.c)
 * Callees:
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180118CE0 @ 0x180118CE0 (sub_180118CE0.c)
 *     sub_18011A980 @ 0x18011A980 (sub_18011A980.c)
 *     sub_18011B97C @ 0x18011B97C (sub_18011B97C.c)
 *     sub_18011BAA8 @ 0x18011BAA8 (sub_18011BAA8.c)
 *     sub_18011CB50 @ 0x18011CB50 (sub_18011CB50.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall sub_180118D90(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  char **v6; // rdi
  char *v7; // rbx
  const void *v8; // rdx
  char **v9; // rdx
  __int64 v10; // rcx
  char **result; // rax
  char *v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rdi
  _BYTE v16[16]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  char **v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  _QWORD v20[23]; // [rsp+50h] [rbp-B8h] BYREF

  v6 = *(char ***)a1;
  v7 = **(char ***)a1;
  while ( v7 != (char *)v6 )
  {
    if ( a2 == a3 )
    {
      result = *(char ***)a1;
      if ( v7 == **(char ***)a1 && v6 == result )
        return (char **)sub_18011BAA8(a1);
      while ( v7 != (char *)v6 )
      {
        result = (char **)sub_18011B97C(a1, v16, v7);
        v7 = *result;
      }
      return result;
    }
    if ( v7 + 16 != (char *)(a2 + 2) )
    {
      v8 = a2 + 2;
      if ( a2[5] >= 8uLL )
        v8 = (const void *)a2[2];
      std::wstring::assign(v7 + 16, v8, a2[4]);
    }
    sub_18011A980(v7 + 48, a2 + 6);
    v7 = *(char **)v7;
    a2 = (_QWORD *)*a2;
  }
  v17 = a1;
  v18 = (char **)v20;
  v19 = 0LL;
  sub_180118CE0(&v17, a2, a3);
  v9 = *(char ***)a1;
  v10 = v19;
  result = v18;
  if ( v19 )
  {
    v19 = 0LL;
    *(_QWORD *)(a1 + 8) += v10;
    *result = (char *)v9;
    v12 = v9[1];
    v9[1] = (char *)v18;
    v13 = v20[0];
    *(_QWORD *)v12 = v20[0];
    *(_QWORD *)(v13 + 8) = v12;
    result = (char **)v20;
    v18 = (char **)v20;
    v10 = v19;
  }
  if ( v10 )
  {
    *result = 0LL;
    v14 = (_QWORD *)v20[0];
    while ( v14 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      sub_18011CB50(v15 + 6);
      unknown_libname_101(v15 + 2);
      result = (char **)j_j__o_free(v15);
    }
  }
  return result;
}
