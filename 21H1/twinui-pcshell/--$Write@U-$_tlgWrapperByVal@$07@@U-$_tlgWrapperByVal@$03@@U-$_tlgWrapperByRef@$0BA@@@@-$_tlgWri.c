/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x1801423BC
 * Callers:
 *     ?StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z @ 0x180148610 (-StartActivity@DragCancel@AppViewManagerTabTelemetry@@QEAAXAEBU_GUID@@@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x18026F1D8 (-StartActivity@TabViewManager_TabTransferCanceled@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x18026F28C (-StartActivity@TabViewManager_TabTransferCompleted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 *     ?StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z @ 0x18026F340 (-StartActivity@TabViewManager_TabTransferStarted@TabViewManagerTraceLogging@@QEAAXU_GUID@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 v8; // rcx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+50h] [rbp-48h]
  __int64 v12; // [rsp+58h] [rbp-40h]
  __int64 v13; // [rsp+60h] [rbp-38h]
  __int64 v14; // [rsp+68h] [rbp-30h]
  __int64 v15; // [rsp+70h] [rbp-28h]
  __int64 v16; // [rsp+78h] [rbp-20h]

  v16 = 16LL;
  v14 = 4LL;
  v12 = 8LL;
  v8 = *a7;
  v13 = a6;
  v11 = a5;
  v15 = v8;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 5u, &v10);
}
