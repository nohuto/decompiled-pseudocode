/*
 * XREFs of ??1?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A6FB8
 * Callers:
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801A6F7C (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801AA2F8 (-reset@-$shared_object@V-$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800727A0 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ @ 0x18007EFD4 (-ClearMessage@StoredCallContextInfo@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1801425AC (--$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x1801AA244 (-get@-$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLog.c)
 */

void __fastcall wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CommonPeopleTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CommonPeopleTelemetryLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  wil::details::StoredCallContextInfo::ClearMessage((wil::details::StoredCallContextInfo *)(a1 + 40));
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v3 = wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(
           v2,
           _lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<70368744177664,5>(*(_DWORD **)(v3 + 8));
  }
  *(_DWORD *)a1 = 3;
}
