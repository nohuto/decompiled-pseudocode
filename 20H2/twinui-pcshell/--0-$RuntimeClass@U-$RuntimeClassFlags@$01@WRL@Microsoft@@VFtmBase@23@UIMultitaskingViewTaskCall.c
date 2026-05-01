/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180380B00
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___::CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___ @ 0x180380A90 (CMultitaskingViewTaskCallback__lambda_64af9837b8ba3858f1e82a38d8cf173b___--CMultitaskingViewTask.c)
 *     Microsoft::WRL::Details::Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836cf967_____lambda_d1e6a144d1c072a4513c9689836cf967__const_&_ @ 0x18038130C (Microsoft--WRL--Details--Make_CMultitaskingViewTaskCallback__lambda_d1e6a144d1c072a4513c9689836c.c)
 *     CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___::CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___ @ 0x18038250C (CMultitaskingViewTaskCallback__lambda_f68706b3a633395346cf80930ff89e4f___--CMultitaskingViewTask.c)
 *     CMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___::CMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___ @ 0x18038616C (CMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___--CMultitaskingViewTask.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewTaskCallback@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@UIMultitaskingViewTaskCallback@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180380BA4 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewT.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>(
        __int64 a1)
{
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)a1);
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>(a1 + 32);
  *(_DWORD *)(a1 + 44) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  *(_QWORD *)(a1 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,IMultitaskingViewTaskCallback>::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewTaskCallback>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IMultitaskingViewTaskCallback>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
