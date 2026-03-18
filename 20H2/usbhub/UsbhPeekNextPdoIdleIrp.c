/*
 * XREFs of UsbhPeekNextPdoIdleIrp @ 0x1C001CC30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002DC78 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoIdleIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  char *v6; // rcx
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  v6 = Csq - 1464;
  if ( !v6 )
    UsbhTrapFatal_Dbg(MEMORY[0x4A0], Csq);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (_LIST_ENTRY *)*((_QWORD *)v6 + 181);
  while ( Flink != (_LIST_ENTRY *)(v6 + 1448) )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)v6 + 148), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)v6 + 148), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
