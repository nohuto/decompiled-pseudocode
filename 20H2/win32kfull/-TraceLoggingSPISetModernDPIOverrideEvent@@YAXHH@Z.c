/*
 * XREFs of ?TraceLoggingSPISetModernDPIOverrideEvent@@YAXHH@Z @ 0x1C022503C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0224060 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingSPISetModernDPIOverrideEvent(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  v4 = a1;
  if ( (unsigned int)dword_1C032A3F8 > 5
    && (qword_1C032A408 & 0x200000000000LL) != 0
    && (qword_1C032A410 & 0x200000000000LL) == qword_1C032A410 )
  {
    v4 = a2;
    v5 = 0xFFFF;
    v6 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a1,
      byte_1C02F1743,
      0x200000000000LL,
      a4,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4);
  }
}
