/*
 * XREFs of RIMUnInitialize @ 0x1C005CC80
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C01224A0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD24 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C005CD68 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMUnInitialize()
{
  char *v0; // rdx
  struct _LIST_ENTRY *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( gbRIMInitialized )
  {
    if ( ghModHidParse && *((_QWORD *)ghModHidParse + 3) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModHidParse + 24, 8uLL);
    dumpLeaks(&gObRimList, "RIMObj leaks");
    dumpRimDevLeaksAndCleanup(v1, v0);
    dumpLeaks(&gObRimInputObserverList, "RIMInputObserver leaks");
    if ( (_UNKNOWN *)RawInputManagerObject::gHidRequestTable != &RawInputManagerObject::gHidRequestTable )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    if ( (__int64 *)qword_1C02503E0 != &qword_1C02503E0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    if ( (__int64 *)qword_1C02503F0 != &qword_1C02503F0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  }
  return 0LL;
}
