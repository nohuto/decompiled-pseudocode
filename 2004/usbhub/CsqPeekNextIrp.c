/*
 * XREFs of CsqPeekNextIrp @ 0x1C001C6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

struct _LIST_ENTRY **__fastcall CsqPeekNextIrp(PIO_CSQ Csq, PIRP Irp, PVOID PeekContext)
{
  struct _LIST_ENTRY **p_Blink; // r9
  struct _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (struct _LIST_ENTRY *)Csq[-1].CsqCompleteCanceledIrp;
  while ( Flink != (struct _LIST_ENTRY *)&Csq[-1].CsqCompleteCanceledIrp )
  {
    if ( !Flink )
      sub_1C002DC78(Csq[-18].ReservePointer, Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (struct _LIST_ENTRY *)168 )
      sub_1C002DC78(Csq[-18].ReservePointer, Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
