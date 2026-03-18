/*
 * XREFs of FsRtlpNotifyOplockBreakComplete @ 0x140888D50
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 */

void __fastcall FsRtlpNotifyOplockBreakComplete(__int64 a1, IRP *a2)
{
  IofCompleteRequest(a2, 1);
}
