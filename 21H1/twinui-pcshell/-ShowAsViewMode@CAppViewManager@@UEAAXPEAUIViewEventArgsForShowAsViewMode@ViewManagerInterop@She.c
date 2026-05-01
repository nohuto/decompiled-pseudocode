/*
 * XREFs of ?ShowAsViewMode@CAppViewManager@@UEAAXPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x180147F90
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x1800162F8 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_ @ 0x180142D30 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180142D30.c)
 *     _lambda_e0406ff635fb08f1c21915f069992ce2_::__lambda_e0406ff635fb08f1c21915f069992ce2_ @ 0x1801431D4 (_lambda_e0406ff635fb08f1c21915f069992ce2_--__lambda_e0406ff635fb08f1c21915f069992ce2_.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::ShowAsViewMode(
        CAppViewManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *a2,
        struct IPresentationRequestedArgs *a3)
{
  RTL_SRWLOCK *v5; // rdi
  struct IAsyncCallback *v6; // rbx
  _QWORD *v7; // rax
  int v8; // eax
  RTL_SRWLOCK *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10[3]; // [rsp+28h] [rbp-18h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *v11; // [rsp+70h] [rbp+30h] BYREF
  __int64 v12; // [rsp+78h] [rbp+38h] BYREF
  struct IAsyncCallback *v13; // [rsp+80h] [rbp+40h] BYREF
  struct IPresentationRequestedArgs *v14; // [rsp+88h] [rbp+48h]

  v5 = (RTL_SRWLOCK *)((char *)this - 32);
  v12 = (__int64)this - 32;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
  v11 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
  v14 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v10[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v10);
  v10[1] = (__int64)a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 8LL))(a3);
  v6 = 0LL;
  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v6 = (struct IAsyncCallback *)Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_::DelegateInvokeHelper_IAsyncCallback__lambda_e0406ff635fb08f1c21915f069992ce2___1_long_(
                                    v7,
                                    &v9);
  v13 = v6;
  lambda_e0406ff635fb08f1c21915f069992ce2_::__lambda_e0406ff635fb08f1c21915f069992ce2_((__int64 *)&v9);
  v8 = CAppViewManager::_QueueOperation(v5, v6);
  if ( v8 < 0 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsViewMode *, _QWORD))(*(_QWORD *)a2 + 104LL))(
      a2,
      (unsigned int)v8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  if ( a3 )
    (*(void (__fastcall **)(struct IPresentationRequestedArgs *))(*(_QWORD *)a3 + 16LL))(a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
}
