/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C00323B0
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007C3C0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007CA18 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
