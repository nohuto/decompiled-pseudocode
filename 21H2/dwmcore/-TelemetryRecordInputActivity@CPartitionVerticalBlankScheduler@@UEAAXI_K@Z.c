/*
 * XREFs of ?TelemetryRecordInputActivity@CPartitionVerticalBlankScheduler@@UEAAXI_K@Z @ 0x1800154C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180189D8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TelemetryRecordInputActivity(
        CPartitionVerticalBlankScheduler *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  int v6; // r8d
  int v7; // r9d
  __int64 *v8; // rax
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1803D0EF0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EF0, 2LL) )
  {
    v8 = (__int64 *)*((_QWORD *)this + 564);
    v9 = a3;
    v10 = a2;
    v11 = *v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v11,
      (unsigned int)&unk_18036B3F3,
      v6,
      v7,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateInputActivity(
    (CPartitionVerticalBlankScheduler *)((char *)this + 5440),
    a2,
    a3,
    **((_QWORD **)this + 564));
}
