/*
 * XREFs of _RtlDestroyEnvironment@4 @ 0x4B2AB970
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlDestroyEnvironment(int a1)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0;
}
