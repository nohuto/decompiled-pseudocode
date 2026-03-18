/*
 * XREFs of ?RecordRenderGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_KI@Z @ 0x1800D7FFC
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18007C008 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@87734@Z @ 0x1801CFD2C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CFD2C.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RecordRenderGlitch(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int16 a3)
{
  __int64 v3; // r14
  char *v4; // rbx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx

  v3 = 10LL;
  v4 = (char *)this + 48;
  do
  {
    if ( !*((_DWORD *)v4 + 28) )
      goto LABEL_3;
    if ( a2 == *((_QWORD *)v4 + 20) )
    {
      v4[290] += a3;
      v4[289] = 1;
    }
    else
    {
      if ( a2 < *((_QWORD *)v4 + 20) )
        goto LABEL_3;
      ++*((_WORD *)v4 + 209);
      v7 = a3;
      *((_WORD *)v4 + 211) += a3;
      if ( *((_WORD *)v4 + 210) >= a3 )
        v7 = *((_WORD *)v4 + 210);
      *((_WORD *)v4 + 210) = v7;
    }
    if ( (unsigned int)dword_1803D0EB8 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803D0EB8, 2LL) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
          v8,
          &unk_18036D391);
    }
LABEL_3:
    v4 += 512;
    --v3;
  }
  while ( v3 );
}
