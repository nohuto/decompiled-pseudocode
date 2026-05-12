/*
 * XREFs of PortPassThroughFreeIrpEx @ 0x1C001F394
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     PortpCompleteRequestIrp @ 0x1C005A340 (PortpCompleteRequestIrp.c)
 *     PortPassThroughExSendAsync @ 0x1C007D8C0 (PortPassThroughExSendAsync.c)
 *     PortPassThroughSendAsync @ 0x1C007DF18 (PortPassThroughSendAsync.c)
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
