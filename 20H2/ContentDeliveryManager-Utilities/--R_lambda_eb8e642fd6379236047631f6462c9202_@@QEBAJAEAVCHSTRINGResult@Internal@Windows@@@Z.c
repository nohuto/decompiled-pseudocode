/*
 * XREFs of ??R_lambda_eb8e642fd6379236047631f6462c9202_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x180010CCC
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_eb8e642fd6379236047631f6462c9202_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCHSTRINGResult@23@@Z @ 0x18001C020 (-Run@-$COperationLambdaVar@$0A@V_lambda_eb8e642fd6379236047631f6462c9202_@@VCHSTRINGResult@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x180019B84 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18001F488 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Sec.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall _lambda_eb8e642fd6379236047631f6462c9202_::operator()(__int64 a1, __int64 a2)
{
  int v4; // r14d
  HRESULT v5; // eax
  int ActivationFactory; // eax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64 **); // rdi
  unsigned int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 (__fastcall **v18)(__int64, GUID *, __int64 *); // rax
  int v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rdi
  int v22; // eax
  const WCHAR *StringRawBuffer; // rax
  HRESULT v24; // eax
  int v25; // eax
  HRESULT v26; // eax
  int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, _QWORD, __int64, _DWORD, __int64 *); // rdi
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rax
  int v35; // eax
  __int64 *v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rax
  int v39; // eax
  HSTRING v40; // rdi
  HSTRING *v41; // rbx
  __int64 v43; // rdx
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // r9
  __int64 v48; // rdx
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  HSTRING v53; // rdi
  HSTRING *v54; // rbx
  __int64 v55; // rdx
  unsigned __int64 v56; // r9
  __int64 *v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING v59; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v60; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v63; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v64; // [rsp+80h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-80h] BYREF
  __int64 v66; // [rsp+90h] [rbp-78h] BYREF
  __int64 v67; // [rsp+98h] [rbp-70h] BYREF
  __int64 v68; // [rsp+A0h] [rbp-68h] BYREF
  __int64 (__fastcall ***v69)(__int64, GUID *, __int64 *); // [rsp+A8h] [rbp-60h] BYREF
  __int64 v70; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v73; // [rsp+C8h] [rbp-40h] BYREF
  int v74; // [rsp+D0h] [rbp-38h] BYREF
  int v75; // [rsp+D4h] [rbp-34h] BYREF
  HSTRING v76; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v77[2]; // [rsp+E0h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F0h] [rbp-18h] BYREF
  HSTRING string; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v77[1] = -2LL;
  v76 = 0LL;
  v4 = 0;
  v77[0] = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_124;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, v77);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_64;
  }
  v70 = 0LL;
  v8 = *(_QWORD *)v77[0];
  v70 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v8 + 96))(v77[0], &v70);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_62;
  }
  v61 = 0LL;
  v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(v70);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 548LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_60;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v70 + 64LL);
  v61 = 0LL;
  v10 = v12(v70, &v61);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 550LL;
    goto LABEL_12;
  }
  LODWORD(v58) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v61 + 56))(v61, &v58);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 552LL;
    goto LABEL_12;
  }
  v13 = 0;
  if ( !(_DWORD)v58 )
  {
LABEL_56:
    v40 = v76;
    v41 = (HSTRING *)(a2 + 16);
    if ( !v76 || v76 != *v41 )
    {
      WindowsDeleteString(*v41);
      *v41 = 0LL;
      WindowsDuplicateString(v40, (HSTRING *)(a2 + 16));
    }
    v7 = v4;
    goto LABEL_60;
  }
  while ( 1 )
  {
    v60 = 0LL;
    v14 = *v61;
    v60 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v14 + 48))(v61, v13, &v60);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_121;
    }
    v69 = 0LL;
    v16 = *v60;
    v69 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(v16 + 48))(
            v60,
            &v69);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_118;
    }
    v68 = 0LL;
    v18 = *v69;
    v68 = 0LL;
    v19 = (*v18)((__int64)v69, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v68);
    v7 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x233,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_115;
    }
    v59 = 0LL;
    v20 = v68;
    v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v68 + 56LL);
    WindowsDeleteString(0LL);
    v59 = 0LL;
    v22 = v21(v20, &v59);
    v7 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x236,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_113;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v59, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"consumers", -1, 0) == 2 )
      break;
LABEL_49:
    WindowsDeleteString(v59);
    v59 = 0LL;
    if ( v68 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
    if ( v69 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v69)[2])(v69);
    if ( v60 )
      (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
    if ( ++v13 >= (unsigned int)v58 )
      goto LABEL_56;
  }
  v73 = 0LL;
  string = 0LL;
  v24 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
          0x45u,
          &hstringHeader,
          &string);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
LABEL_124:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
LABEL_125:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    JUMPOUT(0x1800116B4LL);
  }
  v25 = RoGetActivationFactory(string, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, &v73);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_110;
  }
  v72 = 0LL;
  string = 0LL;
  v26 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebTokenRequest",
          0x38u,
          &hstringHeader,
          &string);
  if ( v26 < 0 )
    goto LABEL_125;
  v27 = RoGetActivationFactory(string, &GUID_6cf2141c_0ff0_4c67_b84f_99ddbe4a72c9, &v72);
  v7 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_107;
  }
  v67 = 0LL;
  v28 = *v60;
  v67 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v28 + 48))(v60, &v67);
  v7 = v29;
  if ( v29 >= 0 )
  {
    v66 = 0LL;
    v57 = 0LL;
    v30 = v72;
    v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v72 + 56LL);
    v66 = 0LL;
    v32 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &off_1800E9E70) + 24);
    v33 = v31(v30, v67, *(_QWORD *)(a1 + 8), v32, 0, &v66);
    v7 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v33);
LABEL_99:
      if ( v57 )
        (*(void (__fastcall **)(__int64 *))(*v57 + 16))(v57);
      if ( v66 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
      goto LABEL_104;
    }
    v65 = 0LL;
    v34 = *v73;
    v65 = 0LL;
    v35 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(v34 + 56))(v73, v66, v60, &v65);
    v7 = v35;
    if ( v35 < 0 )
    {
      v55 = 584LL;
    }
    else
    {
      v36 = v57;
      v57 = 0LL;
      if ( v36 )
        (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
      v37 = v65;
      v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult *> *>(v65);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v37 + 64LL))(v37, &v57);
      if ( v7 < 0 )
      {
        v56 = (unsigned int)v7;
        v55 = 586LL;
LABEL_95:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v55,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v56);
LABEL_96:
        if ( v65 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
        goto LABEL_99;
      }
      v35 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v57 + 56))(v57, &v74);
      v7 = v35;
      if ( v35 >= 0 )
      {
        if ( v74 )
        {
          v63 = 0LL;
          v38 = *v57;
          v63 = 0LL;
          v39 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v38 + 64))(v57, &v63);
          v7 = v39;
          if ( v39 < 0 )
          {
            v43 = 607LL;
          }
          else
          {
            v39 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v63 + 48))(v63, &v75);
            v7 = v39;
            if ( v39 >= 0 )
            {
              v4 = v75;
              if ( v63 )
                (*(void (__fastcall **)(__int64 *))(*v63 + 16))(v63);
              if ( v65 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
              if ( v57 )
                (*(void (__fastcall **)(__int64 *))(*v57 + 16))(v57);
              if ( v66 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
              if ( v67 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
              if ( v72 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
              if ( v73 )
                (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
              goto LABEL_49;
            }
            v43 = 609LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v43,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v39);
          v44 = v63;
          goto LABEL_89;
        }
        v64 = 0LL;
        v45 = *v57;
        v64 = 0LL;
        v46 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v45 + 48))(v57, &v64);
        v7 = v46;
        if ( v46 < 0 )
        {
          v47 = (unsigned int)v46;
          v48 = 593LL;
LABEL_76:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v48,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v47);
LABEL_88:
          v44 = v64;
LABEL_89:
          if ( v44 )
            (*(void (__fastcall **)(__int64 *))(*v44 + 16))(v44);
          goto LABEL_96;
        }
        LODWORD(v62) = 0;
        v49 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v64 + 56))(v64, &v62);
        v7 = v49;
        if ( v49 < 0 )
        {
          v47 = (unsigned int)v49;
          v48 = 595LL;
          goto LABEL_76;
        }
        if ( (_DWORD)v62 != 1 )
        {
          v7 = -2147418113;
          v47 = 2147549183LL;
          v48 = 596LL;
          goto LABEL_76;
        }
        v71 = 0LL;
        v50 = *v64;
        v71 = 0LL;
        v51 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v50 + 48))(v64, 0LL, &v71);
        v7 = v51;
        if ( v51 >= 0 )
        {
          v51 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71 + 48LL))(v71, &v76);
          v7 = v51;
          if ( v51 >= 0 )
          {
            v53 = v76;
            v54 = (HSTRING *)(a2 + 16);
            if ( !v76 || v76 != *v54 )
            {
              WindowsDeleteString(*v54);
              *v54 = 0LL;
              WindowsDuplicateString(v53, (HSTRING *)(a2 + 16));
            }
            v7 = 0;
            goto LABEL_86;
          }
          v52 = 599LL;
        }
        else
        {
          v52 = 598LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v52,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v51);
LABEL_86:
        if ( v71 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
        goto LABEL_88;
      }
      v55 = 589LL;
    }
    v56 = (unsigned int)v35;
    goto LABEL_95;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v29);
LABEL_104:
  if ( v67 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
LABEL_107:
  if ( v72 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
LABEL_110:
  if ( v73 )
    (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
LABEL_113:
  WindowsDeleteString(v59);
  v59 = 0LL;
LABEL_115:
  if ( v68 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
LABEL_118:
  if ( v69 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v69)[2])(v69);
LABEL_121:
  if ( v60 )
    (*(void (__fastcall **)(__int64 *))(*v60 + 16))(v60);
LABEL_60:
  if ( v61 )
    (*(void (__fastcall **)(__int64 *))(*v61 + 16))(v61);
LABEL_62:
  if ( v70 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
LABEL_64:
  if ( v77[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v77[0] + 16LL))(v77[0], *(_QWORD *)v77[0]);
  return (unsigned int)v7;
}
