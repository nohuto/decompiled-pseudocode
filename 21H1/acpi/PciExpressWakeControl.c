/*
 * XREFs of PciExpressWakeControl @ 0x1C005A440
 * Callers:
 *     <none>
 * Callees:
 *     WRITE_PM1_ENABLE @ 0x1C0026750 (WRITE_PM1_ENABLE.c)
 */

void __fastcall PciExpressWakeControl(__int64 a1, char a2)
{
  KIRQL v3; // di

  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPm1EnableRegisterLock);
  if ( a2 )
    *((_WORD *)AcpiInformation + 56) &= ~0x4000u;
  else
    *((_WORD *)AcpiInformation + 56) |= 0x4000u;
  WRITE_PM1_ENABLE(*((_WORD *)AcpiInformation + 56));
  KeReleaseSpinLock(&AcpiPm1EnableRegisterLock, v3);
}
