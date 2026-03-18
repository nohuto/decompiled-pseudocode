/*
 * XREFs of IoMmuMarkDomainAsAttached @ 0x1C0056398
 * Callers:
 *     DpiAttachIoMmuDomain @ 0x1C02D188C (DpiAttachIoMmuDomain.c)
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
