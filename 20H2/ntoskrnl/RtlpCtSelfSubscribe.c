/*
 * XREFs of RtlpCtSelfSubscribe @ 0x14091BEC0
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14058CE20 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
