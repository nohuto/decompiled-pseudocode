/*
 * XREFs of ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800877D8
 * Callers:
 *     ??0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@Z @ 0x180087280 (--0AddTileToCollectionService@Actions@CreativeFramework@@QEAA@PEB_WAEBUPinToStartProperties@12@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180068BC8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180071970 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800776A0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180089338 (--$GetActivationFactory@UIHashAlgorithmProviderStatics@Core@Cryptography@Security@Windows@@@wil@.c)
 *     ??$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800893E8 (--$GetActivationFactory@UIHashAlgorithmNamesStatics@Core@Cryptography@Security@Windows@@@wil@@YA.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
const WCHAR *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetHashedTileAlias(
        __int64 a1,
        const WCHAR *a2,
        void **a3,
        void **a4)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  void **v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, PVOID, _QWORD, __int64 *); // rdi
  const WCHAR *v15; // rcx
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rdi
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64, const WCHAR *); // rdi
  int v31; // eax
  HSTRING string; // [rsp+38h] [rbp-69h] BYREF
  __int64 v34; // [rsp+40h] [rbp-61h] BYREF
  __int64 *v35; // [rsp+48h] [rbp-59h] BYREF
  __int64 v36; // [rsp+50h] [rbp-51h] BYREF
  int v37; // [rsp+58h] [rbp-49h]
  __int64 v38; // [rsp+60h] [rbp-41h] BYREF
  __int64 v39; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v40; // [rsp+70h] [rbp-31h] BYREF
  const WCHAR *v41[3]; // [rsp+78h] [rbp-29h] BYREF
  void *v42[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-1h]
  unsigned __int64 v44; // [rsp+A8h] [rbp+7h]
  HSTRING_HEADER v45; // [rsp+B0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  v41[1] = (const WCHAR *)-2LL;
  v41[2] = a2;
  v37 = 0;
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42[0]) = 0;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)a4 + v8) );
  v9 = -1LL;
  do
    ++v9;
  while ( *((_WORD *)a3 + v9) );
  v10 = v8 + v9 + 2;
  if ( v10 != 7 && std::wstring::_Grow(v42, v10, 1) )
  {
    v11 = v42;
    if ( v44 >= 8 )
      v11 = (void **)v42[0];
    v43 = 0LL;
    *(_WORD *)v11 = 0;
  }
  if ( *(_WORD *)a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *((_WORD *)a3 + v12) );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::append(v42, a3, v12);
  std::wstring::append(v42, (void **)L"_", 1uLL);
  if ( *(_WORD *)a4 )
  {
    do
      ++v7;
    while ( *((_WORD *)a4 + v7) );
  }
  else
  {
    v7 = 0LL;
  }
  std::wstring::append(v42, a4, v7);
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>((const WCHAR *)&v38);
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics>(&v40);
  v36 = 0LL;
  v13 = v38;
  v14 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD, __int64 *))(*(_QWORD *)v38 + 120LL);
  v36 = 0LL;
  v15 = (const WCHAR *)v42;
  if ( v44 >= 8 )
    v15 = (const WCHAR *)v42[0];
  v41[0] = v15;
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v45, v41);
  v17 = v14(v13, v16[1].Reserved.Reserved1, 0LL, &v36);
  v18 = retaddr;
  if ( v17 < 0 )
    goto LABEL_40;
  wil::GetActivationFactory<Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics>(&v39);
  string = 0LL;
  v19 = v39;
  v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v39 + 64LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v21 = v20(v19, &string);
  v22 = retaddr;
  if ( v21 < 0 )
  {
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x1EA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    goto LABEL_42;
  }
  v35 = 0LL;
  v23 = *v40;
  v35 = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64 **))(v23 + 48))(v40, string, &v35);
  v25 = retaddr;
  if ( v24 < 0 )
  {
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x1EE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_43;
  }
  v34 = 0LL;
  v26 = *v35;
  v34 = 0LL;
  v27 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v26 + 64))(v35, v36, &v34);
  v28 = retaddr;
  if ( v27 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v28,
      (void *)0x1F0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v27);
    JUMPOUT(0x180087B6FLL);
  }
  *(_QWORD *)a2 = 0LL;
  v37 = 1;
  v29 = v38;
  v30 = *(__int64 (__fastcall **)(__int64, __int64, const WCHAR *))(*(_QWORD *)v38 + 96LL);
  WindowsDeleteString(0LL);
  *(_QWORD *)a2 = 0LL;
  v31 = v30(v29, v34, a2);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v31);
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x1E5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_41;
  }
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v35 )
    (*(void (__fastcall **)(__int64 *))(*v35 + 16))(v35);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v40 )
    (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v44 >= 8 )
    operator delete(v42[0]);
  return a2;
}
