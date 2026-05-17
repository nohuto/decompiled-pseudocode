/*
 * XREFs of _RtlQueueApcWow64Thread@20 @ 0x4B33A120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlQueueApcWow64Thread(int a1, int a2, int a3, int a4, int a5)
{
  return NtQueueApcThread(a1, a2, a3, a4, a5);
}
