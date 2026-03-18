/*
 * XREFs of IopFreeBackpocketIrp @ 0x1404FEF30
 * Callers:
 *     IopFreeReserveIrp @ 0x1404FEFA0 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45B48 = 0LL;
    _InterlockedExchange(&dword_140C45B40, 0);
    v2 = (struct _KEVENT *)&word_140C45B50;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45B68 )
  {
    qword_140C45B78 = 0LL;
    _InterlockedExchange(&dword_140C45B70, 0);
    v2 = &stru_140C45B80;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45B98;
  *(_QWORD *)&a1->Type = qword_140C45B98;
  qword_140C45B98 = a1;
  return result;
}
