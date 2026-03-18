/*
 * XREFs of sub_1C001CC30 @ 0x1C001CC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

struct _LIST_ENTRY **__fastcall sub_1C001CC30(char *Csq, PIRP Irp, PVOID PeekContext)
{
  struct _LIST_ENTRY **p_Blink; // r9
  char *v6; // rcx
  struct _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  v6 = Csq - 1464;
  if ( !v6 )
    sub_1C002DC78(MEMORY[0x4A0], Csq);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (struct _LIST_ENTRY *)*((_QWORD *)v6 + 181);
  while ( Flink != (struct _LIST_ENTRY *)(v6 + 1448) )
  {
    if ( !Flink )
      sub_1C002DC78(*((_QWORD *)v6 + 148), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (struct _LIST_ENTRY *)168 )
      sub_1C002DC78(*((_QWORD *)v6 + 148), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
