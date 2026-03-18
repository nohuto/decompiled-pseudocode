/*
 * XREFs of ACPIDispatchIrpDepPdoQueryID @ 0x1C0010570
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     AcpiEvaluateBiosMethodsOnPciRootBus @ 0x1C0011250 (AcpiEvaluateBiosMethodsOnPciRootBus.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C001174C (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C480 (ACPIDevicePowerFlushQueue.c)
 *     AMLIIsNamedChildPresent @ 0x1C001EFC0 (AMLIIsNamedChildPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildFlushQueue @ 0x1C009E038 (ACPIBuildFlushQueue.c)
 *     AcpiArblibFreeArbiterInstance @ 0x1C00ACF44 (AcpiArblibFreeArbiterInstance.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00ACFB4 (AcpiArblibInitializeArbiter.c)
 */

__int64 __fastcall ACPIDispatchIrpDepPdoQueryID(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rdi
  KIRQL v5; // bl
  __int64 v6; // rdx
  KIRQL v7; // r12
  _UNKNOWN **v8; // rax
  __int64 v9; // rcx
  char *v10; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rbx
  int v14; // r14d
  PVOID *v15; // rdi
  const char *v16; // rax
  unsigned int v17; // esi
  __int64 v18; // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildProcessDelayedDependencyExternalTrigger(DeviceExtension);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  ACPIBuildFlushQueue(DeviceExtension, v6);
  ACPIDevicePowerFlushQueue(DeviceExtension);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) == 0 )
  {
LABEL_2:
    v8 = &AcpiBusFilterIrpDispatch;
    if ( (*(_BYTE *)(DeviceExtension + 8) & 0x40) == 0 )
      v8 = &AcpiPdoIrpDispatch;
    *(_QWORD *)(DeviceExtension + 24) = v8;
    v9 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v9 & 0x1000000000LL) != 0 )
    {
      v10 = (char *)&AcpiProcessorIrpDispatch;
    }
    else if ( (v9 & 0x8000000) != 0 )
    {
      v10 = (char *)&AcpiThermalZoneIrpDispatch;
    }
    else if ( (*(_QWORD *)(DeviceExtension + 960) & 0x10000000000LL) != 0 )
    {
      v10 = (char *)&AcpiPepIrpDispatch;
    }
    else
    {
      if ( (v9 & 0x200000000000LL) == 0
        || !*(_QWORD *)(DeviceExtension + 568)
        || (v16 = AcpiInternalDeviceTable, v17 = 0, !AcpiInternalDeviceTable) )
      {
LABEL_7:
        if ( (*(_QWORD *)(DeviceExtension + 8) & 0x8000000040000LL) == 0x8000000040000LL )
          FixedButtonDeviceObject = a1;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
        AcpiEvaluateBiosMethodsOnPciRootBus(DeviceExtension);
        return (*(__int64 (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)(*(_QWORD *)(DeviceExtension + 24) + 24LL)
                                                             + 152LL))(
                 a1,
                 a2);
      }
      v18 = 0LL;
      while ( !strstr(*(const char **)(DeviceExtension + 568), v16) )
      {
        v18 = ++v17;
        v16 = (&AcpiInternalDeviceTable)[2 * v17];
        if ( !v16 )
          goto LABEL_7;
      }
      v10 = (&AcpiInternalDeviceTable)[2 * v18 + 1];
    }
    *(_QWORD *)(DeviceExtension + 24) = v10;
    goto LABEL_7;
  }
  if ( !(unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(DeviceExtension + 720), 1397900127LL) )
  {
    *(_BYTE *)(DeviceExtension + 184) = 0;
    goto LABEL_2;
  }
  *(_BYTE *)(DeviceExtension + 184) = 1;
  v12 = (unsigned int *)&AcpiArbiterResourceTypes;
  v13 = 0LL;
  while ( 1 )
  {
    v14 = AcpiArblibInitializeArbiter(DeviceExtension, *v12, DeviceExtension + 192 + 8 * v13);
    if ( v14 < 0 )
      break;
    v13 = (unsigned int)(v13 + 1);
    ++v12;
    if ( (unsigned int)v13 >= 3 )
      goto LABEL_2;
  }
  if ( (_DWORD)v13 )
  {
    v15 = (PVOID *)(DeviceExtension + 8 * v13 + 192);
    do
    {
      AcpiArblibFreeArbiterInstance(*--v15);
      LODWORD(v13) = v13 - 1;
    }
    while ( (_DWORD)v13 );
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return (unsigned int)v14;
}
