/*
 * XREFs of sub_18003E160 @ 0x18003E160
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_18003E47C @ 0x18003E47C (sub_18003E47C.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003E160(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  int v12; // edx
  int v13; // eax
  __int64 v14; // rdi
  HRESULT v15; // eax
  HSTRING v16; // rbx
  int ActivationFactory; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v25; // [rsp+38h] [rbp-29h] BYREF
  __int64 v26; // [rsp+40h] [rbp-21h] BYREF
  __int64 v27; // [rsp+48h] [rbp-19h] BYREF
  __int64 v28; // [rsp+50h] [rbp-11h] BYREF
  __int64 v29; // [rsp+58h] [rbp-9h] BYREF
  __int64 v30; // [rsp+60h] [rbp-1h]
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+7h] BYREF
  HSTRING string; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+5Fh]

  v25 = a2;
  v30 = a2;
  if ( !a3 )
  {
    v4 = -2147467261;
    sub_180003268(
      retaddr,
      56,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      -2147467261);
    return (unsigned int)v4;
  }
  v5 = *(_QWORD *)(a1 + 64);
  v25 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 64LL))(v5, &v25);
  v4 = v6;
  if ( v6 >= 0 )
  {
    if ( !v25 )
    {
      v4 = -2147467261;
      v8 = 64;
      v7 = -2147467261;
      goto LABEL_7;
    }
    v29 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v29);
    v4 = v9;
    if ( v9 < 0 )
    {
      v11 = v9;
      v12 = 67;
LABEL_12:
      sub_180003268(retaddr, v12, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp", v11);
LABEL_33:
      v22 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      goto LABEL_35;
    }
    if ( !v29 )
    {
      v4 = -2147467261;
      v12 = 68;
      v11 = -2147467261;
      goto LABEL_12;
    }
    v28 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v29 + 72LL))(v29, v10, v30, &v28);
    v4 = v13;
    if ( v13 < 0 )
    {
      sub_180003268(retaddr, 74, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp", v13);
LABEL_31:
      v21 = v28;
      if ( v28 )
      {
        v28 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_33;
    }
    v14 = v28;
    v27 = 0LL;
    v4 = sub_18003E47C(v28);
    if ( v4 >= 0 )
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 64LL))(v14, &v27);
    if ( v4 < 0 )
    {
      sub_180003268(retaddr, 77, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp", v4);
LABEL_29:
      v20 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_31;
    }
    v26 = 0LL;
    string = 0LL;
    v15 = WindowsCreateStringReference(
            L"Windows.Storage.Streams.RandomAccessStreamReference",
            0x33u,
            &hstringHeader,
            &string);
    if ( v15 < 0 )
    {
      sub_180011F90(v15);
      JUMPOUT(0x18003E474LL);
    }
    v16 = string;
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    ActivationFactory = RoGetActivationFactory(v16, &unk_180050E30, &v26);
    v4 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      ActivationFactory = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, v27, a3);
      v4 = ActivationFactory;
      if ( ActivationFactory >= 0 )
        goto LABEL_27;
      v18 = 88;
    }
    else
    {
      v18 = 86;
    }
    sub_180003268(
      retaddr,
      v18,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      ActivationFactory);
LABEL_27:
    v19 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_29;
  }
  v7 = v6;
  v8 = 63;
LABEL_7:
  sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp", v7);
LABEL_35:
  v23 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  return (unsigned int)v4;
}
