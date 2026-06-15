/*
 * XREFs of ?getZName@UnDecorator@@CA?AVDName@@_N0@Z @ 0x1800386EC
 * Callers:
 *     sub_180073444 @ 0x180073444 (sub_180073444.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_180047458 @ 0x180047458 (sub_180047458.c)
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006FB08 @ 0x18006FB08 (sub_18006FB08.c)
 *     sub_180072864 @ 0x180072864 (sub_180072864.c)
 *     sub_1800728BC @ 0x1800728BC (sub_1800728BC.c)
 *     sub_180072914 @ 0x180072914 (sub_180072914.c)
 *     sub_180072E14 @ 0x180072E14 (sub_180072E14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall UnDecorator::getZName(__int64 a1)
{
  HSTRING v2; // rbx
  __int64 *v3; // rcx
  int ActivationFactory; // r15d
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 *v16; // rsi
  __int64 *v18; // [rsp+20h] [rbp-39h] BYREF
  __int64 v19; // [rsp+28h] [rbp-31h] BYREF
  __int64 v20; // [rsp+30h] [rbp-29h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-11h] BYREF
  _QWORD v24[2]; // [rsp+50h] [rbp-9h] BYREF
  HSTRING string; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF

  v20 = 0LL;
  v19 = a1;
  sub_180047458(&v19);
  if ( WindowsCreateStringReference(L"Windows.ApplicationModel.PackageCatalog", 0x27u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v2 = string;
  sub_1800461B8(&v20);
  ActivationFactory = RoGetActivationFactory(v2, &unk_18015BE20, &v20);
  if ( ActivationFactory >= 0 )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v24[1] = a1 + 56;
    v6 = v20;
    v7 = (_QWORD *)(a1 + 48);
    v8 = *(_QWORD *)(a1 + 48);
    if ( v8 )
    {
      *v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, a1 + 48);
    if ( ActivationFactory < 0 )
      goto LABEL_23;
    v18 = (__int64 *)a1;
    sub_180047458(&v18);
    sub_180072864(v24, &v18);
    sub_180072E14(&v18);
    v9 = sub_18006FB08(v22, &v19);
    sub_1800728BC(&v21, v9);
    sub_180072E14(v22);
    v10 = sub_18006FB08(v23, &v19);
    sub_180072914(&v18, v10);
    sub_180072E14(v23);
    v11 = v24[0];
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v7 + 64LL))(
                          *v7,
                          v24[0],
                          a1 + 144);
    if ( ActivationFactory < 0 )
    {
      if ( v18 )
        (*(void (__fastcall **)(__int64 *))(*v18 + 16))(v18);
      v3 = v21;
      if ( !v21 )
        goto LABEL_21;
      v12 = *v21;
      goto LABEL_20;
    }
    v13 = v21;
    ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)*v7 + 96LL))(
                          *v7,
                          v21,
                          a1 + 152);
    if ( ActivationFactory >= 0 )
    {
      v15 = a1 + 160;
      v16 = v18;
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64))(*(_QWORD *)*v7 + 80LL))(*v7, v18, v15);
      if ( v16 )
      {
        v14 = *v16;
        goto LABEL_17;
      }
    }
    else
    {
      v3 = v18;
      if ( v18 )
      {
        v14 = *v18;
LABEL_17:
        (*(void (**)(void))(v14 + 16))();
      }
    }
    if ( !v13 )
      goto LABEL_21;
    v12 = *v13;
LABEL_20:
    (*(void (**)(void))(v12 + 16))();
LABEL_21:
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_23:
    if ( v5 )
      LeaveCriticalSection(v5);
  }
  sub_18005F1A8(v3, "RegAppDepNotification result", (unsigned int)ActivationFactory);
  sub_180047278(&v19);
  sub_1800461B8(&v20);
  return (unsigned int)ActivationFactory;
}
