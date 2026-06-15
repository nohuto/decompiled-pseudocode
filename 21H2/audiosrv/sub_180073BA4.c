/*
 * XREFs of sub_180073BA4 @ 0x180073BA4
 * Callers:
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_180072DE0 @ 0x180072DE0 (sub_180072DE0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 *     sub_18013411C @ 0x18013411C (sub_18013411C.c)
 *     sub_180134430 @ 0x180134430 (sub_180134430.c)
 *     sub_180137F48 @ 0x180137F48 (sub_180137F48.c)
 *     sub_180138194 @ 0x180138194 (sub_180138194.c)
 */

__int64 __fastcall sub_180073BA4(__int64 *a1)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  bool v5; // al
  __int64 v6; // rcx
  __int64 **v7; // rdi
  bool v8; // zf
  __int64 v9; // r8
  int v10; // eax
  __int64 *v11; // rcx
  __int64 *v13[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-49h] BYREF
  __int64 v15; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v17[13]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD *v18; // [rsp+B0h] [rbp+37h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]

  v13[0] = a1;
  sub_180047458((__int64 *)v13);
  v14 = 0LL;
  v13[0] = &v14;
  v2 = sub_1800524EC(v13);
  v3 = sub_1800522A8((__int64 (__fastcall ***)(_QWORD, _DWORD *, __int64 *))a1, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = sub_180009DE0((__int64)a1);
    v6 = 0xD83063EA3BC1875LL;
    v7 = (__int64 **)(a1 + 30);
    if ( v5 )
      v6 = 0x19890C35A3BCE075LL;
    v8 = *v7 == 0LL;
    v15 = v6;
    if ( v8 )
    {
      sub_1800CD9A8(v13, &v14);
      v18 = 0LL;
      v13[1] = a1;
      v18 = sub_180072DE0(v17, v13);
      sub_180071C14(v13);
      v10 = sub_18013411C(&v15, v16, v9, v13);
      v11 = 0LL;
      if ( v10 >= 0 )
        v11 = v13[0];
      if ( v7 != v13 )
      {
        sub_180138194(a1 + 30, v11);
        v11 = 0LL;
      }
      if ( v11 )
        sub_180137F48();
      sub_180134430(v16);
    }
    v4 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 2838, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v3);
  }
  sub_180071C14(&v14);
  if ( a1 )
    (*(void (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  return v4;
}
