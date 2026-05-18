/*
 * XREFs of sub_1800971B0 @ 0x1800971B0
 * Callers:
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_18007B234 @ 0x18007B234 (sub_18007B234.c)
 *     sub_180096A98 @ 0x180096A98 (sub_180096A98.c)
 *     sub_180097E00 @ 0x180097E00 (sub_180097E00.c)
 *     sub_180097EC0 @ 0x180097EC0 (sub_180097EC0.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800971B0(__int64 a1, __int64 *a2)
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

  sub_180067E20(a1, a2);
  v10[0] = sub_18007040C(*a2);
  v4 = v10[0];
  sub_180096A98((__int64 *)(a1 + 128), (__int64)&v9, v10);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v9 + 40), a2);
  sub_180097EC0(a1, v11);
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
    sub_180068014(a1, v4);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !result && *(_DWORD *)(a1 + 304) != 2 )
  {
    if ( sub_180067F88(a1, 8) )
      return sub_180097E00(a1, 0LL);
    v8 = sub_180067F50(a1);
    result = sub_18007B234(v8, 5, 8);
    if ( result )
      return sub_180097E00(a1, 0LL);
  }
  return result;
}
