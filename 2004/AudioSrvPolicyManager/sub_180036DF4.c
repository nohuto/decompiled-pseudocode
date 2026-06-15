/*
 * XREFs of sub_180036DF4 @ 0x180036DF4
 * Callers:
 *     sub_180038278 @ 0x180038278 (sub_180038278.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180003B7C @ 0x180003B7C (sub_180003B7C.c)
 *     sub_18002B300 @ 0x18002B300 (sub_18002B300.c)
 *     sub_18002B868 @ 0x18002B868 (sub_18002B868.c)
 *     sub_18002B8A0 @ 0x18002B8A0 (sub_18002B8A0.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180036DF4(void **a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  void **v8; // rax
  void *v9; // rbx
  unsigned int v10; // edi
  __int64 v11; // rdx
  void **v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  LPVOID v17; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID v19; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v20; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[2]; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v22[256]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 retaddr; // [rsp+2A0h] [rbp+198h]

  v21[1] = -2LL;
  v19 = 0LL;
  v22[0] = 0;
  v20 = 0LL;
  v17 = &v20;
  v21[0] = 256LL;
  pv = v22;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    sub_180003B7C();
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *, _QWORD *, LPVOID *))(*(_QWORD *)v4 + 32LL))(v4, &pv, v21, &v17);
  if ( v5 < 0 )
  {
    v6 = *(_QWORD *)(a2 + 112);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 24LL))(*(_QWORD *)(a2 + 112));
    return (unsigned int)v5;
  }
  if ( (unsigned __int64)v20 > 0x100 )
  {
    v12 = (void **)sub_18002B8A0(&pv, 0LL, (unsigned __int64)v20 - 1);
    sub_18002B300(&v19, v12);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v19;
    v10 = v19 == 0LL ? 0x8007000E : 0;
    if ( !v19 )
    {
      sub_180003AB0(retaddr, 116, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h", v10);
LABEL_11:
      v11 = *(_QWORD *)(a2 + 112);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 24LL))(*(_QWORD *)(a2 + 112));
      return v10;
    }
    v17 = 0LL;
    pv = &v17;
    v21[0] = v20;
    v13 = *(_QWORD *)(a2 + 112);
    if ( !v13 )
      sub_180003B7C();
    v14 = (*(__int64 (__fastcall **)(__int64, LPVOID *, _QWORD *, LPVOID *))(*(_QWORD *)v13 + 32LL))(
            v13,
            &v19,
            v21,
            &pv);
    v10 = v14;
    if ( v14 < 0 )
    {
      sub_180003AB0(retaddr, 119, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h", v14);
      CoTaskMemFree(v9);
      v15 = *(_QWORD *)(a2 + 112);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
      return v10;
    }
    if ( v20 != v17 )
    {
      sub_18002B868(retaddr, 122, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h");
      __debugbreak();
    }
  }
  else
  {
    v8 = (void **)sub_18002B8A0(&pv, (char *)v22, (unsigned __int64)v20 - 1);
    sub_18002B300(&v19, v8);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v19;
    v10 = v19 == 0LL ? 0x8007000E : 0;
    if ( !v19 )
    {
      sub_180003AB0(retaddr, 110, (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h", v10);
      goto LABEL_11;
    }
  }
  v17 = v9;
  sub_18002B300(a1, &v17);
  if ( v17 )
    CoTaskMemFree(v17);
  v16 = *(_QWORD *)(a2 + 112);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
  return 0LL;
}
