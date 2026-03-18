/*
 * XREFs of sub_1C00591D0 @ 0x1C00591D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00591D0(struct _IO_CSQ *Csq, PIRP Irp)
{
  struct _LIST_ENTRY *ReservePointer; // rax
  PIO_CSQ_COMPLETE_CANCELED_IRP *p_CsqCompleteCanceledIrp; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx

  ReservePointer = (struct _LIST_ENTRY *)Csq[-1].ReservePointer;
  p_CsqCompleteCanceledIrp = &Csq[-1].CsqCompleteCanceledIrp;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  if ( (PIO_CSQ_COMPLETE_CANCELED_IRP *)ReservePointer->Flink != p_CsqCompleteCanceledIrp )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)p_CsqCompleteCanceledIrp;
  p_ListEntry->ListEntry.Blink = ReservePointer;
  ReservePointer->Flink = &p_ListEntry->ListEntry;
  p_CsqCompleteCanceledIrp[1] = (PIO_CSQ_COMPLETE_CANCELED_IRP)p_ListEntry;
}
