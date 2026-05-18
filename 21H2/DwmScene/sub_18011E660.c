/*
 * XREFs of sub_18011E660 @ 0x18011E660
 * Callers:
 *     sub_180121024 @ 0x180121024 (sub_180121024.c)
 * Callees:
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011E5B0 @ 0x18011E5B0 (sub_18011E5B0.c)
 *     sub_180120250 @ 0x180120250 (sub_180120250.c)
 *     sub_18012124C @ 0x18012124C (sub_18012124C.c)
 *     sub_180121378 @ 0x180121378 (sub_180121378.c)
 *     sub_180122420 @ 0x180122420 (sub_180122420.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
char **__fastcall sub_18011E660(__int64 a1, _QWORD *a2, _QWORD *a3)
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
        return (char **)sub_180121378(a1);
      while ( v7 != (char *)v6 )
      {
        result = (char **)sub_18012124C(a1, v16, v7);
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
    sub_180120250(v7 + 48, a2 + 6);
    v7 = *(char **)v7;
    a2 = (_QWORD *)*a2;
  }
  v17 = a1;
  v18 = (char **)v20;
  v19 = 0LL;
  sub_18011E5B0(&v17, a2, a3);
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
      sub_180122420(v15 + 6);
      unknown_libname_103(v15 + 2);
      result = (char **)j_j__o_free(v15);
    }
  }
  return result;
}
