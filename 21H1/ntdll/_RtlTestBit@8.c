/*
 * XREFs of _RtlTestBit@8 @ 0x4B307000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __stdcall RtlTestBit(int a1, unsigned int a2)
{
  return (*(char *)((a2 >> 3) + *(_DWORD *)(a1 + 4)) >> (a2 & 7)) & 1;
}
