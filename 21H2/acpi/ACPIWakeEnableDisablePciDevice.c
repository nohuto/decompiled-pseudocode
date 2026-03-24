/*
 * XREFs of ACPIWakeEnableDisablePciDevice @ 0x1C002F754
 * Callers:
 *     ACPIWakeEnableDisableAsync @ 0x1C002F564 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWaitWakeEnableOnPowerUp @ 0x1C0061880 (ACPIWaitWakeEnableOnPowerUp.c)
 *     ACPIWakeDisableAsync @ 0x1C00619AC (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061EE0 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIWakeEnableDisablePciDevice(__int64 a1, char a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx
  KIRQL v6; // di
  PVOID v7; // rdx

  if ( PciPmeInterfaceInstantiated )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v5 = *(_QWORD *)(a1 + 744);
    v6 = v4;
    if ( v5 )
    {
      if ( PciPmeInterfaceInstantiated )
      {
        v7 = PciPmeInterface;
        LOBYTE(v7) = a2;
        (*((void (__fastcall **)(__int64, PVOID))PciPmeInterface + 6))(v5, v7);
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v6);
  }
}
