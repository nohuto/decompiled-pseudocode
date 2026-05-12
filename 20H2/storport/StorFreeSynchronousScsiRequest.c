/*
 * XREFs of StorFreeSynchronousScsiRequest @ 0x1C001C268
 * Callers:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001C094 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001DF50 (RaidUnitLogSenseCommandSrb.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048358 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00488B0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C004A240 (RaidUnitAbortSrbCompletion.c)
 *     RaidUnitResetTarget @ 0x1C004B168 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B420 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B73C (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
