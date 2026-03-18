/*
 * XREFs of ?ShouldEscapeProximity@@YAEXZ @ 0x1C011FD4C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00646C0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@554@Z @ 0x1C011EFA0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U2@@-$.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall ShouldEscapeProximity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+58h] [rbp-8h] BYREF
  char v12; // [rsp+80h] [rbp+20h] BYREF
  unsigned int v13; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+38h] BYREF

  v4 = 0;
  v5 = MEMORY[0xFFFFF78000000008];
  ++gProximityPowerPressCount;
  if ( gProximityLastPowerPressTime != -1LL )
  {
    if ( MEMORY[0xFFFFF78000000008] <= gProximityLastPowerPressTime )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, -1LL, a4);
    if ( v5 - gProximityLastPowerPressTime < 0x1C9C380 )
    {
      ++gProximityEscapeCount;
      v4 = 1;
    }
  }
  if ( (unsigned int)dword_1C0241378 > 5 && tlgKeywordOn((__int64)&dword_1C0241378, 0x400000000000LL) )
  {
    v13 = gProximityEscapeCount;
    v14 = gProximityScenarioCount;
    v15 = gProximityPowerPressCount;
    v10 = v5;
    v11 = v7;
    v12 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      byte_1C02142F3,
      v7,
      v8,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v10);
  }
  gProximityLastPowerPressTime = v5;
  return v4;
}
