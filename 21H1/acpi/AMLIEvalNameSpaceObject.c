/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C000B8E0
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000B704 (ACPIIoctlEvalControlMethod.c)
 *     ACPIInitStartDevice @ 0x1C000D5A8 (ACPIInitStartDevice.c)
 *     LinkNodeCrackPrt @ 0x1C000E8B4 (LinkNodeCrackPrt.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0011910 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitDosDeviceName @ 0x1C0016808 (ACPIInitDosDeviceName.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002C44C (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004B9D4 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005C6F0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005D070 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C0063970 (Simulator_EvaluateNode.c)
 *     ACPIInitStopDevice @ 0x1C009092C (ACPIInitStopDevice.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00917E0 (LinkNodepAddLinkNodeWorker.c)
 *     ACPIThermalBuildConstraints @ 0x1C00918C0 (ACPIThermalBuildConstraints.c)
 *     LinkNodeWriteStateToHardware @ 0x1C0095C08 (LinkNodeWriteStateToHardware.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00980F0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C0099D50 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     ACPIProcessorDeviceControl @ 0x1C009A670 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1C009C820 (AcpiGetIdleWakeInfo.c)
 *     EnableDisableRegions @ 0x1C009D614 (EnableDisableRegions.c)
 *     ACPIEcGetGpeVector @ 0x1C00AE6FC (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AE7A0 (ACPIEcGetUid.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00B0000 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00B0120 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B1954 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDE1C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     SyncEvalObject @ 0x1C00040D0 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     Simulator_Free_Arguments @ 0x1C00639E4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063EB8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0064168 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 AMLIEvalNameSpaceObject(unsigned __int64 *a1, __int64 a2, int a3, ...)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v15; // r8
  void *v16; // rsi
  _QWORD *v17; // rbx
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  P[0] = 0LL;
  v19 = 0LL;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v10, v9, v11, v12);
  }
  v6 = *a1;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_4;
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  result = Simulator_Pre_EvalNameSpaceObject(v6, a2, a3, (unsigned int)va, (__int64)&v19, (__int64)P);
  if ( !(_DWORD)result )
  {
LABEL_4:
    if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    {
      v7 = -1073741738;
    }
    else
    {
      if ( a2 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_OWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
      }
      while ( *(_WORD *)(v6 + 66) == 128 )
        v6 = *(_QWORD *)(v6 + 80);
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v6);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v15 = &unk_1C00701BA;
        v16 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v15) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v15, 0, 0LL);
        if ( v16 )
          ExFreePoolWithTag(v16, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v20);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v6 + 64) |= 4u;
        if ( (*(_WORD *)(v6 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v6);
      }
      if ( v7 == 32772 )
        v7 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v17 = P[0];
      if ( P[0] )
      {
        v7 = Simulator_TestNotifyRet(P[0]);
        if ( (unsigned int)(*((_DWORD *)v17 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v17 + 8), v17[5]);
        ExFreePoolWithTag(P[0], 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    return v7;
  }
  return result;
}
