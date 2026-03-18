/*
 * XREFs of RtlpCtSelfSubscribe @ 0x140915020
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x140588D00 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
