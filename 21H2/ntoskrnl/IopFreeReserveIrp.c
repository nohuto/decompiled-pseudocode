/*
 * XREFs of IopFreeReserveIrp @ 0x140500B24
 * Callers:
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140353570 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140500AB4 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45BF0;
    _InterlockedExchange(&dword_140C45BE8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45C08 )
  {
    v1 = (struct _KEVENT *)&word_140C45C18;
    _InterlockedExchange(&dword_140C45C10, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45C30 )
  {
    v1 = &stru_140C45C40;
    _InterlockedExchange(&dword_140C45C38, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
