/*
 * XREFs of ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004EC2C
 * Callers:
 *     ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x180049A34 (-ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z.c)
 *     ?GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$com_ptr_t@UITargetedContentContainer@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z @ 0x1800A26E4 (-GetSubscriptionContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA-AV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18000728C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180016C84 (-create@-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001AC9C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB364 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(
        void (__fastcall ***a1)(__int64, GUID *, __int64 *),
        DWORD a2,
        int a3)
{
  char *v4; // rbx
  int v5; // edi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  HRESULT v10; // eax
  void (__fastcall **v11)(__int64, GUID *, __int64 *); // rax
  void (__fastcall *v12)(__int64, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  HANDLE pHandles; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD dwindex; // [rsp+68h] [rbp+28h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  char *v22; // [rsp+78h] [rbp+38h]

  v21 = a3;
  dwindex = a2;
  v22 = 0LL;
  v4 = (char *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
  {
    v5 = -2147024882;
LABEL_9:
    v8 = (unsigned int)v5;
    v9 = 1404LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)v8);
    goto LABEL_20;
  }
  *(_QWORD *)v4 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v4 + 8));
  v6 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentContainer *>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentContainer *>'};
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentContainer *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)v4 + 11) = 1;
  if ( v6 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
  *(_QWORD *)v4 = off_1800DE000;
  *((_QWORD *)v4 + 7) = 0LL;
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Services::TargetedContent::TargetedContentContainer *>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)v4 + 12) = 0;
  v7 = wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create((wil::details **)v4 + 7);
  v5 = v7;
  if ( v7 >= 0 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
    v22 = v4;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v7);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( v5 < 0 )
    goto LABEL_9;
  v10 = ((__int64 (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *), char *))(*a1)[6])(a1, v22);
  v5 = v10;
  if ( v10 < 0 )
  {
    v9 = 1405LL;
LABEL_14:
    v8 = (unsigned int)v10;
    goto LABEL_15;
  }
  pHandles = (HANDLE)*((_QWORD *)v22 + 7);
  v10 = CoWaitForMultipleHandles(8u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  v21 = v10;
  v5 = v10;
  if ( v10 < 0 )
  {
    v9 = 1417LL;
    goto LABEL_14;
  }
  if ( *((_DWORD *)v22 + 12) == 1 )
  {
    v5 = 0;
  }
  else
  {
    v11 = *a1;
    v17 = 0LL;
    v12 = *v11;
    v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v17);
    v12((__int64)a1, &GUID_00000036_0000_0000_c000_000000000046, v13);
    v21 = -2147418113;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 64LL))(v17, &v21);
    v14 = v17;
    v5 = v21;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
LABEL_20:
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return (unsigned int)v5;
}
