/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___::Run @ 0x1800746B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1801346D8 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___::Run(
        __int64 a1)
{
  if ( (unsigned int)dword_18019D520 > 5 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      a1,
      &unk_18016DDA2);
  AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)(a1 + 16), 1);
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 99LL) = 1;
  AtmosCheck::UnregisterFromShellReadyNotifications(*(AtmosCheck **)(a1 + 16));
}
