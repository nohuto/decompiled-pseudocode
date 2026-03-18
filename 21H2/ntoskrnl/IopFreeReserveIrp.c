/*
 * XREFs of IopFreeReserveIrp @ 0x140556A74
 * Callers:
 *     IopFreeIrp @ 0x140348640 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140556A04 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C47010;
    _InterlockedExchange(&dword_140C47008, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C47028 )
  {
    v1 = (struct _KEVENT *)&word_140C47038;
    _InterlockedExchange(&dword_140C47030, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C47050 )
  {
    v1 = &stru_140C47060;
    _InterlockedExchange(&dword_140C47058, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
