/*
 * XREFs of sub_1800633D0 @ 0x1800633D0
 * Callers:
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800633D0(__int64 a1, void *a2, unsigned int a3)
{
  return a3 >= 0xC && a3 == RtlLengthSid(a2) && RtlValidSid(a2);
}
