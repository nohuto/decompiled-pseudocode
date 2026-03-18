/*
 * XREFs of ?TraceLoggingPTPKeyToAATimeDeltas@@YAX_J000W4tagPTP_ACTION@@1@Z @ 0x1C0225B8C
 * Callers:
 *     TraceLoggingPTPAAPKeyPress @ 0x1C0226590 (TraceLoggingPTPAAPKeyPress.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444@Z @ 0x1C0225038 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

NTSTATUS __fastcall TraceLoggingPTPKeyToAATimeDeltas(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  NTSTATUS result; // eax
  int v7; // [rsp+60h] [rbp-20h] BYREF
  int v8; // [rsp+64h] [rbp-1Ch] BYREF
  int v9; // [rsp+68h] [rbp-18h] BYREF
  int v10; // [rsp+6Ch] [rbp-14h] BYREF
  int v11; // [rsp+70h] [rbp-10h] BYREF
  int v12; // [rsp+74h] [rbp-Ch] BYREF
  __int64 v13; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1C032B3F8 > 5 && (qword_1C032B408 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_1C032B410 & 0x400000000000LL) == qword_1C032B410 )
    {
      v7 = a6;
      v8 = a5;
      v11 = a2;
      v9 = a4;
      v10 = a3;
      v12 = a1;
      v13 = 0x1000000LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               a1,
               byte_1C02F1CFD,
               a3,
               a4,
               (__int64)&v13,
               (__int64)&v12,
               (__int64)&v11,
               (__int64)&v10,
               (__int64)&v9,
               (__int64)&v8,
               (__int64)&v7);
    }
  }
  return result;
}
