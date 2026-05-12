/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C001D4CC
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0059480 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C007C3C0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007CA18 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrpEx(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  IoFreeIrp(Irp);
}
