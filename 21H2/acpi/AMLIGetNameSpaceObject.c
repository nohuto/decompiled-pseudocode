/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C0018260
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIThermalActivateConstraint @ 0x1C0003F18 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIDockIsDockDevice @ 0x1C000A480 (ACPIDockIsDockDevice.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIGpeBuildEventMasks @ 0x1C001B8FC (ACPIGpeBuildEventMasks.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C001BAFC (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C001C780 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C0020398 (ACPIEcInitOpRegionHandler.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0021E88 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0023550 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0025FA8 (ACPIPowerNodeDiscoverDependencies.c)
 *     AreDependenciesSatisfied @ 0x1C0027CAC (AreDependenciesSatisfied.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C002A088 (ACPIBuildDevicePowerNodes.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002A488 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C002E5C4 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004B2C8 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0057880 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C0058160 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C00584B0 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C009F5F8 (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AE070 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AE324 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001817C (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, _QWORD *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *Pool2; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v8 + 1, 1768973121LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = P;
  }
  memmove(Pool2, Src, v8);
  Pool2[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(Pool2, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v11;
}
