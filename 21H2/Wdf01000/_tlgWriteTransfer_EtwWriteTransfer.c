/*
 * XREFs of _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0060430
 * Callers:
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C005FD54 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$03@@U4@U?$_tlgWrapperByVal@$00@@U5@U5@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$03@@6AEBU?$_tlgWrapperByVal@$00@@776@Z @ 0x1C0065E18 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapperByVal@$03.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@G@@5@Z @ 0x1C0065FA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapSz@G.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapSz@G@@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@55555555555555555555555AEBU?$_tlgWrapSz@G@@666@Z @ 0x1C0070FA0 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1C008F448 (MicrosoftTelemetryAssertTriggeredWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall tlgWriteTransfer_EtwWriteTransfer(
        const _tlgProvider_t *hProvider,
        char *pEventMetadata,
        const _GUID *pActivityId,
        const _GUID *pRelatedActivityId,
        ULONG cData,
        _EVENT_DATA_DESCRIPTOR *pData)
{
  _EVENT_DESCRIPTOR desc; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&desc.Id = (unsigned __int8)*pEventMetadata << 24;
  *(_DWORD *)&desc.Level = *(unsigned __int16 *)(pEventMetadata + 1);
  desc.Keyword = *(_QWORD *)(pEventMetadata + 3);
  pData->Ptr = (unsigned __int64)hProvider->ProviderMetadataPtr;
  pData->Size = *hProvider->ProviderMetadataPtr;
  pData->Reserved = 2;
  pData[1].Ptr = (unsigned __int64)(pEventMetadata + 11);
  pData[1].Size = *(unsigned __int16 *)(pEventMetadata + 11);
  pData[1].Reserved = 1;
  return EtwWriteTransfer(hProvider->RegHandle, &desc, pActivityId, pRelatedActivityId, cData, pData);
}
