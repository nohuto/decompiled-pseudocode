/*
 * XREFs of UsbhFdoReturnHubCount @ 0x1C0030C08
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0009690 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C0014E84 (UsbhDecPdoIoCount.c)
 *     UsbhFdoChainIrp @ 0x1C0029E7C (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnHubCount(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // r10
  unsigned int v8; // ebx

  v6 = FdoExt(a1);
  PdoExt(a2);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( (v6[640] & 1) != 0 )
  {
    v8 = 0;
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    else
      v8 = -1073741811;
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
  }
  else
  {
    if ( SecurityContext )
      ++LODWORD(SecurityContext->SecurityQos);
    v8 = UsbhFdoChainIrp(a1, a3);
  }
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v8;
}
