/*
 * XREFs of ?TraceLoggingPTPKeyToGestureTiming@@YAX_J0PEBUtagTPTELEMTIMINGS@@00@Z @ 0x1C0225C4C
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C0226590 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1C02251E0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 */

void __fastcall TraceLoggingPTPKeyToGestureTiming(
        __int64 a1,
        __int64 a2,
        const struct tagTPTELEMTIMINGS *a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // [rsp+80h] [rbp+1Fh] BYREF
  int v6; // [rsp+84h] [rbp+23h] BYREF
  int v7; // [rsp+88h] [rbp+27h] BYREF
  int v8; // [rsp+8Ch] [rbp+2Bh] BYREF
  int v9; // [rsp+90h] [rbp+2Fh] BYREF
  int v10; // [rsp+94h] [rbp+33h] BYREF
  int v11; // [rsp+98h] [rbp+37h] BYREF
  int v12; // [rsp+9Ch] [rbp+3Bh] BYREF
  int v13; // [rsp+A0h] [rbp+3Fh] BYREF
  int v14; // [rsp+A4h] [rbp+43h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+47h] BYREF

  if ( (unsigned int)dword_1C032B3F8 > 5
    && (qword_1C032B408 & 0x200000000000LL) != 0
    && (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
  {
    v15 = 0x1000000LL;
    v5 = 1000 * a4 / a5;
    v6 = *((_DWORD *)a3 + 11);
    v7 = *((_DWORD *)a3 + 10);
    v8 = 1000LL * *((_QWORD *)a3 + 4) / a5;
    v9 = 1000LL * *((_QWORD *)a3 + 3) / a5;
    v10 = 1000LL * *((_QWORD *)a3 + 2) / a5;
    v11 = 1000LL * *((_QWORD *)a3 + 1) / a5;
    v12 = 1000LL * *(_QWORD *)a3 / a5;
    v13 = 1000 * a2 / a5;
    v14 = 1000 * a1 / a5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      a5,
      byte_1C02F1D8A,
      (__int64)a3,
      a4,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
