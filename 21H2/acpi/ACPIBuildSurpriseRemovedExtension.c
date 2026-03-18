/*
 * XREFs of ACPIBuildSurpriseRemovedExtension @ 0x1C004B044
 * Callers:
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C000A564 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004C940 (ACPIBusIrpSurpriseRemoval.c)
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C0007270 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C000776C (ACPIDevicePowerFlushQueue.c)
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     ACPIDockFindCorrespondingDock @ 0x1C0048FA8 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C004A950 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitRemoveDeviceExtension @ 0x1C0056D10 (ACPIInitRemoveDeviceExtension.c)
 */

__int64 __fastcall ACPIBuildSurpriseRemovedExtension(ULONG_PTR a1)
{
  __int64 CorrespondingDock; // rax
  __int64 i; // rax
  __int64 v4; // rdi
  KIRQL v5; // si
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]
  int v20; // [rsp+54h] [rbp-14h]

  v20 = 0;
  v17 = 0LL;
  CorrespondingDock = ACPIDockFindCorrespondingDock(a1);
  if ( CorrespondingDock )
  {
    *(_DWORD *)(CorrespondingDock + 368) = 5;
    ACPIBuildSurpriseRemovedExtension(CorrespondingDock);
  }
  v16[1] = 0LL;
  v16[0] = a1 + 800;
  v16[2] = &AcpiDeviceTreeLock;
  v18 = 816LL;
  v19 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v16); ; i = (__int64)ACPIExtListEnumNext((__int64)v16) )
  {
    v4 = i;
    if ( !ACPIExtListTestElement((__int64)v16, 1) )
      break;
    ACPIBuildSurpriseRemovedExtension(v4);
  }
  ACPIDevicePowerFlushQueue(a1);
  ACPIBuildProcessNotifyPepDeleteDevice(a1, 0);
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
  if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Bu) )
  {
    v8 = *(_QWORD *)(a1 + 792);
    if ( v8 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v8 + 8), 0x20000000000uLL);
      if ( *(_QWORD *)(a1 + 760) )
      {
        if ( ACPIDockIsDockDevice() )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v8 + 784), SingleBusRelations);
      }
    }
  }
  v9 = *(_QWORD *)(a1 + 448);
  if ( v9 )
  {
    v10 = (_QWORD *)(v9 + 40);
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(a1 + 448) = 0LL;
  }
  ACPIInitRemoveDeviceExtension(a1);
  if ( *(_QWORD *)(a1 + 760) )
  {
    v13 = *(_QWORD *)(a1 + 760);
    if ( !_bittest64((const signed __int64 *)(a1 + 8), 0x2Bu) )
    {
      v14 = *(_QWORD *)(a1 + 784);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v14 + 48) & 0x4000000) != 0 )
        {
          ACPIInitDereferenceDeviceExtensionLocked(a1);
          v13 = *(_QWORD *)(a1 + 760);
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)v13 + 104LL) = 0LL;
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  return 0LL;
}
