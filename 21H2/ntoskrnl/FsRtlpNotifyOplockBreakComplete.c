/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x14088BE40
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140243490 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
