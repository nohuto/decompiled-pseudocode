/*
 * XREFs of ?LogPolicySpatialOnSpeakerEndpointEnabled@@YAXPEBG0_N@Z @ 0x180122E08
 * Callers:
 *     EnableSpatialOnSpeakerEndpoint @ 0x18012236C (EnableSpatialOnSpeakerEndpoint.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18011904C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPE_ea_18011904C.c)
 */

void __fastcall LogPolicySpatialOnSpeakerEndpointEnabled(const unsigned __int16 *a1, const unsigned __int16 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // r10
  void *v6; // r11
  void *v7; // [rsp+40h] [rbp-18h] BYREF
  void *v8; // [rsp+48h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_18019D478 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_18019D478, 0x400000000000LL) )
    {
      v9 = v4;
      v7 = v5;
      v8 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
        v2,
        byte_18016B299,
        v3,
        v4,
        &v8,
        &v7,
        (__int64)&v9);
    }
  }
}
