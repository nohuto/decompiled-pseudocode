/*
 * XREFs of ??1TargetingInfo@Win32kInterop@@QEAA@XZ @ 0x1800AEC20
 * Callers:
 *     _Win32kInterop::DoConvergedHitTestCallback_::_1_::dtor$2 @ 0x18004E6D0 (_Win32kInterop--DoConvergedHitTestCallback_--_1_--dtor$2.c)
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x1800B0040 (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@V-$function@$$A6AXPEAVInputCon.c)
 *     _Win32kInterop::DeliverToContextualProcessing_::_1_::dtor$4 @ 0x1800B03EA (_Win32kInterop--DeliverToContextualProcessing_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::TargetingInfo::~TargetingInfo(Win32kInterop::TargetingInfo *this)
{
  __int64 v2; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 1);
  v2 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
