/*
 * XREFs of ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180069310
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStaticsInternal@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180025F30 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UITargetedContentActionStatic.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800333E4 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180065E40 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04$.c)
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x180066E18 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 *     ?GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@PEAUHSTRING__@@@Z @ 0x180067388 (-GetCorrelationVector@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCorrelationV.c)
 *     _lambda_b59dbdfd0007f2d89c20db91cc7697cd_::__lambda_b59dbdfd0007f2d89c20db91cc7697cd_ @ 0x180069EF0 (_lambda_b59dbdfd0007f2d89c20db91cc7697cd_--__lambda_b59dbdfd0007f2d89c20db91cc7697cd_.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006A25C (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     ??0?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006A6A0 (--0-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04$0.c)
 *     Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_b59dbdfd0007f2d89c20db91cc7697cd___ @ 0x18006D970 (Windows--Internal--MakeAsyncOperation_Windows--Internal--CMarshaledInterfaceResult_Windows--Foun.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CD9F1 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync(
        __int64 a1,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        _QWORD *a5)
{
  __int64 v8; // rsi
  const wchar_t *StringRawBuffer; // rdi
  const wchar_t *v10; // rbx
  HRESULT v11; // eax
  int v12; // edi
  HRESULT v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rbx
  int v16; // edi
  signed __int32 v17; // edx
  int v18; // edx
  signed __int32 v19; // edx
  __int64 v20; // r8
  volatile signed __int32 *v21; // rbx
  HSTRING string; // [rsp+28h] [rbp-E0h]
  __int64 v24; // [rsp+38h] [rbp-D0h]
  HSTRING v25; // [rsp+40h] [rbp-C8h]
  HSTRING v26[2]; // [rsp+4Ch] [rbp-BCh] BYREF
  HSTRING newString; // [rsp+60h] [rbp-A8h] BYREF
  HSTRING v28; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  volatile signed __int32 *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  const wchar_t *v32; // [rsp+88h] [rbp-80h]
  const wchar_t *v33; // [rsp+90h] [rbp-78h]
  _QWORD v34[4]; // [rsp+98h] [rbp-70h] BYREF
  int v35; // [rsp+B8h] [rbp-50h]
  int *v36; // [rsp+C0h] [rbp-48h]
  int *v37; // [rsp+C8h] [rbp-40h]
  int v38; // [rsp+D0h] [rbp-38h] BYREF
  char v39; // [rsp+D4h] [rbp-34h]
  int v40; // [rsp+F8h] [rbp-10h] BYREF
  const char *v41; // [rsp+100h] [rbp-8h]
  __int64 v42; // [rsp+108h] [rbp+0h]
  char v43; // [rsp+110h] [rbp+8h]
  __int64 v44; // [rsp+118h] [rbp+10h]
  _BYTE v45[144]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v46; // [rsp+1B0h] [rbp+A8h]
  __int128 v47; // [rsp+1B8h] [rbp+B0h]
  __int64 v48; // [rsp+1C8h] [rbp+C0h]
  _QWORD v49[3]; // [rsp+1D8h] [rbp+D0h] BYREF
  char v50; // [rsp+1F0h] [rbp+E8h]
  HSTRING v51; // [rsp+1F8h] [rbp+F0h]
  char v52; // [rsp+200h] [rbp+F8h]
  void **v53; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v54[3]; // [rsp+340h] [rbp+238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A0h] [rbp+298h]

  v31 = -2LL;
  *a5 = 0LL;
  Windows::Services::TargetedContent::Internal::GetCorrelationVector((char *)&v29, a4);
  v8 = v29;
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v32 = StringRawBuffer;
  v10 = WindowsGetStringRawBuffer(a2, 0LL);
  v33 = v10;
  v34[1] = 0LL;
  v34[2] = v34;
  v34[3] = 0LL;
  v35 = 0;
  v36 = &v40;
  v37 = &v38;
  v38 = 0;
  v39 = 0;
  v43 = 0;
  v40 = 0;
  v41 = "TriggerManagerGetTriggeredItemsForStateActivity";
  v42 = 0LL;
  v44 = 1LL;
  v46 = 0LL;
  memset_0(v45, 0, sizeof(v45));
  v47 = 0LL;
  v48 = 0LL;
  v34[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::StartActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v34,
    v10,
    StringRawBuffer,
    (const char *)(v8 + 8));
  string = 0LL;
  v11 = WindowsDuplicateString(a2, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v11);
  }
  else
  {
    string = newString;
    WindowsDeleteString(0LL);
    v13 = WindowsDuplicateString(a3, &v28);
    v12 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x174,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v13);
    }
    else
    {
      v25 = v28;
      WindowsDeleteString(0LL);
      v14 = a1 - 40;
      v15 = a1 - 40;
      v24 = a1 - 40;
      v16 = 0x7FFFFFFF;
      if ( a1 != 40 )
      {
        v17 = *(_DWORD *)(v14 + 68);
        if ( v17 == 0x7FFFFFFF )
          goto LABEL_9;
        do
        {
          if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 68), v17 + 1, v17) )
            break;
          v17 = *(_DWORD *)(v14 + 68);
        }
        while ( v17 != 0x7FFFFFFF );
        if ( v17 == 0x7FFFFFFF )
LABEL_9:
          v18 = 0x7FFFFFFF;
        else
          v18 = v17 + 1;
        v15 = a1 - 40;
        if ( (*(_BYTE *)(v24 + 88) & 4) == 0 && v18 == 2 )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v49[0] = a1 - 40;
      v49[1] = v15;
      if ( v15 )
      {
        v19 = *(_DWORD *)(v15 + 68);
        if ( v19 != 0x7FFFFFFF )
        {
          do
          {
            if ( v19 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 68), v19 + 1, v19) )
              break;
            v19 = *(_DWORD *)(v15 + 68);
          }
          while ( v19 != 0x7FFFFFFF );
          if ( v19 != 0x7FFFFFFF )
            v16 = v19 + 1;
        }
        v15 = a1 - 40;
        if ( (*(_BYTE *)(v24 + 88) & 4) == 0 && v16 == 2 )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      v49[2] = string;
      string = 0LL;
      v50 = 0;
      v51 = v25;
      v52 = 0;
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        &v53,
        v34);
      v53 = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
        v54,
        &v29);
      HIDWORD(v26[0]) = 3;
      v26[1] = (HSTRING)130;
      v12 = Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal______Windows::Internal::ComTaskPoolHandler__lambda_b59dbdfd0007f2d89c20db91cc7697cd___(
              (char *)v26 + 4,
              a5,
              v20,
              v49);
      lambda_b59dbdfd0007f2d89c20db91cc7697cd_::__lambda_b59dbdfd0007f2d89c20db91cc7697cd_(v49);
      if ( v12 >= 0 )
        v12 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1AA,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v12);
      if ( v15 )
        Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Services::TargetedContent::Internal::ITargetedContentActionStaticsInternal>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v15);
    }
  }
  if ( string )
    WindowsDeleteString(string);
  v34[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
  v21 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return (unsigned int)v12;
}
