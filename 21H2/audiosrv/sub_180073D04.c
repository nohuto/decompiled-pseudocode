/*
 * XREFs of sub_180073D04 @ 0x180073D04
 * Callers:
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 * Callees:
 *     sub_180009DE0 @ 0x180009DE0 (sub_180009DE0.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800522A8 @ 0x1800522A8 (sub_1800522A8.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_18007296C @ 0x18007296C (sub_18007296C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_1800CD9A8 @ 0x1800CD9A8 (sub_1800CD9A8.c)
 *     sub_1800EF77C @ 0x1800EF77C (sub_1800EF77C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180073D04(__int64 a1)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // esi
  _QWORD *v5; // r14
  __int64 *v6; // rcx
  int ActivationFactory; // eax
  int v8; // edx
  __int64 *v9; // rbx
  __int64 v10; // rbx
  int v11; // eax
  __int64 *v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h]

  if ( !sub_180009DE0(a1) )
    return 0LL;
  v15 = a1;
  sub_180047458(&v15);
  v14 = 0LL;
  v13 = &v14;
  v2 = sub_1800524EC(&v13);
  v3 = sub_1800522A8((__int64 (__fastcall ***)(_QWORD, _DWORD *, __int64 *))a1, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (_QWORD *)(a1 + 248);
    if ( !*(_QWORD *)(a1 + 248) )
    {
      v13 = 0LL;
      v18 = 0LL;
      sub_1800EF77C(&hstringHeader, L"Windows.System.User");
      v6 = v13;
      v13 = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
      ActivationFactory = RoGetActivationFactory(v18, &unk_180171D98, &v13);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 2898;
LABEL_11:
        sub_18004BD84(
          (int)retaddr,
          v8,
          (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
          ActivationFactory);
LABEL_15:
        sub_18000F708((__int64 *)&v13);
        goto LABEL_16;
      }
      v9 = v13;
      sub_1800CB144(a1 + 248);
      ActivationFactory = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v9 + 48))(v9, a1 + 248);
      v4 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v8 = 2899;
        goto LABEL_11;
      }
      sub_1800CD9A8(&hstringHeader, &v14);
      *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = a1;
      sub_18007296C(&v16, (__int64)&hstringHeader);
      sub_180071C14(&hstringHeader);
      v10 = v16;
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v5 + 72LL))(*v5, v16, a1 + 256);
      v4 = v11;
      if ( v11 < 0 )
      {
        sub_18004BD84((int)retaddr, 2924, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v11);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_15;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 56LL))(*v5);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      sub_18000F708((__int64 *)&v13);
    }
    sub_180071C14(&v14);
    if ( a1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    return 0LL;
  }
  sub_18004BD84((int)retaddr, 2892, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v3);
LABEL_16:
  sub_180071C14(&v14);
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
