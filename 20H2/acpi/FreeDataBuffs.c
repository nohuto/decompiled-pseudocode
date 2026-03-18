/*
 * XREFs of FreeDataBuffs @ 0x1C0002F90
 * Callers:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     RunContext @ 0x1C0004A10 (RunContext.c)
 *     ParseCall @ 0x1C00067A0 (ParseCall.c)
 *     ParseTerm @ 0x1C00070C0 (ParseTerm.c)
 *     ParseScope @ 0x1C00084D0 (ParseScope.c)
 *     ConvertToInteger @ 0x1C000BDD0 (ConvertToInteger.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C00102D4 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     AMLIEvalPackageElement @ 0x1C0012120 (AMLIEvalPackageElement.c)
 *     ACPIThermalTMPCallback @ 0x1C0012250 (ACPIThermalTMPCallback.c)
 *     ACPIIoctlEnumChildren @ 0x1C00139B0 (ACPIIoctlEnumChildren.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C0015390 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0015580 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0019D50 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0019F10 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C001A360 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C001EAF0 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001ED70 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ExprOp2_64 @ 0x1C0020D00 (ExprOp2_64.c)
 *     ACPIGetWorkerForInteger @ 0x1C0026A90 (ACPIGetWorkerForInteger.c)
 *     ProcessIncDec @ 0x1C002A220 (ProcessIncDec.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C002A8B0 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002AE00 (ACPIGetWorkerForBuffer.c)
 *     ACPIGetWorkerForData @ 0x1C002B2C0 (ACPIGetWorkerForData.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C44C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002F580 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForNothing @ 0x1C0030430 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004BDB0 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C00551E0 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0057164 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C00573B0 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C0063780 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C0065718 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C0067EE4 (FreeContext.c)
 *     Concat @ 0x1C0068A70 (Concat.c)
 *     Match_32 @ 0x1C0069968 (Match_32.c)
 *     Match_64 @ 0x1C0069A8C (Match_64.c)
 *     ConvertToBuffer @ 0x1C006B0F8 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006B230 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006B2C8 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C006BB60 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDE1C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0003010 (FreeObjData.c)
 *     FreeData @ 0x1C0003328 (FreeData.c)
 */

__int64 __fastcall FreeDataBuffs(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rcx

  if ( a2 )
  {
    v3 = a2;
    do
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v5 & 8) != 0 )
          FreeData();
      }
      else if ( *(_QWORD *)(a1 + 32) && *(int *)(a1 + 8) <= 0 )
      {
        if ( *(_WORD *)(a1 + 2) == 4 )
          FreeDataBuffs(*(_QWORD *)(a1 + 32) + 8LL, **(unsigned int **)(a1 + 32));
        FreeObjData(a1);
      }
      result = 0LL;
      *(_OWORD *)a1 = 0LL;
      *(_OWORD *)(a1 + 16) = 0LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      a1 += 40LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
