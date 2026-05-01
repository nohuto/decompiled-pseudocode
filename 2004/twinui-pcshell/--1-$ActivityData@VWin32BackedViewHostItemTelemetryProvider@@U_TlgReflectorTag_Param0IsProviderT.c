/*
 * XREFs of ??1?$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024CE80
 * Callers:
 *     ??1?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18024CDEC (--1-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_Tl.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180257284 (-reset@-$shared_object@V-$ActivityData@VWin32BackedViewHostItemTelemetryProvider@@U_TlgReflector.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180072EC0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007F7A4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180145EB0 (--$_tlgWriteActivityAutoStop@$0CAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802561FC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

void __fastcall wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityData<Win32BackedViewHostItemTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<Win32BackedViewHostItemTelemetryProvider,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
           v2,
           _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<35184372088832,5>(*(_DWORD **)(v3 + 8));
  }
  *(_DWORD *)a1 = 3;
}
