/*
 * XREFs of ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C01BC3C8
 * Callers:
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA?AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEvent@1@AEBUInputDeliveryContext@1@AEBUtagPOINT@@II_K@Z @ 0x1C002EA6C (-ForwardInputToISM@CMouseProcessor@@AEAA-AW4ISMForwardingDecision@1@AEAVCInputDest@@AEBVCMouseEv.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0196C74 (-RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01B88D8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTempl.c)
 */

void InputTraceLogging::Mouse::SendToUserMode()
{
  int v0; // r9d
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+40h] [rbp-18h] BYREF
  __int64 v4; // [rsp+48h] [rbp-10h] BYREF
  __int64 v5; // [rsp+70h] [rbp+18h] BYREF
  __int64 v6; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0244A70 > 4 && tlgKeywordOn((__int64)&dword_1C0244A70, 64LL) )
  {
    v6 = (__int64)InputTraceLogging::RoutingModeToString(v0);
    v3 = *(_QWORD *)(v1 + 96);
    LODWORD(v5) = *(_DWORD *)(v1 + 192);
    v4 = *(_QWORD *)(v1 + 40);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (__int64)&dword_1C0244A70,
      byte_1C0219593,
      v1,
      v2,
      (__int64)&v4,
      (__int64)&v5,
      (__int64)&v3,
      (void **)&v6);
  }
}
