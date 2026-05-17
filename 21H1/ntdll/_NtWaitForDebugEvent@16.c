/*
 * XREFs of _NtWaitForDebugEvent@16 @ 0x4B2F4690
 * Callers:
 *     _DbgUiWaitStateChange@8 @ 0x4B32DC10 (_DbgUiWaitStateChange@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtWaitForDebugEvent(int a1, int a2, int a3, int a4)
{
  return Wow64SystemServiceCall();
}
