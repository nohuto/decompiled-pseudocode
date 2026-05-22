/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByVal@$03@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x180168DE8
 * Callers:
 *     ??$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEBU_GUID@@GGGIAEAY06$$CBW4ButtonFlags@1@AEAY06$$CBI@Z @ 0x180168B6C (--$Telemetry_SpatialInteractionHeartbeat_ButtonCounters@$06@SpatialInteractionTrace@SpatialInter.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035068 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11)
{
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-81h] BYREF
  __int64 v13; // [rsp+50h] [rbp-61h]
  __int64 v14; // [rsp+58h] [rbp-59h]
  __int64 v15; // [rsp+60h] [rbp-51h]
  __int64 v16; // [rsp+68h] [rbp-49h]
  __int64 v17; // [rsp+70h] [rbp-41h]
  __int64 v18; // [rsp+78h] [rbp-39h]
  __int64 v19; // [rsp+80h] [rbp-31h]
  __int64 v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  __int64 v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  int v24; // [rsp+A8h] [rbp-9h]
  int v25; // [rsp+ACh] [rbp-5h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  int v27; // [rsp+B8h] [rbp+7h]
  int v28; // [rsp+BCh] [rbp+Bh]

  v22 = 4LL;
  v28 = 0;
  v25 = 0;
  v20 = 2LL;
  v26 = *a11;
  v27 = *((_DWORD *)a11 + 2);
  v18 = 2LL;
  v16 = 2LL;
  v23 = *a10;
  v24 = *((_DWORD *)a10 + 2);
  v21 = a9;
  v19 = a8;
  v17 = a7;
  v15 = a6;
  v14 = 16LL;
  v13 = *a5;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 9u, &v12);
}
