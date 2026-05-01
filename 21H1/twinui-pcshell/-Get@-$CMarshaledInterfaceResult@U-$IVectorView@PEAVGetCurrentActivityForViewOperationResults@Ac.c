/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x18020ED68
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@3@@Z @ 0x18020FF80 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGetCurrentActivityForViewO.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180012DC0 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800899E0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BC00 (--4-$ComPtr@UISwitchItemFilteredCollection@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x18009BC9C (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801128D0 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1801228B0 (--1-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>::Get(
        __int64 a1,
        struct IInspectable **a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 32));
  CMarshaledInterface::operator=(&v8, (__int64 *)(a1 + 24));
  Microsoft::WRL::ComPtr<ISwitchItemFilteredCollection>::operator=(&v7, (__int64 *)(a1 + 16));
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 32));
  v4 = 0;
  *a2 = 0LL;
  if ( v7 )
  {
    v5 = Microsoft::WRL::WeakRef::InternalResolve(
           (Microsoft::WRL::WeakRef *)&v7,
           &GUID_b8b1e07f_4293_5ac2_b3fe_9365ac66d3f2,
           a2);
LABEL_5:
    v4 = v5;
    goto LABEL_6;
  }
  if ( v8 )
  {
    v5 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v8, &GUID_b8b1e07f_4293_5ac2_b3fe_9365ac66d3f2, a2, 0);
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v7);
  Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::~ComPtr<IImmersiveMonitorManager>(&v8);
  return v4;
}
