/*
 * XREFs of ??$Callback@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@VUniqueExtendedExecutionSession@@PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@01@PEAVUniqueExtendedExecutionSession@@P83@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z@Z @ 0x180081668
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180080170 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,UniqueExtendedExecutionSession,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  _DWORD *v3; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  _QWORD *result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-28h]

  *(_QWORD *)v9 = a2;
  v3 = 0LL;
  *(_OWORD *)&v9[8] = *a3;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v7 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v5 = &Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *>::`vftable';
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>>::`vftable';
    v5[3] = 1;
    if ( v7 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
    v3 = v6;
    *((_OWORD *)v6 + 1) = *(_OWORD *)v9;
    *(_QWORD *)v6 = off_1800E8298;
    *((_QWORD *)v6 + 4) = *(_QWORD *)&v9[16];
  }
  result = a1;
  *a1 = v3;
  return result;
}
