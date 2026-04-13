/*
 * XREFs of ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18007438C
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x180068D98 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     _lambda_e34527cb48b3e2822e62a7657f7a4fcf_::operator() @ 0x180078724 (_lambda_e34527cb48b3e2822e62a7657f7a4fcf_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800333E4 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x180033E88 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800736C0 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180073A04 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x180073D08 (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180073E24 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x1800741C8 (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180078CEC (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800AF3F0 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerState(__int64 *a1, __int64 a2, int a3)
{
  PCWSTR StringRawBuffer; // rbx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdi
  HSTRING v8; // rsi
  struct Windows::Foundation::Collections::IPropertySet *v9; // rbx
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  int v13; // ecx
  int v14; // eax
  struct Windows::Foundation::Collections::IPropertySet *v15; // rax
  struct Windows::Foundation::Collections::IPropertySet *v16; // rcx
  _QWORD *v17; // rcx
  wil::details::in1diag3 *v18; // rcx
  wchar_t *v19; // rax
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // [rsp+28h] [rbp-49h] BYREF
  __int64 v29; // [rsp+30h] [rbp-41h] BYREF
  char *v30; // [rsp+38h] [rbp-39h]
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+40h] [rbp-31h] BYREF
  HSTRING string; // [rsp+48h] [rbp-29h] BYREF
  __int64 v33; // [rsp+50h] [rbp-21h] BYREF
  __int64 v34; // [rsp+58h] [rbp-19h]
  struct Windows::Foundation::Collections::IPropertySet *v35; // [rsp+68h] [rbp-9h]
  __int64 *v36; // [rsp+70h] [rbp-1h] BYREF
  __int64 v37; // [rsp+78h] [rbp+7h] BYREF
  _QWORD *v38; // [rsp+80h] [rbp+Fh] BYREF
  volatile signed __int32 *v39; // [rsp+88h] [rbp+17h]
  __int64 v40; // [rsp+90h] [rbp+1Fh]
  __int64 v41; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v43; // [rsp+F0h] [rbp+7Fh] BYREF

  v40 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v41,
         a1);
  v7 = (unsigned __int64)retaddr;
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v6, (__int64)StringRawBuffer) )
    goto LABEL_61;
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v38);
  v8 = string;
  v9 = 0LL;
  v35 = 0LL;
  v28 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))*v38)(
          *v38,
          &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
          &v28);
  v7 = (unsigned int)v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAD,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v10);
LABEL_4:
    v11 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
    goto LABEL_42;
  }
  v29 = 0LL;
  LODWORD(v30) = 0;
  v12 = *v28;
  v36 = &v29;
  v37 = 0LL;
  v7 = (*(unsigned int (__fastcall **)(_QWORD *, HSTRING, __int64 *))(v12 + 48))(v28, v8, &v37);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v36);
  if ( (v7 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
    if ( v29 && (((_DWORD)v30 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v29 + 16LL))();
    goto LABEL_4;
  }
  v13 = (int)v30;
  if ( (int)v30 < 0 )
  {
    v7 = (unsigned int)v30;
    goto LABEL_21;
  }
  if ( (_DWORD)v30 )
  {
    if ( (_DWORD)v30 == 1 || (_DWORD)v30 == 3 )
    {
      v43 = 13;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v29 + 48LL))(v29, &v43);
      v7 = (unsigned int)v14;
      v13 = (int)v30;
      if ( v14 < 0 )
        goto LABEL_21;
    }
  }
  else
  {
    v43 = 0;
  }
  v7 = 0LL;
LABEL_21:
  if ( (v7 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
    if ( v29 && (((_DWORD)v30 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v29 + 16LL))();
    goto LABEL_4;
  }
  v15 = 0LL;
  v31 = 0LL;
  if ( v43 == 13 )
  {
    v7 = (**(unsigned int (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v29)(
           v29,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v31);
    v13 = (int)v30;
    v15 = v31;
  }
  else
  {
    v7 = 2147549183LL;
  }
  if ( (v7 & 0x80000000) != 0LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\PropertySetHelper.h",
      (const char *)(unsigned int)v7);
    v16 = v31;
    if ( v31 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( v29 && (((_DWORD)v30 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v29 + 16LL))();
    goto LABEL_4;
  }
  v9 = v15;
  v31 = 0LL;
  v35 = v15;
  if ( v29 && ((v13 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v17 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v17 + 16LL))(v17);
  }
  v7 = 0LL;
LABEL_42:
  v18 = retaddr;
  if ( (v7 & 0x80000000) != 0LL )
  {
LABEL_62:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x73,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_63;
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v33,
    v9);
  v19 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(a3);
  v20 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v33,
          L"triggerState",
          v19);
  v21 = retaddr;
  if ( v20 < 0 )
  {
LABEL_63:
    wil::details::in1diag3::Throw_Hr(
      v21,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v20);
    JUMPOUT(0x180074836LL);
  }
  v22 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v38,
          string,
          v33);
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v22);
LABEL_61:
    wil::details::in1diag3::Throw_Hr(
      (wil::details::in1diag3 *)v7,
      (void *)0x6F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    goto LABEL_62;
  }
  v23 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v9 + 16LL))(v9);
  v25 = v39;
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v27 = (volatile signed __int32 *)a1[1];
  if ( v27 )
  {
    result = _InterlockedDecrement(v27 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      result = _InterlockedDecrement(v27 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  return result;
}
