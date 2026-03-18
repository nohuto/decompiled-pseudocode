/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@@Z @ 0x146906
 * Callers:
 *     ?CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0xCC9F6 (-CoalesceMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?TraceLoggingMouseWheelRoutingValueAtStartup@@YGXXZ @ 0xD57B0 (-TraceLoggingMouseWheelRoutingValueAtStartup@@YGXXZ.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SGX_K_N@Z @ 0x1469E1 (-DeliverRawInput@Mouse@InputTraceLogging@@SGX_K_N@Z.c)
 *     ?CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14CB1D (-CallDelegateThread@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z @ 0x14D801 (-ReassignMessage@DManip@InputTraceLogging@@SGXPBUtagQMSG@@@Z.c)
 *     ?TraceLoggingMouseWheelRoutingModeChange@@YGXK@Z @ 0x186AA0 (-TraceLoggingMouseWheelRoutingModeChange@@YGXK@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-44h] BYREF
  int v8; // [esp+24h] [ebp-24h]
  int v9; // [esp+28h] [ebp-20h]
  int v10; // [esp+2Ch] [ebp-1Ch]
  int v11; // [esp+30h] [ebp-18h]
  int v12; // [esp+34h] [ebp-14h]
  int v13; // [esp+38h] [ebp-10h]
  int v14; // [esp+3Ch] [ebp-Ch]
  int v15; // [esp+40h] [ebp-8h]

  v12 = a6;
  v14 = 4;
  v13 = 0;
  v8 = *a5;
  v15 = 0;
  v9 = 0;
  v10 = 8;
  v11 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 4u, &UserData);
}
