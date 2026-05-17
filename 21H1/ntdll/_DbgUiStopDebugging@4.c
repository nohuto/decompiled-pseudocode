/*
 * XREFs of _DbgUiStopDebugging@4 @ 0x4B32DBE0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwRemoveProcessDebug@8 @ 0x4B2F4090 (_ZwRemoveProcessDebug@8.c)
 */

int __stdcall DbgUiStopDebugging(int a1)
{
  return ZwRemoveProcessDebug(a1, (int)NtCurrentTeb()->DbgSsReserved[1]);
}
