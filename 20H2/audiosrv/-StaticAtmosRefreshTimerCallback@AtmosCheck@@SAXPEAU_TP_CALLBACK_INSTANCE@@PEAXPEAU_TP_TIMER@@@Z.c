/*
 * XREFs of ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800365E0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800B6E6C (_tlgKeywordOn.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1801336F8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void __fastcall AtmosCheck::StaticAtmosRefreshTimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rcx

  if ( (unsigned int)dword_18019C4F0 > 5 && (unsigned __int8)tlgKeywordOn(&dword_18019C4F0, 0LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v4,
      &unk_18016C962);
  Context[29] = 0LL;
  *((_DWORD *)Context + 46) = 5;
  *((_BYTE *)Context + 208) = 1;
  AtmosCheck::PerformLicenseCheck((AtmosCheck *)Context, 1);
}
