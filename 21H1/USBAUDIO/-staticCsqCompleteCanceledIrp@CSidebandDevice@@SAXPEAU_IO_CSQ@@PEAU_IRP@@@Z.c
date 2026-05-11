/*
 * XREFs of ?staticCsqCompleteCanceledIrp@CSidebandDevice@@SAXPEAU_IO_CSQ@@PEAU_IRP@@@Z @ 0x1C000E200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 */

void __fastcall CSidebandDevice::staticCsqCompleteCanceledIrp(PIO_CSQ Csq, PIRP Irp)
{
  Irp->IoStatus.Status = -1073741536;
  Irp->IoStatus.Information = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0LL,
      9u,
      0x8Au,
      (__int64)&WPP_7785e2eca0573873336158315744df4b_Traceguids);
  IofCompleteRequest(Irp, 0);
}
