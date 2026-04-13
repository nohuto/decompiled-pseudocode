/*
 * XREFs of ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x18009ABE4
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x18009B038 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@W4NameCollisionOption@23@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@3@$$ZPEAU423@PEAU5@W4623@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFile@Storage@Windows@@P8456@EAAJPEAUIStorageFolder@56@PEAUHSTRING__@@W4NameCollisionOption@56@PEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU756@$$QEAPEAU8@$$QEAW4956@@Z @ 0x18007CED8 (--$CallAndWaitForCompletion@UIStorageFile@Storage@Windows@@PEAUIStorageFolder@23@PEAUHSTRING__@@.c)
 *     ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007DBB8 (--$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorageFi.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18007DC60 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFileStatics@Storage@Windows@@$BDA@AA @ 0x18007E3F0 (--_9IStorageFileStatics@Storage@Windows@@$BDA@AA.c)
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009A7B0 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall CopyFaviconToEdge(HSTRING a1, HSTRING *a2, void **a3)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  HSTRING_HEADER *v14; // rax
  HRESULT v15; // eax
  __int64 v16; // r8
  wil::details::in1diag3 *v17; // rcx
  HSTRING *v18; // rax
  HSTRING v19; // rdi
  __int64 v20; // rcx
  HSTRING v21; // rbx
  HSTRING_HEADER *v22; // rax
  HRESULT v23; // eax
  wil::details::in1diag3 *v24; // rcx
  unsigned int v26; // [rsp+30h] [rbp-88h] BYREF
  __int64 v27; // [rsp+38h] [rbp-80h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-78h] BYREF
  HSTRING string; // [rsp+48h] [rbp-70h] BYREF
  __int64 v30; // [rsp+50h] [rbp-68h] BYREF
  HSTRING v31; // [rsp+58h] [rbp-60h] BYREF
  _QWORD v32[3]; // [rsp+60h] [rbp-58h] BYREF
  HSTRING_HEADER v33; // [rsp+78h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v32[1] = -2LL;
  v26 = 0;
  GetEdgeFaviconCache(v32, (__int64)a2, a3);
  v30 = 0LL;
  v4 = *(_QWORD *)wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>((const WCHAR *)&v31);
  v5 =  Windows::Storage::IStorageFileStatics::`vcall'{48,{flat}}(v4);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v5);
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    goto LABEL_21;
  }
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v27,
    v30);
  v26 = 2;
  v6 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v27;
  v27 = 0LL;
  v32[2] = v7;
  if ( v31 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16LL))(v31);
  string = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
         v7,
         &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
         &v27);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_20;
  v10 = v27;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 88LL);
  WindowsDeleteString(string);
  string = 0LL;
  v12 = v11(v10, &string);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x44,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v12);
LABEL_22:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v15);
    goto LABEL_23;
  }
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  newString = 0LL;
  WindowsDeleteString(0LL);
  newString = 0LL;
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)&off_1800FA3E8);
  v15 = WindowsConcatString(string, (HSTRING)v14[1].Reserved.Reserved1, &newString);
  v17 = retaddr;
  if ( v15 < 0 )
    goto LABEL_22;
  v26 = 1;
  v31 = newString;
  v30 = v32[0];
  v18 = (HSTRING *)___CallAndWaitForCompletion_UIStorageFile_Storage_Windows__PEAUIStorageFolder_23_PEAUHSTRING____W4NameCollisionOption_23_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_3___ZPEAU423_PEAU5_W4623__wil__YA_AV__ComPtr_UIStorageFile_Storage_Windows___WRL_Microsoft__PEAUIStorageFile_Storage_Windows__P8456_EAAJPEAUIStorageFolder_56_PEAUHSTRING____W4NameCollisionOption_56_PEAPEAU__IAsyncOperation_PEAVStorageFile_Storage_Windows___Foundation_6__Z__QEAPEAU756___QEAPEAU8___QEAW4956__Z(
                     (__int64)&v27,
                     v7,
                     v16,
                     &v30,
                     &v31,
                     &v26);
  v19 = *v18;
  *v18 = 0LL;
  v31 = v19;
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = newString;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)off_1800FA3E0);
  v23 = WindowsConcatString((HSTRING)v22[1].Reserved.Reserved1, v21, a2);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_23:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x53,
      (__int64)"shellcommon\\shell\\inc\\CopyEdgeAssetsHelper.h",
      (const char *)(unsigned int)v23);
    __debugbreak();
    JUMPOUT(0x18009AF51LL);
  }
  if ( v19 )
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
  WindowsDeleteString(newString);
  newString = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v32[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
  return 0LL;
}
