/*
 * XREFs of _DbgUiSetThreadDebugObject@4 @ 0x4B32DBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl DbgUiSetThreadDebugObject(HANDLE DebugObject)
{
  NtCurrentTeb()->DbgSsReserved[1] = DebugObject;
}
