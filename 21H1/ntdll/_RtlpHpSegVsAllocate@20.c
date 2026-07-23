/*
 * XREFs of _RtlpHpSegVsAllocate@20 @ 0x4B37DAB0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpSegSubAllocate@20 @ 0x4B37D9D6 (_RtlpHpSegSubAllocate@20.c)
 */

void *__stdcall RtlpHpSegVsAllocate(int a1, unsigned int a2, char a3, _DWORD *a4, _DWORD *a5)
{
  return RtlpHpSegSubAllocate(a1, a2, a3 & 1 | 0xC000000, a4, a5);
}
