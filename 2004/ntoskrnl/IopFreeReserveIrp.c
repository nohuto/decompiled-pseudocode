/*
 * XREFs of IopFreeReserveIrp @ 0x1404FB6CC
 * Callers:
 *     IopCompleteRequest @ 0x140285F60 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140290A60 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1404FB65C (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45A90;
    _InterlockedExchange(&dword_140C45A88, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45AA8 )
  {
    v1 = (struct _KEVENT *)&word_140C45AB8;
    _InterlockedExchange(&dword_140C45AB0, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45AD0 )
  {
    v1 = &stru_140C45AE0;
    _InterlockedExchange(&dword_140C45AD8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
