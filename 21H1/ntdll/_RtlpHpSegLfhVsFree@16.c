/*
 * XREFs of _RtlpHpSegLfhVsFree@16 @ 0x4B37BE10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpSegFree@12 @ 0x4B37B8B6 (_RtlpHpSegFree@12.c)
 */

int __stdcall RtlpHpSegLfhVsFree(int a1, unsigned int a2, int a3, char a4)
{
  return RtlpHpSegFree(a1, a2, a4 & 1);
}
