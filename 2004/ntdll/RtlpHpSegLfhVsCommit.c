/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180023040
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x180023180 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18010EA18 (RtlpHpSegGetDescriptorValidateSafe.c)
 */

__int64 __fastcall RtlpHpSegLfhVsCommit(int a1)
{
  if ( (RtlpHpAppCompatFlags & 1) != 0 )
    RtlpHpSegGetDescriptorValidateSafe();
  return RtlpHpSegPageRangeCommit(a1, 0, 0LL);
}
