/*
 * XREFs of ??R_lambda_70c99accc36c2441dd5df81ec50ad134_@@QEBAJAEAVCHSTRINGResult@Internal@Windows@@@Z @ 0x180010ECC
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_70c99accc36c2441dd5df81ec50ad134_@@VCHSTRINGResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCHSTRINGResult@23@@Z @ 0x18001CC00 (-Run@-$COperationLambdaVar@$0A@V_lambda_70c99accc36c2441dd5df81ec50ad134_@@VCHSTRINGResult@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ @ 0x180017B34 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_48101911@@@details@wil@@QEAA_NXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001A7A4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180020068 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVWebTokenRequestResult@Core@Web@Authentication@Sec.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall _lambda_70c99accc36c2441dd5df81ec50ad134_::operator()(__int64 a1, __int64 a2)
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
  int v34; // eax
  __int64 v35; // rbx
  __int64 (__fastcall *v36)(__int64, HSTRING, HSTRING, __int64 *); // r14
  HRESULT v37; // eax
  HSTRING v38; // rdi
  HRESULT v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 *v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rax
  int v46; // eax
  HSTRING v47; // rdi
  HSTRING *v48; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 *v53; // rcx
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rdx
  HSTRING v62; // rdi
  HSTRING *v63; // rbx
  __int64 v64; // rdx
  unsigned __int64 v65; // r9
  __int64 v66; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v70; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v71; // [rsp+70h] [rbp-98h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v73; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v74; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v75; // [rsp+90h] [rbp-78h] BYREF
  __int64 v76; // [rsp+98h] [rbp-70h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v78; // [rsp+A8h] [rbp-60h] BYREF
  __int64 (__fastcall ***v79)(__int64, GUID *, __int64 *); // [rsp+B0h] [rbp-58h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v81; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v82; // [rsp+C8h] [rbp-40h] BYREF
  __int64 *v83; // [rsp+D0h] [rbp-38h] BYREF
  int v84; // [rsp+D8h] [rbp-30h] BYREF
  int v85; // [rsp+DCh] [rbp-2Ch] BYREF
  HSTRING v86; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v87[2]; // [rsp+E8h] [rbp-20h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+F8h] [rbp-10h] BYREF
  HSTRING string; // [rsp+110h] [rbp+8h] BYREF
  HSTRING_HEADER v90; // [rsp+118h] [rbp+10h] BYREF
  HSTRING v91; // [rsp+130h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v87[1] = -2LL;
  v86 = 0LL;
  v4 = 0;
  v87[0] = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
    goto LABEL_136;
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, v87);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_71;
  }
  v80 = 0LL;
  v8 = *(_QWORD *)v87[0];
  v80 = 0LL;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v8 + 96))(v87[0], &v80);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x221,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_69;
  }
  v73 = 0LL;
  v10 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(v80);
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
    goto LABEL_67;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v80 + 64LL);
  v73 = 0LL;
  v10 = v12(v80, &v73);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 550LL;
    goto LABEL_12;
  }
  LODWORD(v69) = 0;
  v10 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v73 + 56))(v73, &v69);
  v7 = v10;
  if ( v10 < 0 )
  {
    v11 = 552LL;
    goto LABEL_12;
  }
  v13 = 0;
  if ( !(_DWORD)v69 )
  {
LABEL_63:
    v47 = v86;
    v48 = (HSTRING *)(a2 + 16);
    if ( !v86 || v86 != *v48 )
    {
      WindowsDeleteString(*v48);
      *v48 = 0LL;
      WindowsDuplicateString(v47, (HSTRING *)(a2 + 16));
    }
    v7 = v4;
    goto LABEL_67;
  }
  while ( 1 )
  {
    v71 = 0LL;
    v14 = *v73;
    v71 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v14 + 48))(v73, v13, &v71);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_133;
    }
    v79 = 0LL;
    v16 = *v71;
    v79 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(__int64, GUID *, __int64 *)))(v16 + 48))(
            v71,
            &v79);
    v7 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x230,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v17);
      goto LABEL_130;
    }
    v78 = 0LL;
    v18 = *v79;
    v78 = 0LL;
    v19 = (*v18)((__int64)v79, &GUID_4a01eb05_4e42_41d4_b518_e008a5163614, &v78);
    v7 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x233,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_127;
    }
    v70 = 0LL;
    v20 = v78;
    v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v78 + 56LL);
    WindowsDeleteString(0LL);
    v70 = 0LL;
    v22 = v21(v20, &v70);
    v7 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x236,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v22);
      goto LABEL_125;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v70, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, -1, L"consumers", -1, 0) == 2 )
      break;
LABEL_56:
    WindowsDeleteString(v70);
    v70 = 0LL;
    if ( v78 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    if ( v79 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v79)[2])(v79);
    if ( v71 )
      (*(void (__fastcall **)(__int64 *))(*v71 + 16))(v71);
    if ( ++v13 >= (unsigned int)v69 )
      goto LABEL_63;
  }
  v83 = 0LL;
  string = 0LL;
  v24 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebAuthenticationCoreManager",
          0x45u,
          &hstringHeader,
          &string);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
LABEL_136:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
LABEL_137:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v39);
LABEL_138:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v37);
LABEL_139:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v26);
    JUMPOUT(0x1800119DELL);
  }
  v25 = RoGetActivationFactory(string, &GUID_6aca7c92_a581_4479_9c10_752eff44fd34, &v83);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_122;
  }
  v82 = 0LL;
  string = 0LL;
  v26 = WindowsCreateStringReference(
          L"Windows.Security.Authentication.Web.Core.WebTokenRequest",
          0x38u,
          &hstringHeader,
          &string);
  if ( v26 < 0 )
    goto LABEL_139;
  v27 = RoGetActivationFactory(string, &GUID_6cf2141c_0ff0_4c67_b84f_99ddbe4a72c9, &v82);
  v7 = v27;
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v27);
    goto LABEL_119;
  }
  v77 = 0LL;
  v28 = *v71;
  v77 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v28 + 48))(v71, &v77);
  v7 = v29;
  if ( v29 >= 0 )
  {
    v72 = 0LL;
    v68 = 0LL;
    v30 = v82;
    v31 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v82 + 56LL);
    v72 = 0LL;
    v32 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v90, &off_1800ECEF0) + 24);
    v33 = v31(v30, v77, *(_QWORD *)(a1 + 8), v32, 0, &v72);
    v7 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x245,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v33);
      goto LABEL_111;
    }
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_48101911>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_48101911>::GetImpl'::`2'::impl) )
    {
      v67 = 0LL;
      v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 80LL))(v72, &v67);
      v7 = v34;
      if ( v34 < 0 )
      {
        v50 = 586LL;
LABEL_76:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v50,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v34);
        v51 = v67;
        if ( !v67 )
          goto LABEL_111;
        v67 = 0LL;
LABEL_78:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
LABEL_111:
        if ( v68 )
          (*(void (__fastcall **)(__int64 *))(*v68 + 16))(v68);
        if ( v72 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
        goto LABEL_116;
      }
      LOBYTE(v66) = 0;
      v35 = v67;
      v36 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, __int64 *))(*(_QWORD *)v67 + 80LL);
      string = 0LL;
      v37 = WindowsCreateStringReference(L"windows", 7u, &hstringHeader, &string);
      if ( v37 < 0 )
        goto LABEL_138;
      v38 = string;
      v91 = 0LL;
      v39 = WindowsCreateStringReference(L"ssoappgroup", 0xBu, &v90, &v91);
      if ( v39 < 0 )
        goto LABEL_137;
      v34 = v36(v35, v91, v38, &v66);
      v7 = v34;
      if ( v34 < 0 )
      {
        v50 = 588LL;
        goto LABEL_76;
      }
      v40 = v67;
      if ( v67 )
      {
        v67 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
    }
    v76 = 0LL;
    v41 = *v83;
    v76 = 0LL;
    v42 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *, __int64 *))(v41 + 56))(v83, v72, v71, &v76);
    v7 = v42;
    if ( v42 < 0 )
    {
      v64 = 591LL;
    }
    else
    {
      v43 = v68;
      v68 = 0LL;
      if ( v43 )
        (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
      v44 = v76;
      v7 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Security::Authentication::Web::Core::WebTokenRequestResult *> *>(v76);
      if ( v7 >= 0 )
        v7 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v44 + 64LL))(v44, &v68);
      if ( v7 < 0 )
      {
        v65 = (unsigned int)v7;
        v64 = 593LL;
LABEL_107:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v64,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v65);
        goto LABEL_108;
      }
      v42 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v68 + 56))(v68, &v84);
      v7 = v42;
      if ( v42 >= 0 )
      {
        if ( v84 )
        {
          v74 = 0LL;
          v45 = *v68;
          v74 = 0LL;
          v46 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v45 + 64))(v68, &v74);
          v7 = v46;
          if ( v46 < 0 )
          {
            v52 = 614LL;
          }
          else
          {
            v46 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v74 + 48))(v74, &v85);
            v7 = v46;
            if ( v46 >= 0 )
            {
              v4 = v85;
              if ( v74 )
                (*(void (__fastcall **)(__int64 *))(*v74 + 16))(v74);
              if ( v76 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
              if ( v68 )
                (*(void (__fastcall **)(__int64 *))(*v68 + 16))(v68);
              if ( v72 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
              if ( v77 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
              if ( v82 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
              if ( v83 )
                (*(void (__fastcall **)(__int64 *))(*v83 + 16))(v83);
              goto LABEL_56;
            }
            v52 = 616LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v52,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v46);
          v53 = v74;
          goto LABEL_101;
        }
        v75 = 0LL;
        v54 = *v68;
        v75 = 0LL;
        v55 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v54 + 48))(v68, &v75);
        v7 = v55;
        if ( v55 < 0 )
        {
          v56 = (unsigned int)v55;
          v57 = 600LL;
LABEL_88:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v57,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)v56);
LABEL_100:
          v53 = v75;
LABEL_101:
          if ( v53 )
            (*(void (__fastcall **)(__int64 *))(*v53 + 16))(v53);
LABEL_108:
          v51 = v76;
          if ( !v76 )
            goto LABEL_111;
          goto LABEL_78;
        }
        LODWORD(v67) = 0;
        v58 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v75 + 56))(v75, &v67);
        v7 = v58;
        if ( v58 < 0 )
        {
          v56 = (unsigned int)v58;
          v57 = 602LL;
          goto LABEL_88;
        }
        if ( (_DWORD)v67 != 1 )
        {
          v7 = -2147418113;
          v56 = 2147549183LL;
          v57 = 603LL;
          goto LABEL_88;
        }
        v81 = 0LL;
        v59 = *v75;
        v81 = 0LL;
        v60 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v59 + 48))(v75, 0LL, &v81);
        v7 = v60;
        if ( v60 >= 0 )
        {
          v60 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v81 + 48LL))(v81, &v86);
          v7 = v60;
          if ( v60 >= 0 )
          {
            v62 = v86;
            v63 = (HSTRING *)(a2 + 16);
            if ( !v86 || v86 != *v63 )
            {
              WindowsDeleteString(*v63);
              *v63 = 0LL;
              WindowsDuplicateString(v62, (HSTRING *)(a2 + 16));
            }
            v7 = 0;
            goto LABEL_98;
          }
          v61 = 606LL;
        }
        else
        {
          v61 = 605LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v61,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v60);
LABEL_98:
        if ( v81 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
        goto LABEL_100;
      }
      v64 = 596LL;
    }
    v65 = (unsigned int)v42;
    goto LABEL_107;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x241,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v29);
LABEL_116:
  if ( v77 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
LABEL_119:
  if ( v82 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
LABEL_122:
  if ( v83 )
    (*(void (__fastcall **)(__int64 *))(*v83 + 16))(v83);
LABEL_125:
  WindowsDeleteString(v70);
  v70 = 0LL;
LABEL_127:
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
LABEL_130:
  if ( v79 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v79)[2])(v79);
LABEL_133:
  if ( v71 )
    (*(void (__fastcall **)(__int64 *))(*v71 + 16))(v71);
LABEL_67:
  if ( v73 )
    (*(void (__fastcall **)(__int64 *))(*v73 + 16))(v73);
LABEL_69:
  if ( v80 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
LABEL_71:
  if ( v87[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v87[0] + 16LL))(v87[0], *(_QWORD *)v87[0]);
  return (unsigned int)v7;
}
