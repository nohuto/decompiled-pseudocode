/*
 * XREFs of ?DeactivateOnNextFrame@CComputeScribbleRenderer@@QEAAXXZ @ 0x1801E43D8
 * Callers:
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801A8CDC (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002890C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801EAAF4 (-StopInternal@CComputeScribbleScheduler@@AEAAXXZ.c)
 */

void __fastcall CComputeScribbleRenderer::DeactivateOnNextFrame(CComputeScribbleRenderer *this)
{
  RTL_SRWLOCK *v2; // rdi
  RTL_SRWLOCK *v3; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)g_pComposition + 82) + 120LL))(
    *((_QWORD *)g_pComposition + 82),
    0LL,
    0x400000LL);
  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 4);
  AcquireSRWLockExclusive(v2 + 11);
  v3 = v2 + 11;
  CComputeScribbleScheduler::StopInternal((CComputeScribbleScheduler *)v2);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v3);
  *((_BYTE *)this + 49) = 0;
}
