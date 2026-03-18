/*
 * XREFs of RtlpCtSelfSubscribe @ 0x140916290
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x1405893F0 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
