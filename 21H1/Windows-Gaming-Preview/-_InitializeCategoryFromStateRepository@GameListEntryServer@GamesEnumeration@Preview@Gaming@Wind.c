/*
 * XREFs of ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180027C58
 * Callers:
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180028308 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180012208 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025E38 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     atexit @ 0x1800448C8 (atexit.c)
 *     _Init_thread_footer @ 0x180044BB0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180044C18 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int ActivationFactory; // eax
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  HRESULT v13; // eax
  int v14; // eax
  int v15; // eax
  HRESULT v16; // eax
  int v17; // eax
  __int64 v18; // rdx
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
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v45 = 0LL;
  v2 = *((_QWORD *)this + 32);
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
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    }
    else
    {
      ActivationFactory = RoGetActivationFactory(string, &GUID_d81e96f1_a89c_417e_9335_59531026309d, &v39);
      v5 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x135,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)ActivationFactory);
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
        v9 = (unsigned int)v8;
        v10 = 314LL;
LABEL_61:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v9);
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
        v9 = 2147549183LL;
        v10 = 317LL;
        goto LABEL_61;
      }
      v43 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v40 + 48LL))(v40, 0LL, &v43);
      v5 = v11;
      if ( v11 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x142,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v11);
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
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x145,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v12);
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
        v14 = RoGetActivationFactory(string, &GUID_84103ccb_2fd7_4d6c_962e_5d8582b4c720, &v38);
        v5 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x14E,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v14);
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
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x151,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v15);
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
          v17 = RoGetActivationFactory(string, &GUID_f7a88ec3_6f33_46bf_83b8_78aaf94ac396, &v37);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 342LL;
            goto LABEL_29;
          }
          v19 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
          if ( dword_18005AF8C > *(_DWORD *)(v19 + 4) )
          {
            Init_thread_header(&dword_18005AF8C);
            if ( dword_18005AF8C == -1 )
            {
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &stru_18005AF90,
                (const WCHAR **)&off_18004DE68);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__appCategoryString__);
              Init_thread_footer(&dword_18005AF8C);
            }
          }
          if ( dword_18005AFB0 > *(_DWORD *)(v19 + 4) )
          {
            Init_thread_header(&dword_18005AFB0);
            if ( dword_18005AFB0 == -1 )
            {
              Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                &stru_18005AFB8,
                (const WCHAR **)off_18004DE60);
              atexit(Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_5_::_dynamic_atexit_destructor_for__gameString__);
              Init_thread_footer(&dword_18005AFB0);
            }
          }
          v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v37 + 272LL))(
                  v37,
                  v41,
                  v42,
                  qword_18005AFA8,
                  *(_QWORD *)&qword_18005AFD0,
                  v36);
          v5 = v17;
          if ( v17 < 0 )
          {
            v18 = 353LL;
LABEL_29:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v17);
            v20 = v37;
            if ( v37 )
            {
              v37 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
            }
            goto LABEL_31;
          }
          if ( v36[0] )
            *((_DWORD *)this + 36) = 1;
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
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
        __debugbreak();
      }
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_71;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12C,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v4);
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
