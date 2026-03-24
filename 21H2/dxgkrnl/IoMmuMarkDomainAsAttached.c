/*
 * XREFs of IoMmuMarkDomainAsAttached @ 0x1C00571E8
 * Callers:
 *     DpiAttachIoMmuDomain @ 0x1C02D1BC8 (DpiAttachIoMmuDomain.c)
 * Callees:
 *     <none>
 */

void __fastcall IoMmuMarkDomainAsAttached(PKSPIN_LOCK SpinLock)
{
  KIRQL v2; // al

  v2 = KeAcquireSpinLockRaiseToDpc(SpinLock);
  *((_DWORD *)SpinLock + 34) |= 2u;
  KeReleaseSpinLock(SpinLock, v2);
}
