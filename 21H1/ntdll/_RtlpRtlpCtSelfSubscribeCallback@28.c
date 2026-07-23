/*
 * XREFs of _RtlpRtlpCtSelfSubscribeCallback@28 @ 0x4B369F70
 * Callers:
 *     <none>
 * Callees:
 *     _NtSetEvent@8 @ 0x4B2F2A40 (_NtSetEvent@8.c)
 */

int __stdcall RtlpRtlpCtSelfSubscribeCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  NtSetEvent(*(HANDLE *)(a5 + 8), 0);
  return 0;
}
