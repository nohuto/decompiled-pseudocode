/*
 * XREFs of IopFreeReserveIrp @ 0x1404FB07C
 * Callers:
 *     IopCompleteRequest @ 0x1402497C0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402541E0 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x1404FB00C (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45C10;
    _InterlockedExchange(&dword_140C45C08, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45C28 )
  {
    v1 = (struct _KEVENT *)&word_140C45C38;
    _InterlockedExchange(&dword_140C45C30, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45C50 )
  {
    v1 = &stru_140C45C60;
    _InterlockedExchange(&dword_140C45C58, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
