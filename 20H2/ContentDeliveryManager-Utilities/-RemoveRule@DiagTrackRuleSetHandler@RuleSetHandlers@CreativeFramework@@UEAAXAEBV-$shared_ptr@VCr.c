/*
 * XREFs of ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007CF90
 * Callers:
 *     ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067AA0 (-UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInte.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180068D98 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180065E40 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006ACE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x18007C588 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 *     ?Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007C6D0 (-Stop@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDelive.c)
 *     ??$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@3@$$ZPEAU4@@wil@@YA?AV?$ComPtr@UIStorageFolder@Storage@Windows@@@WRL@Microsoft@@PEAUIStorageFolderStatics@Storage@Windows@@P8456@EAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@6@@Z$$QEAPEAU7@@Z @ 0x18007CDA8 (--$CallAndWaitForCompletion@UIStorageFolderStatics@Storage@Windows@@PEAUHSTRING__@@PEAPEAU-$IAsy.c)
 *     ??$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@$$ZW4423@@wil@@YAXPEAUIStorageItem@Storage@Windows@@P8123@EAAJW4StorageDeleteOption@23@PEAPEAUIAsyncAction@Foundation@3@@Z$$QEAW4423@@Z @ 0x18007D508 (--$CallAndWaitForCompletion@UIStorageItem@Storage@Windows@@W4StorageDeleteOption@23@PEAPEAUIAsyn.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x18007D5F8 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007D7A4 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0.c)
 *     ??$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFolderStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007DA90 (--$GetActivationFactory@UIStorageFolderStatics@Storage@Windows@@@wil@@YA-AV-$com_ptr_t@UIStorage.c)
 *     ??$wait_for_completion@PEAVStorageFile@Storage@Windows@@V?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIStorageFile@Storage@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x18007DC60 (--$wait_for_completion@PEAVStorageFile@Storage@Windows@@V-$ComPtr@UIStorageFile@Storage@Windows@.c)
 *     ??_9IStorageFolder@Storage@Windows@@$BFA@AA @ 0x18007E404 (--_9IStorageFolder@Storage@Windows@@$BFA@AA.c)
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800AAB6C (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CD9F1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15 #try_helpers=1
void __fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(__int64 a1, void ***a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r14
  const wchar_t *p_hstringHeader; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  int SoftLandingFolderForUser; // eax
  HRESULT v9; // eax
  __int64 *v10; // rax
  __int64 v11; // r8
  const WCHAR *v12; // rax
  PVOID Reserved1; // rbx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rcx
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rcx
  void ***v23; // rcx
  int v24; // [rsp+20h] [rbp-428h] BYREF
  __int64 v25; // [rsp+28h] [rbp-420h] BYREF
  __int64 v26; // [rsp+30h] [rbp-418h] BYREF
  void ***v27; // [rsp+38h] [rbp-410h] BYREF
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp-408h] BYREF
  HSTRING v29; // [rsp+48h] [rbp-400h] BYREF
  const WCHAR *v30[4]; // [rsp+50h] [rbp-3F8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-3D8h] BYREF
  HSTRING string; // [rsp+88h] [rbp-3C0h] BYREF
  void *v33[3]; // [rsp+90h] [rbp-3B8h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-3A0h]
  _QWORD v35[4]; // [rsp+B0h] [rbp-398h] BYREF
  int v36; // [rsp+D0h] [rbp-378h]
  int *v37; // [rsp+D8h] [rbp-370h]
  int *v38; // [rsp+E0h] [rbp-368h]
  int v39; // [rsp+E8h] [rbp-360h] BYREF
  char v40; // [rsp+ECh] [rbp-35Ch]
  int v41; // [rsp+110h] [rbp-338h] BYREF
  const char *v42; // [rsp+118h] [rbp-330h]
  __int64 v43; // [rsp+120h] [rbp-328h]
  char v44; // [rsp+128h] [rbp-320h]
  __int64 v45; // [rsp+130h] [rbp-318h]
  char v46[144]; // [rsp+138h] [rbp-310h] BYREF
  __int64 v47; // [rsp+1C8h] [rbp-280h]
  __int128 v48; // [rsp+1D0h] [rbp-278h]
  __int64 v49; // [rsp+1E0h] [rbp-268h]
  HSTRING_HEADER v50; // [rsp+1F0h] [rbp-258h] BYREF
  __int64 v51; // [rsp+208h] [rbp-240h]
  WCHAR sourceString[264]; // [rsp+210h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+448h] [rbp+0h]

  v30[2] = (const WCHAR *)-2LL;
  v27 = a2;
  v30[1] = (const WCHAR *)a1;
  v24 = 0;
  v3 = *(_QWORD *)(a1 + 8);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  v4 = -1LL;
  std::wstring::assign(&hstringHeader.Reserved.Reserved1, *a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v24 = 1;
  p_hstringHeader = (const wchar_t *)&hstringHeader;
  if ( (unsigned __int64)string >= 8 )
    p_hstringHeader = (const wchar_t *)hstringHeader.Reserved.Reserved1;
  v35[0] = &wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v35[1] = 0LL;
  v35[2] = v35;
  v35[3] = 0LL;
  v36 = 0;
  v37 = &v41;
  v38 = &v39;
  v39 = 0;
  v40 = 0;
  v44 = 0;
  v41 = 0;
  v42 = "DiagTrackRuleSetHandlerRemoveRule";
  v43 = 0LL;
  v45 = 1LL;
  v47 = 0LL;
  memset_0(v46, 0, sizeof(v46));
  v48 = 0LL;
  v49 = 0LL;
  v35[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v35,
    p_hstringHeader,
    0,
    (const char *)(v3 + 8));
  if ( (unsigned __int64)string >= 8 )
    operator delete(hstringHeader.Reserved.Reserved1);
  string = (HSTRING)7;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  LOWORD(hstringHeader.Reserved.Reserved1) = 0;
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::GetFileNameForRule(v6, v33, *v27);
  SoftLandingFolderForUser = GetSoftLandingFolderForUser((HANDLE)0xFFFFFFFFFFFFFFFALL, sourceString, v7);
  if ( SoftLandingFolderForUser < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x70,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)SoftLandingFolderForUser);
LABEL_29:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x652,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v14);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x4F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)0x80070490LL);
    goto LABEL_32;
  }
  do
    ++v4;
  while ( sourceString[v4] );
  v30[3] = (const WCHAR *)v4;
  if ( v4 > 0xFFFFFFFF )
  {
LABEL_34:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    JUMPOUT(0x18007D4FDLL);
  }
  if ( (int)v4 + 1 < (unsigned int)v4 )
  {
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_34;
  }
  v9 = WindowsCreateStringReference(sourceString, v4, &hstringHeader, &string);
  if ( v9 < 0 )
    goto LABEL_29;
  v29 = string;
  v10 = (__int64 *)wil::GetActivationFactory<Windows::Storage::IStorageFolderStatics>(&v25);
  ___CallAndWaitForCompletion_UIStorageFolderStatics_Storage_Windows__PEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_3___ZPEAU4__wil__YA_AV__ComPtr_UIStorageFolder_Storage_Windows___WRL_Microsoft__PEAUIStorageFolderStatics_Storage_Windows__P8456_EAAJPEAUHSTRING____PEAPEAU__IAsyncOperation_PEAVStorageFolder_Storage_Windows___Foundation_6__Z__QEAPEAU7__Z(
    (__int64)&v27,
    *v10,
    v11,
    &v29);
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  string = 0LL;
  v12 = (const WCHAR *)v33;
  if ( v34 >= 8 )
    v12 = (const WCHAR *)v33[0];
  v30[0] = v12;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v50, v30)[1].Reserved.Reserved1;
  v25 = 0LL;
  v14 =  Windows::Storage::IStorageFolder::`vcall'{80,{flat}}(v27, Reserved1, &v25);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_30;
  wil::wait_for_completion<Windows::Storage::StorageFile *,Microsoft::WRL::ComPtr<Windows::Storage::IStorageFile>>(
    &v28,
    v25);
  v16 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v24 = 1;
  v51 = 0LL;
  v17 = retaddr;
  if ( !v28 )
    goto LABEL_31;
  v26 = 0LL;
  v18 = (**v28)(v28, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v26);
  v20 = retaddr;
  if ( v18 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x52,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_33;
  }
  v24 = 1;
  ___CallAndWaitForCompletion_UIStorageItem_Storage_Windows__W4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3___ZW4423__wil__YAXPEAUIStorageItem_Storage_Windows__P8123_EAAJW4StorageDeleteOption_23_PEAPEAUIAsyncAction_Foundation_3__Z__QEAW4423__Z(
    v26,
    v19,
    &v24);
  v21 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
  }
  v23 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    ((void (__fastcall *)(void ***))(*v23)[2])(v23);
  }
  *(_BYTE *)(a1 + 24) = 1;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule *)v35,
    (const char *)(*(_QWORD *)(a1 + 8) + 8LL));
  if ( v34 >= 8 )
    operator delete(v33[0]);
  v34 = 7LL;
  v33[2] = 0LL;
  LOWORD(v33[0]) = 0;
  v35[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::DiagTrackRuleSetHandlerRemoveRule::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v35);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v35);
}
