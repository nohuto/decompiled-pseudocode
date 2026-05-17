/*
 * XREFs of _DbgUiContinue@8 @ 0x4B32D850
 * Callers:
 *     <none>
 * Callees:
 *     _ZwDebugContinue@12 @ 0x4B2F3660 (_ZwDebugContinue@12.c)
 */

int __stdcall DbgUiContinue(int a1, int a2)
{
  return ZwDebugContinue((int)NtCurrentTeb()->DbgSsReserved[1], a1, a2);
}
