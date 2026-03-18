/*
 * XREFs of ACPIInitResetDeviceExtension @ 0x1C002CD00
 * Callers:
 *     ACPIFilterFastIoDetachCallback @ 0x1C002CC50 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CFA4 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 *     ACPIDispatchIrpDepRemoveDevice @ 0x1C004DE00 (ACPIDispatchIrpDepRemoveDevice.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0019678 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIInternalInterruptPolarityCacheCleanup @ 0x1C002CF08 (ACPIInternalInterruptPolarityCacheCleanup.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C002CF40 (PnpiCleanupForceActiveBothInterrupts.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002CF70 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00ACF44 (AcpiArblibFreeArbiterInstance.c)
 */

void __fastcall ACPIInitResetDeviceExtension(ULONG_PTR BugCheckParameter4)
{
  struct _DEVICE_OBJECT *v2; // r12
  KIRQL v3; // r13
  __int64 v4; // rcx
  void *v5; // r14
  void *v6; // rsi
  void *v7; // rdi
  struct _DEVICE_OBJECT *v8; // rbp
  __int64 v9; // r15
  PVOID *v10; // rbx
  void *v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+30h] [rbp-38h]

  v14 = 0LL;
  v15 = 0LL;
  v2 = 0LL;
  ACPIBuildProcessNotifyPepDeleteDevice(BugCheckParameter4, 0LL);
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v4 = *(_QWORD *)(BugCheckParameter4 + 8);
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v11 = *(void **)(BugCheckParameter4 + 736);
      if ( v11 )
        ObfDereferenceObject(v11);
    }
    else
    {
      v2 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 736);
    }
  }
  PnpiCleanupForceActiveBothInterrupts(BugCheckParameter4);
  ACPIInternalInterruptPolarityCacheCleanup(BugCheckParameter4);
  v5 = *(void **)(BugCheckParameter4 + 648);
  if ( v5 )
    *(_QWORD *)(BugCheckParameter4 + 648) = 0LL;
  v6 = *(void **)(BugCheckParameter4 + 632);
  if ( v6 )
    *(_QWORD *)(BugCheckParameter4 + 632) = 0LL;
  v7 = *(void **)(BugCheckParameter4 + 640);
  if ( v7 )
    *(_QWORD *)(BugCheckParameter4 + 640) = 0LL;
  v8 = *(struct _DEVICE_OBJECT **)(BugCheckParameter4 + 728);
  v9 = 3LL;
  if ( !v8 )
    goto LABEL_13;
  v8->DeviceExtension = 0LL;
  *(_QWORD *)(BugCheckParameter4 + 728) = 0LL;
  if ( (*(_QWORD *)(BugCheckParameter4 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(BugCheckParameter4 + 184) )
  {
    v12 = 3LL;
    v13 = (_QWORD *)(BugCheckParameter4 + 192);
    do
    {
      *(_QWORD *)((char *)v13 + (_QWORD)&v14 - BugCheckParameter4 - 192) = *v13;
      *v13++ = 0LL;
      --v12;
    }
    while ( v12 );
  }
  if ( ACPIInitDereferenceDeviceExtensionLocked(BugCheckParameter4) )
  {
    v6 = 0LL;
    v7 = 0LL;
    v5 = 0LL;
  }
  else
  {
LABEL_13:
    *(_QWORD *)(BugCheckParameter4 + 736) = 0LL;
    *(_QWORD *)(BugCheckParameter4 + 744) = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 960), 0xFFFFFFFFFFFFFFBFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 960), 0xFFFFFFFFDFFFFFFFuLL);
    if ( (*(_BYTE *)(BugCheckParameter4 + 8) & 1) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter4 + 8), 0xFFFFFFFFFFFFFC00uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 8uLL);
      _InterlockedOr64((volatile signed __int64 *)(BugCheckParameter4 + 8), 4uLL);
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v3);
  v10 = (PVOID *)&v14;
  do
  {
    if ( *v10 )
      AcpiArblibFreeArbiterInstance(*v10);
    ++v10;
    --v9;
  }
  while ( v9 );
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v2 )
    IoDetachDevice(v2);
  if ( v8 )
    IoDeleteDevice(v8);
}
