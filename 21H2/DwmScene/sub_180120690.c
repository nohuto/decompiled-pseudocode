/*
 * XREFs of sub_180120690 @ 0x180120690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800713FC @ 0x1800713FC (sub_1800713FC.c)
 *     sub_18011F530 @ 0x18011F530 (sub_18011F530.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180120690(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *j; // rax
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-28h]

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD *)a1[18];
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v10 = 0LL;
    v11 = 0LL;
    (*(void (__fastcall **)(_QWORD *, __int128 *, _QWORD *))(*a1 + 200LL))(a1, &v10, v5 + 4);
    sub_18011F530((_LocaleUpdate *)a2, *(char **)(a2 + 8), (char *)v10, *((char **)&v10 + 1));
    sub_1800713FC((__int64 **)&v10);
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  return a2;
}
