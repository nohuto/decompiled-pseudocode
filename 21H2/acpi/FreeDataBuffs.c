/*
 * XREFs of FreeDataBuffs @ 0x1C0018A20
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1C0002920 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0007F80 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x1C0008460 (ACPIBuildProcessDevicePhaseCrs.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C00093E0 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C0009660 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000A1F0 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000AC90 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C000DA40 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000ECC0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     ParseCall @ 0x1C00123D0 (ParseCall.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 *     ParseScope @ 0x1C0014A90 (ParseScope.c)
 *     ExprOp2_64 @ 0x1C0016CF0 (ExprOp2_64.c)
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ConvertToInteger @ 0x1C001C420 (ConvertToInteger.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     ACPIIoctlEnumChildren @ 0x1C001F2D4 (ACPIIoctlEnumChildren.c)
 *     ACPIThermalTMPCallback @ 0x1C00204A0 (ACPIThermalTMPCallback.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     ACPIGetWorkerForInteger @ 0x1C00249F0 (ACPIGetWorkerForInteger.c)
 *     Concat @ 0x1C0027500 (Concat.c)
 *     ACPIGetWorkerForBuffer @ 0x1C0029BD0 (ACPIGetWorkerForBuffer.c)
 *     ProcessIncDec @ 0x1C002AD60 (ProcessIncDec.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildProcessPowerResourcePhaseSta @ 0x1C002B7D0 (ACPIBuildProcessPowerResourcePhaseSta.c)
 *     ACPIGetWorkerForData @ 0x1C002BD20 (ACPIGetWorkerForData.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C002D9AC (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIGetWorkerForNothing @ 0x1C002E1D0 (ACPIGetWorkerForNothing.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x1C004A840 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C004AA30 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIFanFSTCallback @ 0x1C0054AC0 (ACPIFanFSTCallback.c)
 *     ACPIIoctlAsyncEvalControlMethodCompletion @ 0x1C0058090 (ACPIIoctlAsyncEvalControlMethodCompletion.c)
 *     Simulator_CallbackWorker @ 0x1C0064B90 (Simulator_CallbackWorker.c)
 *     ParseDLMObjectInternal @ 0x1C0066C60 (ParseDLMObjectInternal.c)
 *     FreeContext @ 0x1C00694F8 (FreeContext.c)
 *     Match_32 @ 0x1C006A5F8 (Match_32.c)
 *     Match_64 @ 0x1C006A71C (Match_64.c)
 *     ConvertToBuffer @ 0x1C006B518 (ConvertToBuffer.c)
 *     ConvertToDDBHandle @ 0x1C006B650 (ConvertToDDBHandle.c)
 *     ConvertToString @ 0x1C006B6E8 (ConvertToString.c)
 *     ParseNestedContext @ 0x1C006BFA0 (ParseNestedContext.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeData @ 0x1C001840C (FreeData.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0018AA0 (FreeObjData.c)
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
          FreeData(v5);
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
