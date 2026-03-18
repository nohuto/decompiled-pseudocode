/*
 * XREFs of ACPIEcServiceDevice @ 0x1C0054200
 * Callers:
 *     ACPIEcQueueEcIrp @ 0x1C0053440 (ACPIEcQueueEcIrp.c)
 *     AcpiEcCommonDpcHandler @ 0x1C00535C4 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcWatchdogDpc @ 0x1C0054920 (ACPIEcWatchdogDpc.c)
 * Callees:
 *     ACPIEcMaskInterrupt @ 0x1C0053628 (ACPIEcMaskInterrupt.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C0053670 (ACPIEcUnmaskInterrupt.c)
 *     ACPIEcLogAction @ 0x1C0053FA4 (ACPIEcLogAction.c)
 *     ACPIEcServiceIoLoop @ 0x1C0054314 (ACPIEcServiceIoLoop.c)
 *     ACPIEcUnloadPending @ 0x1C00AED10 (ACPIEcUnloadPending.c)
 */

void __fastcall ACPIEcServiceDevice(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // al
  bool v4; // zf
  KIRQL v5; // si

  if ( *(_BYTE *)(a1 + 121) <= 1u )
  {
    v2 = (KSPIN_LOCK *)(a1 + 88);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    v4 = *(_BYTE *)(a1 + 456) == 0;
    v5 = v3;
    *(_BYTE *)(a1 + 457) = 1;
    if ( v4 )
    {
      v4 = *(_BYTE *)(a1 + 458) == 0;
      *(_BYTE *)(a1 + 456) = 1;
      if ( v4 )
        goto LABEL_5;
      *(_BYTE *)(a1 + 458) = 0;
      ACPIEcLogAction(a1, 0x60u, 0);
      ACPIEcMaskInterrupt(a1);
      while ( *(_BYTE *)(a1 + 457) )
      {
LABEL_5:
        *(_BYTE *)(a1 + 457) = 0;
        KeReleaseSpinLock(v2, v5);
        ACPIEcServiceIoLoop(a1);
        v5 = KeAcquireSpinLockRaiseToDpc(v2);
      }
      v4 = *(_BYTE *)(a1 + 121) == 0;
      *(_BYTE *)(a1 + 456) = 0;
      if ( !v4 )
        ACPIEcUnloadPending(a1);
      if ( !*(_BYTE *)(a1 + 458) )
      {
        *(_BYTE *)(a1 + 458) = 1;
        ACPIEcLogAction(a1, 0x70u, 0);
        ACPIEcUnmaskInterrupt(a1);
      }
    }
    KeReleaseSpinLock(v2, v5);
  }
}
