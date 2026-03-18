/*
 * XREFs of AMLIAsyncEvalObject @ 0x1C001441C
 * Callers:
 *     ACPIFanLoop @ 0x1C000D1CC (ACPIFanLoop.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011CC0 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C0011E40 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001345C (ACPIDevicePowerProcessPhase3.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C0015200 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C00156A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     EnableDisableCMOSRegions @ 0x1C00162A0 (EnableDisableCMOSRegions.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C001B2F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C001BBA0 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C001BE20 (ACPIDevicePowerProcessPhase5DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase1 @ 0x1C001E3C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase1.c)
 *     ACPIBuildProcessDeviceGenericEval @ 0x1C001E630 (ACPIBuildProcessDeviceGenericEval.c)
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C001F030 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C001F2C0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C001F8D0 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0025E00 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002EA80 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F304 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0030510 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0030D30 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x1C0050E60 (ACPIDevicePowerProcessPhase2SystemSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase3 @ 0x1C0051520 (ACPIDevicePowerProcessPhase5SystemSubPhase3.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C00516D0 (ACPIDevicePowerProcessPhase5SystemSubPhase4.c)
 *     ACPIEcRunQueryMethod @ 0x1C0053EF4 (ACPIEcRunQueryMethod.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0057164 (ACPIIoctlAsyncEvalControlMethod.c)
 *     ACPIWakeDisableAsync @ 0x1C006181C (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0061D50 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C006BED0 (LinkNodepRestoreIrqRoutingWorker.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C0F0 (LinkNodepRunSrsWorker.c)
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 *     RegisterOperationRegionHandler @ 0x1C00A1990 (RegisterOperationRegionHandler.c)
 *     AcpiFunctionLevelDeviceReset @ 0x1C00AE248 (AcpiFunctionLevelDeviceReset.c)
 *     EnableDisableIPMIRegions @ 0x1C00AFD70 (EnableDisableIPMIRegions.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     GetBaseObject @ 0x1C001451C (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     Simulator_Free_Arguments @ 0x1C00639E4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063DBC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0064168 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 AMLIAsyncEvalObject(__int64 *a1, __int64 a2, unsigned int a3, ...)
{
  __int64 v3; // rbx
  __int64 v7; // rsi
  __int64 BaseObject; // rax
  unsigned __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v18; // r8
  void *v19; // rbx
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  __int64 v21; // [rsp+80h] [rbp+30h] BYREF
  __int64 v22; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v24; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  __int64 v26; // [rsp+A8h] [rbp+58h] BYREF
  va_list va2; // [rsp+A8h] [rbp+58h]
  va_list va3; // [rsp+B0h] [rbp+60h] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v22 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v24 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v26 = va_arg(va3, _QWORD);
  v3 = 0LL;
  v20 = 0LL;
  dword_1C0082908 = 0;
  v21 = 0LL;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14, v15);
    v3 = v21;
  }
  v7 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  result = Simulator_Pre_AsyncEvalObject(
             v7,
             a2,
             a3,
             (unsigned int)va,
             (__int64)&v20,
             (__int64)va1,
             (__int64)va2,
             (__int64)&v21);
  if ( !(_DWORD)result )
  {
    v3 = v21;
LABEL_4:
    if ( (*(_BYTE *)(v7 + 64) & 4) != 0 )
    {
      v10 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      BaseObject = GetBaseObject(v7);
      v9 = BaseObject;
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(BaseObject);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v18 = &unk_1C00701BA;
        v19 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v18) = ObjectPath;
        PrintDebugMessage(11, CurrentThread, (_DWORD)v18, 0, 0LL);
        if ( v19 )
          ExFreePoolWithTag(v19, 0);
        v3 = v21;
      }
      v10 = AsyncEvalObject(v9, (_SLIST_ENTRY *)a2, a3, v22, v24, v26, 1);
      DereferenceObjectEx(v9);
      if ( v10 == 32772 )
        v10 = 259;
    }
    if ( g_SimulatorCallbackObject && v10 != 259 )
    {
      if ( v3 )
      {
        v10 = Simulator_TestNotifyRet((PVOID)v3);
        if ( (unsigned int)(*(_DWORD *)(v3 + 4) - 1) <= 2 )
          Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
        ExFreePoolWithTag((PVOID)v3, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v10;
  }
  return result;
}
