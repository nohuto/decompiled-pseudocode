/*
 * XREFs of _NtdllNtCurrentTeb@0 @ 0x4B333B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _TEB *NtdllNtCurrentTeb(void)
{
  return NtCurrentTeb();
}
