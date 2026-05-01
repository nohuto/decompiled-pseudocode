/*
 * XREFs of ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x180027A18
 * Callers:
 *     sub_1800280C8 @ 0x1800280C8 (sub_1800280C8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_180025CF8 @ 0x180025CF8 (sub_180025CF8.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     atexit @ 0x180044798 (atexit.c)
 *     _Init_thread_footer @ 0x180044A80 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180044AE8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::numpunct<unsigned short>::_Init(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int ActivationFactory; // eax
  int v8; // eax
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  int v17; // eax
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _BYTE v36[8]; // [rsp+40h] [rbp-39h] BYREF
  __int64 v37; // [rsp+48h] [rbp-31h] BYREF
  __int64 v38; // [rsp+50h] [rbp-29h] BYREF
  __int64 v39; // [rsp+58h] [rbp-21h] BYREF
  __int64 v40; // [rsp+60h] [rbp-19h] BYREF
  __int64 v41; // [rsp+68h] [rbp-11h] BYREF
  __int64 v42; // [rsp+70h] [rbp-9h] BYREF
  __int64 v43; // [rsp+78h] [rbp-1h] BYREF
  HSTRING v44; // [rsp+80h] [rbp+7h] BYREF
  __int64 v45; // [rsp+88h] [rbp+Fh] BYREF
  int v46; // [rsp+90h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+B0h] [rbp+37h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  v45 = 0LL;
  v2 = *(_QWORD *)(a1 + 256);
  if ( !v2 )
    goto LABEL_56;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 104LL))(v2, &v45) < 0 )
    goto LABEL_56;
  v3 = v45;
  if ( !v45 )
    goto LABEL_56;
  v44 = 0LL;
  WindowsDeleteString(0LL);
  v44 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v3 + 56LL))(v3, &v44);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v39 = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.Application", 0x2Cu, &hstringHeader, &string);
    if ( v6 < 0 )
    {
      sub_180011F90(v6);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &unk_180050A40, &v39);
      v5 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        sub_180003268(
          retaddr,
          309,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          ActivationFactory);
LABEL_64:
        v35 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        goto LABEL_66;
      }
      v40 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v39 + 264LL))(v39, v44, &v40);
      v5 = v8;
      if ( v8 < 0 )
      {
        v9 = v8;
        v10 = 314;
LABEL_61:
        sub_180003268(retaddr, v10, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v9);
LABEL_62:
        v34 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        goto LABEL_64;
      }
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v40 + 56LL))(v40, &v46) < 0 || !v46 )
      {
        v5 = -2147418113;
        v9 = -2147418113;
        v10 = 317;
        goto LABEL_61;
      }
      v43 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v40 + 48LL))(v40, 0LL, &v43);
      v5 = v11;
      if ( v11 < 0 )
      {
        sub_180003268(retaddr, 322, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v11);
LABEL_37:
        v24 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        }
        goto LABEL_62;
      }
      v42 = 0LL;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 96LL))(v43, &v42);
      v5 = v12;
      if ( v12 < 0 )
      {
        sub_180003268(retaddr, 325, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v12);
LABEL_35:
        v23 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        }
        goto LABEL_37;
      }
      v38 = 0LL;
      string = 0LL;
      v13 = WindowsCreateStringReference(L"Windows.Internal.StateRepository.User", 0x25u, &hstringHeader, &string);
      if ( v13 >= 0 )
      {
        v14 = RoGetActivationFactory(string, &unk_180050988, &v38);
        v5 = v14;
        if ( v14 < 0 )
        {
          sub_180003268(retaddr, 334, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v14);
LABEL_33:
          v22 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
          }
          goto LABEL_35;
        }
        v41 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 112LL))(v38, &v41);
        v5 = v15;
        if ( v15 < 0 )
        {
          sub_180003268(retaddr, 337, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v15);
LABEL_31:
          v21 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          goto LABEL_33;
        }
        v37 = 0LL;
        string = 0LL;
        v16 = WindowsCreateStringReference(
                L"Windows.Internal.StateRepository.PackagePolicy",
                0x2Eu,
                &hstringHeader,
                &string);
        if ( v16 >= 0 )
        {
          v17 = RoGetActivationFactory(string, &unk_180050C10, &v37);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 342;
            goto LABEL_29;
          }
          v19 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
          if ( dword_18005AF8C > *(_DWORD *)(v19 + 4) )
          {
            Init_thread_header(&dword_18005AF8C);
            if ( dword_18005AF8C == -1 )
            {
              sub_180025CF8(&stru_18005AF90, (const WCHAR **)&off_18004DE68);
              atexit(sub_180047530);
              Init_thread_footer(&dword_18005AF8C);
            }
          }
          if ( dword_18005AFB0 > *(_DWORD *)(v19 + 4) )
          {
            Init_thread_header(&dword_18005AFB0);
            if ( dword_18005AFB0 == -1 )
            {
              sub_180025CF8(&::hstringHeader, (const WCHAR **)off_18004DE60);
              atexit(sub_180047520);
              Init_thread_footer(&dword_18005AFB0);
            }
          }
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, _BYTE *))(*(_QWORD *)v37 + 272LL))(
                  v37,
                  v41,
                  v42,
                  qword_18005AFA8,
                  qword_18005AFD0,
                  v36);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 353;
LABEL_29:
            sub_180003268(
              retaddr,
              v18,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v17);
            v20 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
            goto LABEL_31;
          }
          if ( v36[0] )
            *(_DWORD *)(a1 + 144) = 1;
          v25 = v37;
          if ( v37 )
          {
            v37 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
          v26 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v27 = v38;
          if ( v38 )
          {
            v38 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
          v28 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          }
          v29 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          v30 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          }
          v31 = v39;
          if ( v39 )
          {
            v39 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          WindowsDeleteString(v44);
LABEL_56:
          v5 = 0;
          goto LABEL_57;
        }
LABEL_71:
        sub_180011F90(v16);
        __debugbreak();
      }
    }
    sub_180011F90(v13);
    goto LABEL_71;
  }
  sub_180003268(retaddr, 300, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v4);
LABEL_66:
  WindowsDeleteString(v44);
LABEL_57:
  v32 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return v5;
}
