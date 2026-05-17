/*
 * XREFs of _RtlFreeSid@4 @ 0x4B2EA720
 * Callers:
 *     <none>
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

int __stdcall RtlFreeSid(int a1)
{
  return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1) == 0 ? a1 : 0;
}
