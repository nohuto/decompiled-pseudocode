/*
 * XREFs of IopFreeReserveIrp @ 0x1404FEFA0
 * Callers:
 *     IopFreeIrp @ 0x140218F70 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1404FEF30 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45AD0;
    _InterlockedExchange(&dword_140C45AC8, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45AE8 )
  {
    v1 = (struct _KEVENT *)&word_140C45AF8;
    _InterlockedExchange(&dword_140C45AF0, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45B10 )
  {
    v1 = &stru_140C45B20;
    _InterlockedExchange(&dword_140C45B18, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
