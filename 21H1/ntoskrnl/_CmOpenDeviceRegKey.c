/*
 * XREFs of _CmOpenDeviceRegKey @ 0x140617944
 * Callers:
 *     _CmOpenDeviceRegKeyWorker @ 0x140618394 (_CmOpenDeviceRegKeyWorker.c)
 *     PiCMOpenDeviceKey @ 0x1406A19FC (PiCMOpenDeviceKey.c)
 *     _PnpDispatchDevice @ 0x1406ABEB0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406AC24C (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406AF11C (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceRegPropWorker @ 0x1406AFDF0 (_CmGetDeviceRegPropWorker.c)
 *     IoOpenDeviceRegistryKey @ 0x1406D2470 (IoOpenDeviceRegistryKey.c)
 *     _CmDeleteDeviceWorker @ 0x140718E18 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407193DC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14071C5EC (PiDevCfgResetDeviceDriverSettings.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14071C998 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14071FB48 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x140721298 (_CmGetDeviceCompoundFilters.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     _CmSetDeviceRegPropWorker @ 0x140729808 (_CmSetDeviceRegPropWorker.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14072C784 (PnpDeviceObjectToDeviceInstance.c)
 *     PpForEachDeviceInstanceDriver @ 0x140731320 (PpForEachDeviceInstanceDriver.c)
 *     IopReleaseDeviceResources @ 0x140733F88 (IopReleaseDeviceResources.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407363C8 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x1407368A4 (PiDevCfgInitDeviceContext.c)
 *     IopGetRootDevices @ 0x14073749C (IopGetRootDevices.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140737FFC (IopWriteAllocatedResourcesToRegistry.c)
 *     PiQueryAndAllocateBootResources @ 0x140738C3C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x140738E1C (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1407391D4 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x140739544 (PiQueryResourceRequirements.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14073B5CC (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14073B72C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14073B7D0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407511F8 (PiDevCfgEnumDeviceKeys.c)
 *     _CmCreateDeviceWorker @ 0x140752808 (_CmCreateDeviceWorker.c)
 *     PnpCheckDeviceIdsChanged @ 0x140755948 (PnpCheckDeviceIdsChanged.c)
 *     PipMakeGloballyUniqueId @ 0x140757BAC (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x140796F38 (IopIsReportedAlready.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1407A8AE0 (PiDevCfgProcessDeviceCallback.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407ABA90 (PipApplyFunctionToServiceInstances.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x14089CA70 (PnpGetDeviceInstanceRegistryValue.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089E76C (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A2678 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x1408A566C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x1408AB020 (PiCMCreateDevice.c)
 *     PiInitializeDevice @ 0x1408AF84C (PiInitializeDevice.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409771B8 (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x140618394 (_CmOpenDeviceRegKeyWorker.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rsi
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax

  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x52504E50u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x58uLL);
  *((_DWORD *)v14 + 6) = a5;
  *((_BYTE *)v14 + 28) = a6;
  *((_DWORD *)v14 + 4) = a3;
  *((_QWORD *)v14 + 4) = a7;
  *((_DWORD *)v14 + 5) = a4;
  if ( !v8 )
    goto LABEL_5;
  v15 = v8(a1, a2, 1LL);
  switch ( v15 )
  {
    case -1073741822:
      v8 = 0LL;
      goto LABEL_5;
    case -1073741536:
      goto LABEL_15;
    case 0:
LABEL_5:
      v16 = CmOpenDeviceRegKeyWorker(
              a1,
              a2,
              *((_DWORD *)v14 + 4),
              *((_DWORD *)v14 + 5),
              *((_DWORD *)v14 + 6),
              *((_BYTE *)v14 + 28),
              *((_QWORD *)v14 + 4),
              (__int64)v14 + 40);
      v17 = v16;
      if ( !v8 || (*(_DWORD *)v14 = v16, v19 = v8(a1, a2, 1LL), v20 = v19, v19 == -1073741822) )
      {
LABEL_6:
        if ( v17 >= 0 && a8 )
          *a8 = *((_DWORD *)v14 + 10);
        goto LABEL_9;
      }
      if ( v19 != -1073741536 )
      {
        v21 = v17;
        if ( v20 )
          v21 = -1073741595;
        v17 = v21;
        goto LABEL_6;
      }
LABEL_15:
      v17 = *(_DWORD *)v14;
      goto LABEL_6;
  }
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v17;
}
