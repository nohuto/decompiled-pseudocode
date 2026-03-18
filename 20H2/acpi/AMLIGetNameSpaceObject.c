/*
 * XREFs of AMLIGetNameSpaceObject @ 0x1C000AC5C
 * Callers:
 *     ACPIIoctlEvalPreProcessingV1 @ 0x1C000B234 (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DA60 (ACPIThermalAcquireCoolingInterfaces.c)
 *     ACPIThermalActivateConstraint @ 0x1C000E024 (ACPIThermalActivateConstraint.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0011678 (ACPIConvertDependenciesToPnpReservations.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C0014548 (ACPIIsPowerNodeMissingDependencies.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015BC4 (ACPIBuildDevicePowerNodes.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0016F2C (ACPIGpeBuildEventMasks.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0025E00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00267F8 (ACPIEcInitOpRegionHandler.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C00294BC (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0029954 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C44C (ACPIIoctlGetDeviceSpecificData.c)
 *     AreDependenciesSatisfied @ 0x1C002E694 (AreDependenciesSatisfied.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E8D8 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C004AFBC (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x1C004C414 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x1C00577E8 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0057B58 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1990 (RegisterOperationRegionHandler.c)
 *     AcpiGetFullyQualifiedBiosName @ 0x1C00AF100 (AcpiGetFullyQualifiedBiosName.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AF3B4 (ExternalRequestBiosNameDeviceAssociation.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1954 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDE1C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AB70 (AMLIGetNameSpaceObjectNoLock.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall AMLIGetNameSpaceObject(_BYTE *Src, __int64 *a2, unsigned __int64 *a3, int a4)
{
  size_t v8; // rbx
  _BYTE *PoolWithTag; // rdi
  KIRQL v10; // bl
  unsigned int v11; // esi
  _BYTE P[128]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = -1LL;
  do
    ++v8;
  while ( Src[v8] );
  if ( v8 + 1 >= 0x80 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v8 + 1, 0x69706341u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = P;
  }
  memmove(PoolWithTag, Src, v8);
  PoolWithTag[v8] = 0;
  v10 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v11 = AMLIGetNameSpaceObjectNoLock(PoolWithTag, a2, a3, a4);
  ExReleaseSpinLockShared(&ACPINamespaceLock, v10);
  if ( P != PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v11;
}
