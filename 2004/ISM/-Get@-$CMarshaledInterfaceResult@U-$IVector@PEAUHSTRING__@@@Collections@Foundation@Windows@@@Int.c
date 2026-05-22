/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x1801149B8
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x1801158C0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVector@PEAUHSTRING__@@@Collections@Founda.c)
 * Callees:
 *     ??0AgileRef@WRL@Microsoft@@QEAA@XZ @ 0x18001BD40 (--0AgileRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180046928 (--4-$ComPtr@UIHolographicDisplay@Holographic@Graphics@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV0.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x1800469C8 (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180064040 (--1-$ComPtr@UISpatialGraphNodePropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Micro.c)
 *     ??1CMarshaledInterface@@QEAA@XZ @ 0x180111074 (--1CMarshaledInterface@@QEAA@XZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180119A44 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>::Get(
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
           &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
           a2);
LABEL_5:
    v6 = v7;
    goto LABEL_6;
  }
  if ( v9 )
  {
    v7 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v9, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, a2, v4);
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>::~ComPtr<Windows::Internal::Holographic::ISpatialGraphNodePropertiesUpdatedCallback>(&v10);
  CMarshaledInterface::~CMarshaledInterface((CMarshaledInterface *)&v9);
  return v6;
}
