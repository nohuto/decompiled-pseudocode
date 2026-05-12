/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0033230
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007D8C0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007DF18 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
