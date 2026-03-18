/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012AD48
 * Callers:
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003385C (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     RIMSetSystemInputMode @ 0x1C00C88B0 (RIMSetSystemInputMode.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1C012B0A4 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C017F254 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C017F5EC (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1C019CCA4 (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     SetContentOrientation @ 0x1C01A9BA0 (SetContentOrientation.c)
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1C01B805C (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00689F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        void **a5)
{
  _BYTE *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-48h] BYREF
  _BYTE *v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+5Ch] [rbp-1Ch]

  v6 = *a5;
  if ( *a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v6 = &unk_1C021E1A8;
    v8 = 1;
  }
  v13 = 0;
  v12 = v8;
  v11 = v6;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, a3, a4, 3u, &v10);
}
