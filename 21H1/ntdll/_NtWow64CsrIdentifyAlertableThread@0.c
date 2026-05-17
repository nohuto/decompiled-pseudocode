/*
 * XREFs of _NtWow64CsrIdentifyAlertableThread@0 @ 0x4B2F4700
 * Callers:
 *     _CsrIdentifyAlertableThread@0 @ 0x4B33E880 (_CsrIdentifyAlertableThread@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CsrIdentifyAlertableThread()
{
  return Wow64SystemServiceCall();
}
