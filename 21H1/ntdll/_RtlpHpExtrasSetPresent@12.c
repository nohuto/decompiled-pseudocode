/*
 * XREFs of _RtlpHpExtrasSetPresent@12 @ 0x4B378497
 * Callers:
 *     _RtlpHpExtrasAppend@28 @ 0x4B378332 (_RtlpHpExtrasAppend@28.c)
 *     _RtlpHpReallocMove@16 @ 0x4B37981A (_RtlpHpReallocMove@16.c)
 *     _RtlpHpSegReAlloc@16 @ 0x4B37D316 (_RtlpHpSegReAlloc@16.c)
 * Callees:
 *     _RtlpHpLargeAllocSetExtraPresent@12 @ 0x4B37A17E (_RtlpHpLargeAllocSetExtraPresent@12.c)
 *     _RtlpHpSegSetExtraPresent@8 @ 0x4B37D8E7 (_RtlpHpSegSetExtraPresent@8.c)
 *     _RtlCSparseBitmapBitmaskRead@12 @ 0x4B37DCEF (_RtlCSparseBitmapBitmaskRead@12.c)
 */

int __fastcall RtlpHpExtrasSetPresent(int a1, int a2, int a3)
{
  int v5; // eax
  int v6; // ecx

  if ( (_WORD)a2 )
  {
    v6 = 0;
  }
  else
  {
    v5 = RtlCSparseBitmapBitmaskRead(a1);
    if ( !v5 )
      return RtlpHpLargeAllocSetExtraPresent(a3);
    v6 = v5 - 1;
  }
  if ( v6 == 2 )
    return RtlpHpLargeAllocSetExtraPresent(a3);
  return RtlpHpSegSetExtraPresent(a1 + ((v6 + 2) << 7), a2);
}
