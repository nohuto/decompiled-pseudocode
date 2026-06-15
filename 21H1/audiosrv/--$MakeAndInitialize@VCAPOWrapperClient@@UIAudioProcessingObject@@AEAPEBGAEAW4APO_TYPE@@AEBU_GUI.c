/*
 * XREFs of ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x180010500
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180010B80 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010F60 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CAPOWrapperClient,IAudioProcessingObject,unsigned short const * &,enum APO_TYPE &,_GUID const &>(
        _QWORD *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  LPCRITICAL_SECTION v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r15
  HRESULT Instance; // edi
  struct CAudioThreadPool *v15; // rbp
  HANDLE OwningThread; // rdx
  HRESULT v17; // [rsp+40h] [rbp-B8h] BYREF
  int v18; // [rsp+44h] [rbp-B4h] BYREF
  _DWORD *v19; // [rsp+48h] [rbp-B0h]
  _DWORD *v20; // [rsp+50h] [rbp-A8h]
  __int64 v21[5]; // [rsp+58h] [rbp-A0h] BYREF
  GUID v22; // [rsp+80h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+90h] [rbp-68h] BYREF

  *a1 = 0LL;
  v8 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  v19 = v8;
  v21[1] = (__int64)v8;
  if ( !v8 )
    return 2147942414LL;
  v21[2] = (__int64)v8;
  v8[13] = 1;
  *(_QWORD *)v8 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)v8 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v8 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v8 + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v8 + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v8 + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOPreferredFormatSupport>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &CAPOWrapperClient::`vftable'{for `IAPOWrapperClient'};
  *((_QWORD *)v9 + 1) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 2) = &CAPOWrapperClient::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v9 + 3) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 4) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObjectInternal'};
  *((_QWORD *)v9 + 5) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAPOPreferredFormatSupport>'};
  *((_QWORD *)v9 + 7) = 0LL;
  *((_QWORD *)v9 + 8) = 0LL;
  v9[18] = 0;
  v10 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v21[3] = (__int64)v10;
  if ( ++LODWORD(v10[1].DebugInfo) == 1 )
  {
    v15 = ThreadPool;
    EnterCriticalSection(v10);
    v21[4] = (__int64)v10;
    OwningThread = v10[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v15 + 24LL))(
        v15,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v15 + 32LL))(
        v15,
        v10[3].OwningThread,
        1LL);
    }
    LeaveCriticalSection(v10);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v10);
  }
  LeaveCriticalSection(v10);
  v20 = v9;
  v19 = 0LL;
  v11 = *a3;
  v12 = *a2;
  ActivityId = 0LL;
  EventActivityIdControl(1u, &ActivityId);
  Instance = CoCreateInstance(
               &GUID_3a8b5a92_80b0_48b3_8197_701ecd3261e4,
               0LL,
               0x17u,
               &GUID_69fed9b6_5405_48b8_3db0_4ca492fc3677,
               (LPVOID *)v9 + 7);
  if ( Instance < 0
    || (v22 = ActivityId,
        Instance = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, _QWORD, __int64, _DWORD *))(**((_QWORD **)v9 + 7)
                                                                                                 + 24LL))(
                     *((_QWORD *)v9 + 7),
                     &v22,
                     v12,
                     v11,
                     a4,
                     v9 + 16),
        Instance < 0) )
  {
    if ( (unsigned int)dword_18019D4E8 > 2 )
    {
      v17 = Instance;
      v18 = 44;
      v21[0] = (__int64)"CAPOWrapperClient::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4E8,
        (__int64)v21,
        (__int64)&v18,
        (__int64)&v17);
    }
  }
  else
  {
    Instance = (**(__int64 (__fastcall ***)(_DWORD *, GUID *, _QWORD *))v9)(
                 v9,
                 &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                 a1);
  }
  if ( v9 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)Instance;
}
