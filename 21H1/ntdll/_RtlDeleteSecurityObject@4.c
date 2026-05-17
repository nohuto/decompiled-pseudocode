/*
 * XREFs of _RtlDeleteSecurityObject@4 @ 0x4B2EC5F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlDeleteSecurityObject(int *a1)
{
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *a1);
  return 0;
}
