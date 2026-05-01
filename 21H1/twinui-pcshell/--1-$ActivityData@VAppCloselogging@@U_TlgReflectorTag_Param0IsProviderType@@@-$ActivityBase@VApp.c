/*
 * XREFs of ??1?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180150190
 * Callers:
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180044EA0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ??1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ @ 0x180150394 (--1ShellAppManagerCloseRequested@AppCloseTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAppCloselogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180153BE4 (-reset@-$shared_object@V-$ActivityData@VAppCloselogging@@U_TlgReflectorTag_Param0IsProviderType@.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z @ 0x180135450 (-get@-$static_lazy@VAppCloselogging@@@details@wil@@QEAAPEAVAppCloselogging@@P6AXXZ@Z.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801425AC (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<AppCloselogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AppCloselogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  _DWORD **v3; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = (_DWORD **)wil::details::static_lazy<AppCloselogging>::get(
                      v2,
                      _lambda_3e26dcec44775d43d9dfc79dea49f939_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<70368744177664,5>(v3[1]);
  }
  *(_DWORD *)a1 = 3;
}
