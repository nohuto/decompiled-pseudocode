/*
 * XREFs of _RtlEnumProcessHeaps@8 @ 0x4B356920
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 */

int __stdcall RtlEnumProcessHeaps(int a1, int a2)
{
  return RtlpEnumProcessHeaps(0);
}
