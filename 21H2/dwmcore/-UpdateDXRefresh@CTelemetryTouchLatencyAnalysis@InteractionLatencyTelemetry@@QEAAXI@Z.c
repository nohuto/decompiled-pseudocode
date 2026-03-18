/*
 * XREFs of ?UpdateDXRefresh@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXI@Z @ 0x180079E44
 * Callers:
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007C608 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8777@Z @ 0x1801CFFA0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CFFA0.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateDXRefresh(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        int a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx

  v3 = (_DWORD *)((char *)this + 48);
  v4 = 10LL;
  do
  {
    if ( v3[28] )
    {
      if ( !v3[106] )
        v3[106] = a2;
      v3[107] = a2;
      if ( (unsigned int)dword_1803D0EB8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 8LL) )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v5,
            &unk_18036C3CF);
      }
    }
    v3 += 128;
    --v4;
  }
  while ( v4 );
}
