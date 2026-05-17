/*
 * XREFs of _RtlpHpSegLfhAllocate@20 @ 0x4B37BCC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpSegSubAllocate@20 @ 0x4B37D9D6 (_RtlpHpSegSubAllocate@20.c)
 */

int __stdcall RtlpHpSegLfhAllocate(int a1, int a2, char a3, int a4, int a5)
{
  return RtlpHpSegSubAllocate(a3 & 1 | 0x8000000, a4, a5);
}
