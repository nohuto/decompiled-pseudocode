/*
 * XREFs of IopFreeBackpocketIrp @ 0x140500AB4
 * Callers:
 *     IopFreeReserveIrp @ 0x140500B24 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45C68 = 0LL;
    _InterlockedExchange(&dword_140C45C60, 0);
    v2 = (struct _KEVENT *)&word_140C45C70;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45C88 )
  {
    qword_140C45C98 = 0LL;
    _InterlockedExchange(&dword_140C45C90, 0);
    v2 = &stru_140C45CA0;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45CB8;
  *(_QWORD *)&a1->Type = qword_140C45CB8;
  qword_140C45CB8 = a1;
  return result;
}
