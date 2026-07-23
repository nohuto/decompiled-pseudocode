/*
 * XREFs of IopFreeReserveIrp @ 0x140500AA4
 * Callers:
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     IopFreeBackpocketIrp @ 0x140500A34 (IopFreeBackpocketIrp.c)
 */

LONG __fastcall IopFreeReserveIrp(IRP *a1)
{
  struct _KEVENT *v1; // rcx

  a1->AllocationFlags &= 0xDEu;
  if ( a1 == IopReserveIrps )
  {
    v1 = (struct _KEVENT *)&word_140C45D30;
    _InterlockedExchange(&dword_140C45D28, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45D48 )
  {
    v1 = (struct _KEVENT *)&word_140C45D58;
    _InterlockedExchange(&dword_140C45D50, 0);
    return KeSetEvent(v1, 1, 0);
  }
  if ( a1 == qword_140C45D70 )
  {
    v1 = &stru_140C45D80;
    _InterlockedExchange(&dword_140C45D78, 0);
    return KeSetEvent(v1, 1, 0);
  }
  return IopFreeBackpocketIrp(a1, 1);
}
