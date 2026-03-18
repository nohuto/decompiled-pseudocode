/*
 * XREFs of TraceLoggingUserIsActive @ 0x1C00584A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@44@Z @ 0x1C0224A0C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

__int64 __fastcall TraceLoggingUserIsActive(int a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp-28h] BYREF
  __int64 v5; // [rsp+58h] [rbp-20h] BYREF
  __int64 v6[3]; // [rsp+60h] [rbp-18h] BYREF
  int v7; // [rsp+90h] [rbp+18h] BYREF
  int v8; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C032B3F8 > 5 && (qword_1C032B408 & 0x200000000000LL) != 0 )
  {
    result = qword_1C032B410 & 0x200000000000LL;
    if ( (qword_1C032B410 & 0x200000000000LL) == qword_1C032B410 )
    {
      v5 = a2;
      v7 = gSessionId;
      v8 = 12;
      v4 = a1;
      v6[0] = 50331648LL;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
               gSessionId,
               (unsigned int)&unk_1C02F1A06,
               a3,
               a1,
               (__int64)v6,
               (__int64)&v5,
               (__int64)&v4,
               (__int64)&v8,
               (__int64)&v7);
    }
  }
  return result;
}
