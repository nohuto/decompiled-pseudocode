/*
 * XREFs of ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C011E9DC
 * Callers:
 *     ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C0106840 (-ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023344 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C008B108 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@.c)
 */

void __fastcall NdisTraceLoggingLogoFailure(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 *v4; // r10
  unsigned __int16 *v5; // [rsp+40h] [rbp-18h] BYREF
  int v6; // [rsp+60h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v6 = a1;
  if ( (unsigned int)dword_1C00E3108 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C00E3108, 0x400000000000LL) )
    {
      v7 = v3;
      v5 = v4;
      v6 = 1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        v1,
        byte_1C00CE3B8,
        v2,
        v3,
        (__int64)&v6,
        &v5,
        (__int64)&v7);
    }
  }
}
