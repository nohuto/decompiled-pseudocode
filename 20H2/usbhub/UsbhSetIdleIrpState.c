/*
 * XREFs of UsbhSetIdleIrpState @ 0x1C0018E80
 * Callers:
 *     UsbhCompletePdoIdleIrp @ 0x1C0018D98 (UsbhCompletePdoIdleIrp.c)
 *     UsbhIdleExIrp_IdleReady @ 0x1C0058574 (UsbhIdleExIrp_IdleReady.c)
 *     UsbhIdleIrp_CB_Canceled @ 0x1C00586E8 (UsbhIdleIrp_CB_Canceled.c)
 *     UsbhIdleIrp_CB_Complete @ 0x1C00587E4 (UsbhIdleIrp_CB_Complete.c)
 *     UsbhIdleIrp_CB_Pending @ 0x1C005890C (UsbhIdleIrp_CB_Pending.c)
 *     UsbhIdleIrp_Event @ 0x1C0058A58 (UsbhIdleIrp_Event.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0058BE0 (UsbhIdleIrp_NoIrp.c)
 *     UsbhIdleIrp_WaitWorker @ 0x1C0059038 (UsbhIdleIrp_WaitWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

void __fastcall UsbhSetIdleIrpState(__int64 a1, __int64 a2, int a3, int a4, KIRQL NewIrql)
{
  KSPIN_LOCK *v7; // rax
  __int64 v8; // rcx

  v7 = (KSPIN_LOCK *)PdoExt(a2);
  v8 = 4 * (*((unsigned int *)v7 + 447) + 56LL);
  LODWORD(v7[v8]) = a3;
  *((_DWORD *)v7 + 384) = a4;
  LODWORD(v7[v8 + 1]) = a4;
  *((_DWORD *)v7 + 447) = ((unsigned __int8)*((_DWORD *)v7 + 447) + 1) & 7;
  KeReleaseSpinLock(v7 + 256, NewIrql);
}
