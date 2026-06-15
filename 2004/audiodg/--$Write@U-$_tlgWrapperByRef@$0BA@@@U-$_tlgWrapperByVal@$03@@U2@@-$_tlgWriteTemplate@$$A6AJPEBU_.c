/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x14005E370
 * Callers:
 *     ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14005F10C (-LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z.c)
 *     ?CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ @ 0x1400604C4 (-CheckGlitches@CSpatialCrossProcessBaseEndpoint@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140047768 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v14 = 4LL;
  v12 = 4LL;
  v10 = 16LL;
  v9 = *a5;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_140084108, a2, a3, 0LL, 5u, &v8);
}
