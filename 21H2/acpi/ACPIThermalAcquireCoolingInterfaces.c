/*
 * XREFs of ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398
 * Callers:
 *     ACPIProcessorStartDeviceWorker @ 0x1C0004D10 (ACPIProcessorStartDeviceWorker.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIThermalStartDevice @ 0x1C008F060 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C0090820 (ACPIFanStartDevice.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x1C00AC7F0 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1C00B4790 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 * Callees:
 *     ACPIThermalQueryCoolingInterfaces @ 0x1C0003BEC (ACPIThermalQueryCoolingInterfaces.c)
 *     ACPIThermalAssocaiteConstraint @ 0x1C0003E44 (ACPIThermalAssocaiteConstraint.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIThermalAcquireCoolingInterfaces(__int64 a1)
{
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // r14
  __int64 *v6; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  *(_BYTE *)(a1 + 664) = 1;
  v3 = (__int64 *)AcpiThermalUnclaimedConstraintList;
  v4 = v2;
  while ( v3 != &AcpiThermalUnclaimedConstraintList )
  {
    v6 = v3;
    v3 = (__int64 *)*v3;
    AMLIGetNameSpaceObject(v6 + 5);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v4);
  return 3221225659LL;
}
