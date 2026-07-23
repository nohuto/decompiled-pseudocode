/*
 * XREFs of RtlDestroyEnvironment @ 0x18007E140
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

NTSTATUS __cdecl RtlDestroyEnvironment(PVOID Environment)
{
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  return 0;
}
