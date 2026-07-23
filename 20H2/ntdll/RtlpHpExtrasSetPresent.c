/*
 * XREFs of RtlpHpExtrasSetPresent @ 0x180069DE4
 * Callers:
 *     RtlpHpSegReAlloc @ 0x1800271D0 (RtlpHpSegReAlloc.c)
 *     RtlpHpExtrasAppend @ 0x18010E508 (RtlpHpExtrasAppend.c)
 *     RtlpHpReallocMove @ 0x18010E6F0 (RtlpHpReallocMove.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x180002B78 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpSegSetExtraPresent @ 0x180069E58 (RtlpHpSegSetExtraPresent.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x180084CBC (RtlpHpLargeAllocSetExtraPresent.c)
 */

__int64 __fastcall RtlpHpExtrasSetPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx
  __int64 v8; // rax

  v3 = 0;
  if ( !(_WORD)a2 )
  {
    v8 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((unsigned __int64)(a2 - qword_18016DC48) >> 20));
    if ( !v8 )
      return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
    v3 = v8 - 1;
  }
  if ( v3 != 2 )
    return RtlpHpSegSetExtraPresent(a1 + 192LL * v3 + 256, a2);
  return RtlpHpLargeAllocSetExtraPresent(a1, a2, a3);
}
