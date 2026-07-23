/*
 * XREFs of IopFreeBackpocketIrp @ 0x140500A34
 * Callers:
 *     IopFreeReserveIrp @ 0x140500AA4 (IopFreeReserveIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall IopFreeBackpocketIrp(IRP *a1, char a2)
{
  struct _KEVENT *v2; // rcx
  LONG result; // eax

  if ( a1 == Irp )
  {
    qword_140C45DA8 = 0LL;
    _InterlockedExchange(&dword_140C45DA0, 0);
    v2 = (struct _KEVENT *)&word_140C45DB0;
    return KeSetEvent(v2, a2, 0);
  }
  if ( a1 == qword_140C45DC8 )
  {
    qword_140C45DD8 = 0LL;
    _InterlockedExchange(&dword_140C45DD0, 0);
    v2 = &stru_140C45DE0;
    return KeSetEvent(v2, a2, 0);
  }
  result = (int)qword_140C45DF8;
  *(_QWORD *)&a1->Type = qword_140C45DF8;
  qword_140C45DF8 = a1;
  return result;
}
