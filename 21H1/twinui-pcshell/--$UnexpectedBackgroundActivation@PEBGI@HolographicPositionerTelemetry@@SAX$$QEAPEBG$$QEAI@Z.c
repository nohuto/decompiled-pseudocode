/*
 * XREFs of ??$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x18009BE6C
 * Callers:
 *     _LogEventWithApplicationViewData_unsigned_int_ @ 0x18009BEF8 (_LogEventWithApplicationViewData_unsigned_int_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18021ADB4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@HolographicPositionerProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18021F2AC (-Provider@HolographicPositionerProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall HolographicPositionerTelemetry::UnexpectedBackgroundActivation<unsigned short const *,unsigned int>(
        __int64 *a1,
        int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  int v5; // r9d
  int v6; // ecx
  __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v4 = HolographicPositionerProvider::Provider();
  if ( *(_DWORD *)v4 > 1u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 0x800000000000LL);
    if ( (_BYTE)v4 )
    {
      v6 = *a2;
      v8[0] = *a1;
      LODWORD(v9) = v6;
      v10 = 0x2000000LL;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                     v5,
                     (int)&dword_1804E105B,
                     (__int64)v8,
                     (__int64)&v9,
                     (__int64)&v10);
    }
  }
  return (char)v4;
}
