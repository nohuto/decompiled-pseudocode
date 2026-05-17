/*
 * XREFs of _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0
 * Callers:
 *     _SignalStartWerSvc@0 @ 0x4B33AD08 (_SignalStartWerSvc@0.c)
 *     _RtlQueryWnfMetaNotification@20 @ 0x4B33BE50 (_RtlQueryWnfMetaNotification@20.c)
 *     _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0 (_RtlWaitForWnfMetaNotification@24.c)
 *     _RtlRaiseCustomSystemEventTrigger@4 @ 0x4B369C20 (_RtlRaiseCustomSystemEventTrigger@4.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtQueryWnfStateNameInformation(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
