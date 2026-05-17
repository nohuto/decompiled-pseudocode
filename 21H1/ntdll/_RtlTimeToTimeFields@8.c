/*
 * XREFs of _RtlTimeToTimeFields@8 @ 0x4B2DCCC0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTimeToTimeFields@12 @ 0x4B2DCCE0 (_RtlpTimeToTimeFields@12.c)
 */

int __stdcall RtlTimeToTimeFields(int a1, int a2)
{
  return RtlpTimeToTimeFields(a1, a2, 0);
}
