/*
 * XREFs of FsRtlpWaitingIrpCancelRoutine @ 0x1404EB640
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpCancelWaitingIrp @ 0x1404EAD78 (FsRtlpCancelWaitingIrp.c)
 */

void __fastcall FsRtlpWaitingIrpCancelRoutine(__int64 a1, __int64 a2)
{
  FsRtlpCancelWaitingIrp(a2, 0);
}
