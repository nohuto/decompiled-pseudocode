/*
 * XREFs of _ZwSuspendProcess@4 @ 0x4B2F4530
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSuspendProcess(int a1)
{
  return Wow64SystemServiceCall();
}
