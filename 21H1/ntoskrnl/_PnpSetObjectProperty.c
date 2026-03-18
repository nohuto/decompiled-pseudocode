/*
 * XREFs of _PnpSetObjectProperty @ 0x14072B2B4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1406A78A0 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140711970 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmDeleteDeviceWorker @ 0x140718E18 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140719FC8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PnpStartDeviceNode @ 0x140723644 (PnpStartDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x140727018 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x14072C180 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     _CmUpdateDevicePanel @ 0x14072CD38 (_CmUpdateDevicePanel.c)
 *     IopRegisterDeviceInterface @ 0x14072DB00 (IopRegisterDeviceInterface.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140733498 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiDcContainerRequiresConfiguration @ 0x140742138 (PiDcContainerRequiresConfiguration.c)
 *     PnpInitializeSessionId @ 0x14075A2DC (PnpInitializeSessionId.c)
 *     PnpClearDeviceTemporaryProperties @ 0x14075A6A8 (PnpClearDeviceTemporaryProperties.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14075CA74 (PipDmgSaveDeviceDmarPolicy.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x14075DEB0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbSetupNodes @ 0x14078AABC (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14078AD48 (PiDrvDbRegisterNode.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B2200 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14089A3F0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089DCE4 (PnpUpdateRebootRequiredReason.c)
 *     PipSetGuestAssignedProperty @ 0x1408B00E4 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B3A44 (PiDrvDbSetupNodeHive.c)
 *     _CmUpdateDevicePanelInterface @ 0x140974590 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x14097574C (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140976060 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140A547C4 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8E3B0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14072B42C (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  __int64 (__fastcall *v14)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD SecurityDescriptorLength[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(SecurityDescriptorLength, 0, sizeof(SecurityDescriptorLength));
  v14 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  SecurityDescriptorLength[3] = a5;
  SecurityDescriptorLength[4] = a6;
  LODWORD(SecurityDescriptorLength[5]) = a7;
  SecurityDescriptorLength[6] = a8;
  SecurityDescriptorLength[7] = __PAIR64__(a10, a9);
  SecurityDescriptorLength[2] = a4;
  if ( v14 )
  {
    v15 = v14(a1, a2, a3, 9LL, 1, SecurityDescriptorLength);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return LODWORD(SecurityDescriptorLength[0]);
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v16 = PnpSetObjectPropertyWorker(
          a1,
          a2,
          a3,
          SecurityDescriptorLength[2],
          SecurityDescriptorLength[3],
          SecurityDescriptorLength[4],
          SecurityDescriptorLength[5],
          SecurityDescriptorLength[6],
          SecurityDescriptorLength[7],
          SHIDWORD(SecurityDescriptorLength[7]));
  v17 = v16;
  if ( !v14 )
    return v17;
  LODWORD(SecurityDescriptorLength[0]) = v16;
  v18 = v14(a1, a2, a3, 9LL, 2, SecurityDescriptorLength);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v17;
  if ( v18 == -1073741536 )
    return LODWORD(SecurityDescriptorLength[0]);
  v20 = v17;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
