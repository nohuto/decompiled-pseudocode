/*
 * XREFs of ?RimDeviceHidData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C015B020
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C00A324C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C014534C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InputTraceLogging::RIM::RimDeviceHidData(const struct RIMDEV *a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rax
  int v4; // edx
  int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C024C960 > 4 && tlgKeywordOn((__int64)&dword_1C024C960, 256LL) )
  {
    v3 = *(_QWORD *)(v1 + 472);
    v4 = *(unsigned __int16 *)(v3 + 16);
    v5 = *(unsigned __int16 *)(v3 + 18);
    v6 = v4;
    v7 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024C960,
      byte_1C021BB74,
      v1,
      v2,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5);
  }
}
