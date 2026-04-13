/*
 * XREFs of _McGenEventUnregister_EventUnregister@4 @ 0x10003396
 * Callers:
 *     _TelSetLocalTelemetrySetting@12 @ 0x100024D0 (_TelSetLocalTelemetrySetting@12.c)
 * Callees:
 *     <none>
 */

int McGenEventUnregister_EventUnregister()
{
  int result; // eax

  result = HIDWORD(MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context) | MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context;
  if ( MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context )
  {
    result = EventUnregister(MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context);
    MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context = 0LL;
  }
  return result;
}
