/*
 * XREFs of ?StopVSync@BLTQUEUE_HW_VSYNC_SOURCE@@UEAAXXZ @ 0x1C0300410
 * Callers:
 *     <none>
 * Callees:
 *     ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C02FFC6C (-StopHwVSync@DXGDODPRESENT@@QEAAXXZ.c)
 */

void __fastcall BLTQUEUE_HW_VSYNC_SOURCE::StopVSync(BLTQUEUE_HW_VSYNC_SOURCE *this)
{
  KeCancelTimer((PKTIMER)((char *)this + 16));
  KeFlushQueuedDpcs();
  DXGDODPRESENT::StopHwVSync(*((struct _KTHREAD ***)this + 1));
}
