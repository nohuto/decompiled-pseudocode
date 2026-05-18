/*
 * XREFs of sub_1800918E0 @ 0x1800918E0
 * Callers:
 *     sub_1800928C0 @ 0x1800928C0 (sub_1800928C0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180062550 @ 0x180062550 (sub_180062550.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800626B8 @ 0x1800626B8 (sub_1800626B8.c)
 *     sub_180062744 @ 0x180062744 (sub_180062744.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_180075964 @ 0x180075964 (sub_180075964.c)
 *     sub_1800911C8 @ 0x1800911C8 (sub_1800911C8.c)
 *     sub_180092530 @ 0x180092530 (sub_180092530.c)
 *     sub_1800925F0 @ 0x1800925F0 (sub_1800925F0.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800918E0(__int64 a1, __int64 *a2)
{
  unsigned int v4; // r15d
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  char result; // al
  __int64 v8; // rax
  __int64 v9; // [rsp+20h] [rbp-A8h] BYREF
  unsigned int v10[4]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v11[72]; // [rsp+40h] [rbp-88h] BYREF
  char v12; // [rsp+88h] [rbp-40h] BYREF

  sub_180062550(a1, a2);
  v10[0] = sub_18006AB3C(*a2);
  v4 = v10[0];
  sub_1800911C8((__int64 *)(a1 + 128), (__int64)&v9, v10);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 40), a2);
  sub_1800925F0(a1, v11);
  v5 = 0LL;
  v6 = v11;
  do
  {
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*v6 + 16LL))(*v6, a2);
    ++v6;
    ++v5;
  }
  while ( v5 != (&v12 < v11 ? 0 : 9) );
  if ( *(_DWORD *)(a1 + 120) || *(_DWORD *)(a1 + 112) )
    sub_180062744(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_1800626B8(a1, 8) )
      return sub_180092530(a1, 0LL);
    v8 = sub_180062680(a1);
    result = sub_180075964(v8, 5, 8);
    if ( result )
      return sub_180092530(a1, 0LL);
  }
  return result;
}
