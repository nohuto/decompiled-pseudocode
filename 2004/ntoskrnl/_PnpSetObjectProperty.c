/*
 * XREFs of _PnpSetObjectProperty @ 0x1407260F4
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140713820 (PiDrvDbLoadNodeWorkerCallback.c)
 *     _CmDeleteDeviceWorker @ 0x14071B1A8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x14071C358 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PiProcessNewDeviceNode @ 0x140724960 (PiProcessNewDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x140725C5C (PiPnpRtlSetObjectProperty.c)
 *     PipCallDriverAddDevice @ 0x140727744 (PipCallDriverAddDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140728E04 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     _CmUpdateDevicePanel @ 0x14072B450 (_CmUpdateDevicePanel.c)
 *     PnpStartDeviceNode @ 0x14072C52C (PnpStartDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1407317B4 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRegisterDeviceInterface @ 0x140734FE4 (IopRegisterDeviceInterface.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140738F94 (PnpClearDeviceTemporaryProperties.c)
 *     PiDcContainerRequiresConfiguration @ 0x140743CB8 (PiDcContainerRequiresConfiguration.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x14075A404 (PipDmgSaveDeviceDmarPolicy.c)
 *     PnpInitializeSessionId @ 0x14075BEE4 (PnpInitializeSessionId.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1407601E0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDrvDbSetupNodes @ 0x14078C98C (PiDrvDbSetupNodes.c)
 *     PiDrvDbRegisterNode @ 0x14078CC18 (PiDrvDbRegisterNode.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x1407B5370 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14089B710 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x14089F004 (PnpUpdateRebootRequiredReason.c)
 *     PipSetGuestAssignedProperty @ 0x1408B1404 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B4D64 (PiDrvDbSetupNodeHive.c)
 *     _CmUpdateDevicePanelInterface @ 0x140975930 (_CmUpdateDevicePanelInterface.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140976AEC (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x140977400 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     PipInitComputerIds @ 0x140A4BC28 (PipInitComputerIds.c)
 *     PipMigrateResetDeviceCallback @ 0x140A8D9A0 (PipMigrateResetDeviceCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     _PnpSetObjectPropertyWorker @ 0x14072626C (_PnpSetObjectPropertyWorker.c)
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
