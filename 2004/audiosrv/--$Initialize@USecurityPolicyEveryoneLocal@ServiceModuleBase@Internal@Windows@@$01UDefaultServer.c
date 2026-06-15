/*
 * XREFs of ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x18006D644
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180063D30 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1?CoDecrementMTAUsage@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUCO_MTA_USAGE_COOKIE__@@@Z @ 0x180047DD0 (-reset@-$unique_storage@U-$resource_policy@PEAUCO_MTA_USAGE_COOKIE__@@P6AJPEAU1@@Z$1-CoDecrement.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800BB684 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ServiceModuleBase::Initialize<Windows::Internal::ServiceModuleBase::SecurityPolicyEveryoneLocal,2,Windows::Internal::DefaultServerDescriptor>(
        Windows::Internal::ServiceModuleBase *this)
{
  char v2; // si
  HRESULT Instance; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = 1;
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::reset(
    (__int64 *)this + 1,
    0LL);
  Instance = CoIncrementMTAUsage((char *)this + 8);
  v4 = Instance;
  *((_DWORD *)this + 4) = Instance;
  if ( Instance < 0 )
  {
    v5 = 99LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecore\\internal\\com\\inc\\ComServiceHelper.h",
      (const char *)(unsigned int)Instance);
    goto LABEL_13;
  }
  Instance = (*(__int64 (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 32LL))(this);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 123LL;
    goto LABEL_11;
  }
  (*(void (__fastcall **)(Windows::Internal::ServiceModuleBase *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)this + 20) = 1;
  v6 = (_QWORD *)((char *)this + 24);
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    *v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &CLSID_ContextSwitcher,
               0LL,
               1u,
               &GUID_000001da_0000_0000_c000_000000000046,
               (LPVOID *)this + 3);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 141LL;
    goto LABEL_11;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(struct tagComCallData *), Windows::Internal::ServiceModuleBase *, GUID *, int, _QWORD))(*(_QWORD *)*v6 + 24LL))(
               *v6,
               Windows::Internal::ServiceModuleBase::ConnectCallbackThunk,
               this,
               &IID_IContextCallback,
               5,
               0LL);
  v4 = Instance;
  if ( Instance < 0 )
  {
    v5 = 144LL;
    goto LABEL_11;
  }
  v2 = 0;
  v4 = 0;
LABEL_13:
  if ( v2 )
    Windows::Internal::ServiceModuleBase::Uninitialize(this);
  return v4;
}
