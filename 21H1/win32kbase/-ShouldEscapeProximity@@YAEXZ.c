/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C0125CDC
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C005BCE0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1C0124EF0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1)
{
  char v1; // di
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v7; // [rsp+50h] [rbp-10h] BYREF
  __int64 v8; // [rsp+58h] [rbp-8h] BYREF
  char v9; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v12; // [rsp+98h] [rbp+38h] BYREF

  v1 = 0;
  v2 = MEMORY[0xFFFFF78000000008];
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    if ( v2 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v1 = 1;
    }
  }
  if ( (unsigned int)dword_1C0247378 > 5 && tlgKeywordOn((__int64)&dword_1C0247378, 0x400000000000LL) )
  {
    v10 = gProximityEscapeCount;
    v11 = gProximityScenarioCount;
    v12 = gProximityPowerPressCount;
    v7 = v2;
    v8 = v4;
    v9 = v1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v3,
      byte_1C0219E63,
      v4,
      v5,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v7);
  }
  gProximityLastPowerPressTime = v2;
  return v1;
}
