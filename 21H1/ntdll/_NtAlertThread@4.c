/*
 * XREFs of _NtAlertThread@4 @ 0x4B2F3070
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtAlertThread(int a1)
{
  return Wow64SystemServiceCall();
}
