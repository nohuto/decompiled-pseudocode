/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180114F50
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@UIPropertyValue@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIPropertyValue@Foundation@3@@Z @ 0x180115E20 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAUIPropertyValue@Foundation@Windows@@@Foundati.c)
 * Callees:
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18001BCE0 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180046F38 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x180046FD8 (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064630 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??1CMarshaledInterface@@QEAA@XZ @ 0x180111534 (--1CMarshaledInterface@@QEAA@XZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180119F04 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::IPropertyValue>::Get(
        __int64 a1,
        void **a2)
{
  bool v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&v9);
  Microsoft::WRL::AgileRef::AgileRef((Microsoft::WRL::AgileRef *)&v10);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 32));
  CMarshaledInterface::operator=((__int64)&v9);
  Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::IHolographicDisplay>::operator=(&v10, (__int64 *)(a1 + 16));
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 32));
  v5 = v10;
  v6 = 0;
  *a2 = 0LL;
  if ( v5 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
           v5,
           &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
           a2);
LABEL_5:
    v6 = v7;
    goto LABEL_6;
  }
  if ( v9 )
  {
    v7 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v9, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, a2, v4);
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v10);
  CMarshaledInterface::~CMarshaledInterface((CMarshaledInterface *)&v9);
  return v6;
}
