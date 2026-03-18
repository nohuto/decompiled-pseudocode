/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x140887A30
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
