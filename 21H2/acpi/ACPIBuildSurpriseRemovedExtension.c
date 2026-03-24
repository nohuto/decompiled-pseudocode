/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C002CAA0
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A974 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002CAA0 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D5D0 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004DC10 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInitRemoveDeviceExtension @ 0x1C00105E8 (ACPIInitRemoveDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C00198D8 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIExtListTestElement @ 0x1C001A904 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001AD98 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001B0F0 (ACPIExtListEnumNext.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C6E0 (ACPIDevicePowerFlushQueue.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002CAA0 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002D1D0 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C002D274 (ACPIDockFindCorrespondingDock.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  char *i; // rax
  char *v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v18; // [rsp+38h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-20h]
  int v20; // [rsp+50h] [rbp-18h]
  int v21; // [rsp+54h] [rbp-14h]

  v21 = 0;
  v18 = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock();
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 328) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v17[1] = 0LL;
  v17[0] = a1 + 760;
  v17[2] = &AcpiDeviceTreeLock;
  v19 = 776LL;
  v20 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v17); ; i = ACPIExtListEnumNext((__int64)v17) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v17, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0LL);
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v6 = *(_QWORD *)(a1 + 8) & 0x20LL;
  v7 = *(_QWORD *)(a1 + 8) & 0x40LL;
  if ( v7 || v6 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFC00uLL);
    _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x8000000000100uLL);
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x40uLL);
      *(_QWORD *)(a1 + 24) = AcpiSurpriseRemovedFilterIrpDispatch;
    }
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x20uLL);
      *(_QWORD *)(a1 + 24) = &AcpiSurpriseRemovedPdoIrpDispatch;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)(a1 + 8), 0x80uLL);
  if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 752);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x20000000000uLL);
      v9 = *(__int64 **)(a1 + 720);
      if ( v9 )
      {
        if ( ACPIDockIsDockDevice(v9) )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 744), SingleBusRelations);
      }
    }
  }
  v10 = *(_QWORD *)(a1 + 408);
  if ( v10 )
  {
    v14 = (_QWORD *)(v10 + 40);
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 || (v16 = (_QWORD *)v14[1], (_QWORD *)*v16 != v14) )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  ACPIInitRemoveDeviceExtension((_QWORD *)a1);
  if ( *(_QWORD *)(a1 + 720) )
  {
    v11 = *(_QWORD *)(a1 + 720);
    if ( (*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 744);
      if ( v12 )
      {
        if ( (*(_DWORD *)(v12 + 48) & 0x4000000) != 0 )
        {
          ACPIInitDereferenceDeviceExtensionLocked(a1);
          v11 = *(_QWORD *)(a1 + 720);
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)v11 + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
