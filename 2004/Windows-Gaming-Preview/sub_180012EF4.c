/*
 * XREFs of sub_180012EF4 @ 0x180012EF4
 * Callers:
 *     sub_180012A28 @ 0x180012A28 (sub_180012A28.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000BA30 @ 0x18000BA30 (sub_18000BA30.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_180013480 @ 0x180013480 (sub_180013480.c)
 *     sub_1800149E4 @ 0x1800149E4 (sub_1800149E4.c)
 *     sub_180014AD0 @ 0x180014AD0 (sub_180014AD0.c)
 *     sub_1800158A4 @ 0x1800158A4 (sub_1800158A4.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180012EF4(__int64 a1, _QWORD *a2, HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  void *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // edx
  HSTRING v18; // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, void *, _QWORD *); // rcx
  HSTRING v21; // rcx
  __int64 v22; // rcx
  __int64 (__fastcall ***v23)(_QWORD, void *, _QWORD *); // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // r9d
  int v28; // edx
  int v29; // eax
  __int64 (__fastcall ***v30)(_QWORD, void *, _QWORD *); // rbx
  int v31; // eax
  int v32; // r9d
  int v33; // edx
  HSTRING v34; // rax
  __int64 (__fastcall ***v35)(_QWORD, void *, _QWORD *); // rcx
  __int64 v36; // rcx
  __int64 (__fastcall ***v37)(_QWORD, void *, _QWORD *); // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  HSTRING v41; // [rsp+20h] [rbp-60h] BYREF
  __int64 v42; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  __int64 v44; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, void *, _QWORD *); // [rsp+40h] [rbp-40h] BYREF
  __int64 v46; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]

  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    sub_180011F90(v5);
    JUMPOUT(0x1800133F5LL);
  }
  v44 = 0LL;
  v43 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*a2 + 96LL))(
         *a2,
         &v43);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_180003268(
      retaddr,
      328,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v6);
LABEL_28:
    v20 = v43;
    if ( !v43 )
      goto LABEL_67;
    v43 = 0LL;
    goto LABEL_66;
  }
  v42 = 0LL;
  v8 = (**v43)(v43, &unk_180050CA8, &v42);
  v7 = v8;
  if ( v8 < 0 )
  {
    sub_180003268(
      retaddr,
      331,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v8);
LABEL_26:
    v19 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_28;
  }
  v9 = 0LL;
  v46 = 0LL;
  v7 = 0;
  v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v12 = 0LL;
  if ( !v10 || (v12 = sub_1800149E4(v10)) == 0 )
    v7 = -2147024882;
  if ( v7 >= 0 )
  {
    v9 = (volatile signed __int64 *)v12;
    v46 = v12;
    v12 = 0LL;
  }
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v7 < 0 )
  {
    v13 = v7;
    v14 = 334;
LABEL_17:
    sub_180003268(
      retaddr,
      v14,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v13);
LABEL_24:
    if ( v9 )
      sub_18000BA30(v9);
    goto LABEL_26;
  }
  LOBYTE(v11) = 1;
  v15 = sub_180014AD0(v9, 0LL, string, v11);
  v7 = v15;
  if ( v15 < 0 )
  {
    v13 = v15;
    v14 = 336;
    goto LABEL_17;
  }
  v41 = 0LL;
  v16 = sub_180013480(v9, &xmmword_180051730, &v41);
  v7 = v16;
  if ( v16 < 0 )
  {
    v17 = 339;
    goto LABEL_22;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v42 + 48LL))(v42, v41, &v44);
  v7 = v16;
  if ( v16 < 0 )
  {
    v17 = 345;
LABEL_22:
    sub_180003268(
      retaddr,
      v17,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v16);
    v18 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v18 + 16LL))(v18);
    }
    goto LABEL_24;
  }
  v21 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v9 )
    sub_18000BA30(v9);
  v22 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v23)[2])(v23);
  }
  v24 = sub_1800158A4(v44);
  v7 = v24;
  if ( v24 < 0 )
  {
    sub_180003268(
      retaddr,
      353,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v24);
    goto LABEL_67;
  }
  v45 = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, _QWORD *)))(*(_QWORD *)v44 + 64LL))(
          v44,
          &v45);
  v7 = v25;
  if ( v25 >= 0 )
  {
    v42 = 0LL;
    v26 = (*v45)[6](v45, string, &v42);
    v7 = v26;
    if ( v26 >= 0 )
    {
      if ( v42 )
      {
        v43 = 0LL;
        v29 = (**(__int64 (__fastcall ***)(__int64, void *, _QWORD))v42)(v42, &unk_180050A60, &v43);
        v7 = v29;
        if ( v29 >= 0 )
        {
          v41 = 0LL;
          v30 = v43;
          WindowsDeleteString(0LL);
          v41 = 0LL;
          v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *), HSTRING *))(*v30)[19])(
                  v30,
                  &v41);
          v7 = v31;
          if ( v31 >= 0 )
          {
            if ( v41 && !WindowsIsStringEmpty(v41) )
            {
              v34 = v41;
              v41 = 0LL;
              *a3 = v34;
              WindowsDeleteString(0LL);
              v41 = 0LL;
              v35 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v35)[2])(v35);
              }
              v36 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              v7 = 0;
              goto LABEL_64;
            }
            v7 = -2147467259;
            v32 = -2147467259;
            v33 = 373;
          }
          else
          {
            v32 = v31;
            v33 = 371;
          }
          sub_180003268(
            retaddr,
            v33,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            v32);
          WindowsDeleteString(v41);
          v41 = 0LL;
        }
        else
        {
          sub_180003268(
            retaddr,
            368,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            v29);
        }
        v37 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v37)[2])(v37);
        }
        goto LABEL_62;
      }
      v7 = -2147467259;
      v27 = -2147467259;
      v28 = 364;
    }
    else
    {
      v27 = v26;
      v28 = 360;
    }
    sub_180003268(
      retaddr,
      v28,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      v27);
LABEL_62:
    v38 = v42;
    if ( v42 )
    {
      v42 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    goto LABEL_64;
  }
  sub_180003268(
    retaddr,
    356,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    v25);
LABEL_64:
  v20 = v45;
  if ( !v45 )
    goto LABEL_67;
  v45 = 0LL;
LABEL_66:
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v20)[2])(v20);
LABEL_67:
  v39 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  return (unsigned int)v7;
}
