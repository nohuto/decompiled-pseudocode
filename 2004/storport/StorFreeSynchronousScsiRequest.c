/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C001B5C8
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001B3F4 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001C180 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0047548 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047AA0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0049430 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C004A358 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004A610 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004A92C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeSynchronousScsiRequest(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  IoFreeIrp(Irp);
}
