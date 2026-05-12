/*
 * XREFs of PortPassThroughFreeIrp @ 0x1C0001E3C
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C0058CD0 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C007C3CC (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007C9B8 (PortPassThroughSendAsync.c)
 * Callees:
 *     <none>
 */

void __fastcall PortPassThroughFreeIrp(PIRP Irp)
{
  struct _MDL *MdlAddress; // rcx

  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(Irp->MdlAddress);
  }
  Irp->MdlAddress = 0LL;
  IoFreeIrp(Irp);
}
