/*
 * XREFs of sub_180113DA4 @ 0x180113DA4
 * Callers:
 *     sub_180113F9C @ 0x180113F9C (sub_180113F9C.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180113DA4(void (__fastcall ***a1)(_QWORD, __int64, __int64 *), unsigned int a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-40h] BYREF
  void (__fastcall ***v9)(_QWORD, __int64, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h] BYREF
  char v11[32]; // [rsp+48h] [rbp-28h] BYREF

  v9 = 0LL;
  v8 = 0;
  v10 = 0LL;
  v5 = sub_18000E660(v11, 13LL, (const char *)L"Level:%x", a2);
  if ( v5 < 0 )
    goto LABEL_9;
  v6 = (__int64)v9;
  if ( v9 != a1 )
  {
    sub_18002BB14((__int64 *)&v9, a1, (__int64)&unk_18015B040);
    v6 = (__int64)v9;
  }
  if ( !v6 )
    goto LABEL_5;
  v8 = 8;
  v5 = (*(__int64 (__fastcall **)(__int64, char *, __int64, __int64 *, int *))(*(_QWORD *)v6 + 120LL))(
         v6,
         v11,
         11LL,
         &v10,
         &v8);
  if ( v5 < 0 )
  {
LABEL_9:
    v6 = (__int64)v9;
  }
  else
  {
    v6 = (__int64)v9;
    if ( v8 != 8 )
    {
LABEL_5:
      v5 = -2147024809;
      goto LABEL_10;
    }
    *a3 = v10;
  }
LABEL_10:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v5;
}
