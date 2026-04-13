/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180084890
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180084E08 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086774 (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086824 (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180086F2C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180087164 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(CreativeFramework::Actions *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v2)(__int64, PVOID, PVOID, __int64 *); // rsi
  PVOID Reserved1; // rdi
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdi
  int DefaultSignInAccount; // eax
  wil::details::in1diag3 *v19; // rcx
  const WCHAR *v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rax
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  signed __int64 v30; // rax
  bool v31; // si
  __int64 v33; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-A8h] BYREF
  __int64 *v36; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-98h] BYREF
  const WCHAR *v38; // [rsp+58h] [rbp-90h] BYREF
  const WCHAR *v39; // [rsp+60h] [rbp-88h] BYREF
  __int64 v40; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v41[4]; // [rsp+70h] [rbp-78h] BYREF
  HSTRING_HEADER v42; // [rsp+90h] [rbp-58h] BYREF
  HSTRING_HEADER v43; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v41[1] = -2LL;
  LODWORD(v33) = 0;
  v38 = L"https://login.microsoft.com";
  v39 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(v41);
  v37 = 0LL;
  v1 = v41[0];
  v2 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 *))(*(_QWORD *)v41[0] + 96LL);
  v37 = 0LL;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v39)[1].Reserved.Reserved1;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v42, &v38);
  v5 = v2(v1, v4[1].Reserved.Reserved1, Reserved1, &v37);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v5);
LABEL_51:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x63A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v7);
    goto LABEL_52;
  }
  v6 = v37;
  v40 = 0LL;
  LODWORD(v33) = 4;
  v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Credentials::WebAccountProvider *> *>(v37);
  if ( v7 >= 0 )
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 64LL))(v6, &v40);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_51;
  v9 = v40;
  v40 = 0LL;
  v41[2] = v9;
  if ( v9 )
  {
    wil::GetActivationFactory<IInspectable>(&v39);
    v10 = (**(__int64 (__fastcall ***)(const WCHAR *, GUID *, __int64 **))v39)(
            v39,
            &GUID_07650a66_66ea_489d_aa90_0dabc75f3567,
            &v36);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      *(GUID *)&v42.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
      v12 = (*(__int64 (__fastcall **)(__int64 *, __int64, HSTRING_HEADER *))(*v36 + 264))(v36, v9, &v42);
      v13 = retaddr;
      if ( v12 >= 0 )
      {
        v35 = 0LL;
        v14 = *v36;
        v35 = 0LL;
        v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 232))(v36, &v35);
        v16 = retaddr;
        if ( v15 >= 0 )
        {
          v17 = v35;
          v38 = 0LL;
          LODWORD(v33) = 42;
          DefaultSignInAccount = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *>(v35);
          if ( DefaultSignInAccount >= 0 )
            DefaultSignInAccount = (*(__int64 (__fastcall **)(__int64, const WCHAR **))(*(_QWORD *)v17 + 64LL))(
                                     v17,
                                     &v38);
          v19 = retaddr;
          if ( DefaultSignInAccount >= 0 )
          {
            v20 = v38;
            v38 = 0LL;
            v41[3] = v20;
            v34 = 0LL;
            v21 = *(_QWORD *)v20;
            v34 = 0LL;
            v22 = (*(__int64 (__fastcall **)(const WCHAR *, __int64 **))(v21 + 48))(v20, &v34);
            v23 = retaddr;
            if ( v22 >= 0 )
            {
              v24 = v34;
              if ( !v34 )
              {
LABEL_35:
                if ( v24 )
                  (*(void (__fastcall **)(__int64 *))(*v24 + 16))(v24);
                (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 16LL))(v20);
                if ( v35 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                if ( v36 )
                  (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
                if ( v39 )
                  (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v39 + 16LL))(v39);
                goto LABEL_43;
              }
              v33 = 0LL;
              v25 = *v34;
              v33 = 0LL;
              v26 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v25 + 48))(v34, &v33);
              v27 = retaddr;
              if ( v26 >= 0 )
              {
                if ( v33 )
                {
                  *(GUID *)&v43.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
                  v28 = (*(__int64 (__fastcall **)(__int64 *, __int64, HSTRING_HEADER *))(*v36 + 264))(v36, v33, &v43);
                  v29 = retaddr;
                  if ( v28 >= 0 )
                  {
                    v30 = (char *)v42.Reserved.Reserved1 - (char *)v43.Reserved.Reserved1;
                    if ( v42.Reserved.Reserved1 == v43.Reserved.Reserved1 )
                      v30 = *(_QWORD *)&v42.Reserved.Reserved2[8] - *(_QWORD *)&v43.Reserved.Reserved2[8];
                    v31 = v30 == 0;
                    if ( v33 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                    if ( v34 )
                      (*(void (__fastcall **)(__int64 *))(*v34 + 16))(v34);
                    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v20 + 16LL))(v20);
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                    if ( v36 )
                      (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
                    if ( v39 )
                      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v39 + 16LL))(v39);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                    if ( v37 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
                    if ( v41[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
                    return v31;
                  }
LABEL_58:
                  wil::details::in1diag3::Throw_Hr(
                    v29,
                    (void *)0x56,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
                    (const char *)(unsigned int)v28);
                  JUMPOUT(0x180084DFFLL);
                }
                v24 = v34;
                goto LABEL_35;
              }
LABEL_57:
              wil::details::in1diag3::Throw_Hr(
                v27,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
                (const char *)(unsigned int)v26);
              goto LABEL_58;
            }
LABEL_56:
            wil::details::in1diag3::Throw_Hr(
              v23,
              (void *)0x4D,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
              (const char *)(unsigned int)v22);
            goto LABEL_57;
          }
LABEL_55:
          wil::details::in1diag3::Throw_Hr(
            v19,
            (void *)0x63A,
            (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
            (const char *)(unsigned int)DefaultSignInAccount);
          goto LABEL_56;
        }
LABEL_54:
        wil::details::in1diag3::Throw_Hr(
          v16,
          (void *)0x4A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v15);
        goto LABEL_55;
      }
LABEL_53:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x46,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_54;
    }
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v10);
    goto LABEL_53;
  }
LABEL_43:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v41[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
  return 0;
}
