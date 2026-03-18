/*
 * XREFs of ?TraceLoggingLargeDeviceParallelCount@@YAXII@Z @ 0x1C013F0FC
 * Callers:
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017B81C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C013EFFC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall TraceLoggingLargeDeviceParallelCount()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2[3]; // [rsp+40h] [rbp-18h] BYREF
  int v3; // [rsp+70h] [rbp+18h] BYREF
  int v4; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1C0245170 > 5 && tlgKeywordOn((__int64)&dword_1C0245170, 0x400000000000LL) )
  {
    v3 = v0;
    v4 = v1;
    v2[0] = 2048LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0245170,
      byte_1C0214BDE,
      v0,
      v1,
      (__int64)v2,
      (__int64)&v4,
      (__int64)&v3);
  }
}
