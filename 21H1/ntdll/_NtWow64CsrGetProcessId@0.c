/*
 * XREFs of _NtWow64CsrGetProcessId@0 @ 0x4B2F4770
 * Callers:
 *     _CsrGetProcessId@0 @ 0x4B33E870 (_CsrGetProcessId@0.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWow64CsrGetProcessId()
{
  return Wow64SystemServiceCall();
}
