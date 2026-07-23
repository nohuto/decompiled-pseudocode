/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x180102620
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x18009D7C0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpRtlpCtSelfSubscribeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ZwSetEvent(*(HANDLE *)(a4 + 16), 0LL);
  return 0LL;
}
