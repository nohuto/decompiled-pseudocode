/*
 * XREFs of IopFreeBackpocketIrp @ 0x1404FB65C
 * Callers:
 *     IopFreeReserveIrp @ 0x1404FB6CC (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45B08 = 0LL;
    _InterlockedExchange(&dword_140C45B00, 0);
    v2 = (struct _KEVENT *)&word_140C45B10;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45B28 )
  {
    qword_140C45B38 = 0LL;
    _InterlockedExchange(&dword_140C45B30, 0);
    v2 = &stru_140C45B40;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45B58;
  *(_QWORD *)&a1->Type = qword_140C45B58;
  qword_140C45B58 = a1;
  return result;
}
