/*
 * XREFs of IopFreeBackpocketIrp @ 0x1404FB00C
 * Callers:
 *     IopFreeReserveIrp @ 0x1404FB07C (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45C88 = 0LL;
    _InterlockedExchange(&dword_140C45C80, 0);
    v2 = (struct _KEVENT *)&word_140C45C90;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45CA8 )
  {
    qword_140C45CB8 = 0LL;
    _InterlockedExchange(&dword_140C45CB0, 0);
    v2 = &stru_140C45CC0;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45CD8;
  *(_QWORD *)&a1->Type = qword_140C45CD8;
  qword_140C45CD8 = a1;
  return result;
}
