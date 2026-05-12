/*
 * XREFs of StorASyncScsiPassThroughCompletion @ 0x1C0031E30
 * Callers:
 *     PortPassThroughExSendAsync @ 0x1C007C3CC (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007C9B8 (PortPassThroughSendAsync.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall StorASyncScsiPassThroughCompletion(IRP *a1)
{
  return RaidCompleteRequestEx(a1, 0, a1->IoStatus.Status);
}
