/*
 * XREFs of _DbgUiSetThreadDebugObject@4 @ 0x4B32DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__stdcall DbgUiSetThreadDebugObject(void *a1)
{
  void *result; // eax

  result = a1;
  NtCurrentTeb()->DbgSsReserved[1] = a1;
  return result;
}
