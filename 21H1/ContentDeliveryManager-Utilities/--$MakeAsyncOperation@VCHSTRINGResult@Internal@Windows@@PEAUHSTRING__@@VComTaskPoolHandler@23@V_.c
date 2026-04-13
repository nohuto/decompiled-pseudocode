/*
 * XREFs of ??$MakeAsyncOperation@VCHSTRINGResult@Internal@Windows@@PEAUHSTRING__@@VComTaskPoolHandler@23@V_lambda_7722d00b753d5de953ad2eb3f873b256_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_7722d00b753d5de953ad2eb3f873b256_@@@Z @ 0x1800196F4
 * Callers:
 *     ?TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@@Z @ 0x180010D10 (-TryGetSecondaryMSATicketAsync@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU-$I.c)
 * Callees:
 *     ??0?$AsyncOperation@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@23@VCHSTRINGResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x180020EDC (--0-$AsyncOperation@U-$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@U-$IAsyncOperationCom.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800CB5B8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::MakeAsyncOperation<Windows::Internal::CHSTRINGResult,HSTRING__ *,Windows::Internal::ComTaskPoolHandler,_lambda_7722d00b753d5de953ad2eb3f873b256_>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // edi
  void *v10; // rax
  __int64 v11; // rbx

  v7 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
    v7[1] = *(_QWORD *)a4;
    v7[2] = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = 0LL;
    *((_BYTE *)v7 + 24) = 0;
    *(_BYTE *)(a4 + 16) = 1;
    *v7 = &Windows::Internal::COperationLambdaVar<0,_lambda_7722d00b753d5de953ad2eb3f873b256_,Windows::Internal::CHSTRINGResult,>::`vftable';
    *((_DWORD *)v7 + 8) = 0;
    `eh vector constructor iterator'(
      v7 + 5,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v8 + 8) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = 0LL;
  if ( !v8 )
    return (unsigned int)-2147024882;
  v10 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = 0LL;
  if ( v10 )
    v11 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::CHSTRINGResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
            v10,
            a1,
            L"Windows.Foundation.IAsyncOperation`1<String>",
            0LL);
  if ( !v11 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    return (unsigned int)-2147024882;
  }
  *(_QWORD *)(v11 + 256) = v8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v11 + 8) + 104LL))(v11 + 8);
  if ( v9 >= 0 )
  {
    *a2 = v11 + 176;
    v11 = 0LL;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v11 + 8) + 16LL))(v11 + 8, *(_QWORD *)(v11 + 8));
  return (unsigned int)v9;
}
