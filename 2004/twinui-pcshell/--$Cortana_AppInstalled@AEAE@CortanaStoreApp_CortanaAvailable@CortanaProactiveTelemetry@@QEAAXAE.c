/*
 * XREFs of ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1800A2E4C
 * Callers:
 *     ?CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z @ 0x1801FA6F8 (-CheckCortanaAvailability@CortanaAvailability@@YAJPEAE@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004F918 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1801BA6E8 (-Provider@CortanaProactiveLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CortanaProactiveTelemetry::CortanaStoreApp_CortanaAvailable::Cortana_AppInstalled<unsigned char &>(
        __int64 a1,
        _BYTE *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // r8
  bool v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = CortanaProactiveLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v7 = *(_QWORD *)(a1 + 48);
      v9 = *a2 != 0;
      v10 = 0x1000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                     v5,
                     byte_1805068D4,
                     (const GUID *)(v7 + 8),
                     v6,
                     (__int64)&v9,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
