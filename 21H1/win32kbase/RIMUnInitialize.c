/*
 * XREFs of RIMUnInitialize @ 0x1C004F110
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0128480 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1B4 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 RIMUnInitialize()
{
  char *v0; // rdx
  struct _LIST_ENTRY *v1; // rcx
  __int64 v2; // rcx

  if ( gbRIMInitialized )
  {
    if ( ghModHidParse && *((_QWORD *)ghModHidParse + 3) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModHidParse + 24, 8uLL);
    dumpLeaks(&gObRimList, "RIMObj leaks");
    dumpRimDevLeaksAndCleanup(v1, v0);
    dumpLeaks(&gObRimInputObserverList, "RIMInputObserver leaks");
    if ( (_UNKNOWN *)RawInputManagerObject::gHidRequestTable != &RawInputManagerObject::gHidRequestTable )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    if ( (__int64 *)qword_1C0256380 != &qword_1C0256380 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    if ( (__int64 *)qword_1C0256390 != &qword_1C0256390 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  }
  return 0LL;
}
