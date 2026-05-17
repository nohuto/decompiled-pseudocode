/*
 * XREFs of _RtlCancelTimer@8 @ 0x4B3851B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 */

int __stdcall RtlCancelTimer(int a1, int *a2)
{
  return RtlDeleteTimer(a1, a2, 0);
}
