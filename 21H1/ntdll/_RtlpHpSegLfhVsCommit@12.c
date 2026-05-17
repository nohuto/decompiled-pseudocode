/*
 * XREFs of _RtlpHpSegLfhVsCommit@12 @ 0x4B37BD10
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpSegDescriptorValidate@8 @ 0x4B37B82D (_RtlpHpSegDescriptorValidate@8.c)
 *     _RtlpHpSegPageRangeCommit@24 @ 0x4B37CC3B (_RtlpHpSegPageRangeCommit@24.c)
 */

int __stdcall RtlpHpSegLfhVsCommit(int a1, int a2, unsigned int a3)
{
  int v3; // eax

  v3 = RtlpHpSegDescriptorValidate(a1, a2);
  return RtlpHpSegPageRangeCommit(
           (a2 - ((v3 - (v3 & *(_DWORD *)a1)) >> 4 << *(_BYTE *)(a1 + 4)) - ((unsigned int)v3 & *(_DWORD *)a1)) >> 12,
           a3 >> 12,
           0,
           0);
}
