/*
 * XREFs of ?GetHasMobilityAccount@MobilityExperienceManager@@UEAAJPEAE@Z @ 0x18009F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007258 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001A7A4 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVWebAccount@Credent.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall MobilityExperienceManager::GetHasMobilityAccount(
        MobilityExperienceManager *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  int ActivationFactory; // eax
  int v5; // ebx
  __int64 v6; // rax
  int v7; // eax
  HRESULT v8; // edx
  __int64 v9; // r8
  int (__fastcall ***v10)(_QWORD, GUID *, __int64); // rdi
  int v11; // eax
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD **); // rdi
  _QWORD *v13; // rcx
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // r14d
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  HRESULT v21; // eax
  HRESULT v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, _QWORD, _QWORD **); // rsi
  _QWORD *v25; // rcx
  int v26; // eax
  _QWORD *v27; // rcx
  _QWORD *v28; // rcx
  HSTRING string1; // [rsp+28h] [rbp-59h] BYREF
  __int64 v31; // [rsp+30h] [rbp-51h] BYREF
  INT32 result; // [rsp+38h] [rbp-49h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-41h] BYREF
  __int64 v34; // [rsp+48h] [rbp-39h]
  unsigned int v35; // [rsp+50h] [rbp-31h] BYREF
  int *v36; // [rsp+58h] [rbp-29h]
  int v37; // [rsp+60h] [rbp-21h] BYREF
  _QWORD *v38; // [rsp+68h] [rbp-19h] BYREF
  int (__fastcall ***v39)(_QWORD, GUID *, __int64); // [rsp+70h] [rbp-11h] BYREF
  __int64 v40; // [rsp+78h] [rbp-9h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-1h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING string; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v41[1] = -2LL;
  *a2 = 0;
  v41[0] = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal",
         0x40u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
LABEL_62:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
    JUMPOUT(0x18009FDAALL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, v41);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x36,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_58;
  }
  v39 = 0LL;
  v6 = *(_QWORD *)v41[0];
  v39 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int (__fastcall ****)(_QWORD, GUID *, __int64)))(v6 + 96))(v41[0], &v39);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_56;
  }
  v40 = 0LL;
  v10 = v39;
  v5 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Security::Credentials::WebAccount *> *>>(
         v39,
         v8,
         v9);
  if ( v5 < 0
    || (v5 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64), __int64 *))(*v10)[8])(v10, &v40),
        v5 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_54;
  }
  v34 = v40;
  v36 = &v37;
  v37 = 0;
  v38 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40 + 56LL))(v40, &v35);
  *v36 = v11;
  if ( v11 >= 0 && v35 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v34 + 48LL);
    v13 = v38;
    if ( v38 )
    {
      v38 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v13 + 16LL))(v13);
    }
    v14 = v12(v34, 0LL, &v38);
    *v36 = v14;
  }
  v15 = 0;
  v16 = v35;
  while ( 1 )
  {
    if ( *v36 < 0 || v15 == v16 )
      goto LABEL_39;
    v31 = 0LL;
    v17 = *v38;
    v31 = 0LL;
    v18 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v17 + 48))(v38, &v31);
    v5 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_49;
    }
    v33 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 **))v31)(
           v31,
           &GUID_4a01eb05_4e42_41d4_b518_e008a5163614,
           &v33) < 0 )
      goto LABEL_24;
    string1 = 0LL;
    v19 = *v33;
    string1 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *))(v19 + 56))(v33, &string1);
    v5 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v20);
LABEL_44:
      if ( string1 )
        WindowsDeleteString(string1);
      if ( v33 )
        (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
LABEL_49:
      if ( v31 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      v28 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      }
      goto LABEL_54;
    }
    result = 0;
    string = 0LL;
    v21 = WindowsCreateStringReference(L"consumers", 9u, &hstringHeader, &string);
    if ( v21 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
      goto LABEL_62;
    }
    v22 = WindowsCompareStringOrdinal(string1, string, &result);
    v5 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
        (const char *)(unsigned int)v22);
      string = 0LL;
      goto LABEL_44;
    }
    string = 0LL;
    if ( !result )
      break;
    if ( string1 )
      WindowsDeleteString(string1);
LABEL_24:
    if ( v33 )
      (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
    if ( v31 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    ++v15;
    if ( *v36 >= 0 && v15 < v35 )
    {
      v23 = v34;
      v24 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v34 + 48LL);
      v25 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      }
      v26 = v24(v23, v15, &v38);
      *v36 = v26;
    }
  }
  *a2 = 1;
  if ( string1 )
    WindowsDeleteString(string1);
  if ( v33 )
    (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
LABEL_39:
  v27 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  }
  v5 = 0;
LABEL_54:
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
LABEL_56:
  if ( v39 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64)))(*v39)[2])(v39);
LABEL_58:
  if ( v41[0] )
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0], *(_QWORD *)v41[0]);
  return (unsigned int)v5;
}
