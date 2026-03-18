/*
 * XREFs of AMLIEvalNameSpaceObject @ 0x1C000B894
 * Callers:
 *     ACPIThermalGetSensorDevice @ 0x1C0001EF0 (ACPIThermalGetSensorDevice.c)
 *     ACPIInitStartDevice @ 0x1C00050B0 (ACPIInitStartDevice.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     LinkNodeCrackPrt @ 0x1C00192F8 (LinkNodeCrackPrt.c)
 *     ACPIIoctlEvalControlMethod @ 0x1C001BC74 (ACPIIoctlEvalControlMethod.c)
 *     ACPIInitDosDeviceName @ 0x1C0022B6C (ACPIInitDosDeviceName.c)
 *     ACPIIoctlGetDeviceSpecificData @ 0x1C002B560 (ACPIIoctlGetDeviceSpecificData.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A4D4 (ACPIBuildMissingEjectionRelations.c)
 *     EnableDisableDeviceRegionSpace @ 0x1C005D7A0 (EnableDisableDeviceRegionSpace.c)
 *     ACPIProcessorContainerEvaluateLpiObject @ 0x1C005DEF4 (ACPIProcessorContainerEvaluateLpiObject.c)
 *     Simulator_EvaluateNode @ 0x1C0064D80 (Simulator_EvaluateNode.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008F5E4 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0090340 (ACPIAmliEvaluateDsm.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     ACPIProcessorDeviceControl @ 0x1C0095160 (ACPIProcessorDeviceControl.c)
 *     AcpiGetIdleWakeInfo @ 0x1C00952D0 (AcpiGetIdleWakeInfo.c)
 *     ACPIThermalBuildConstraints @ 0x1C00956BC (ACPIThermalBuildConstraints.c)
 *     LinkNodepAddLinkNodeWorker @ 0x1C00975D0 (LinkNodepAddLinkNodeWorker.c)
 *     LinkNodeWriteStateToHardware @ 0x1C009CB64 (LinkNodeWriteStateToHardware.c)
 *     ACPIQueryCacheCoherencyAttribute @ 0x1C00A0518 (ACPIQueryCacheCoherencyAttribute.c)
 *     ACPIEcGetGpeVector @ 0x1C00AD6A4 (ACPIEcGetGpeVector.c)
 *     ACPIEcGetUid @ 0x1C00AD748 (ACPIEcGetUid.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     ACPIEvaluateSpareDsm @ 0x1C00AF7C8 (ACPIEvaluateSpareDsm.c)
 *     ACPIGetUniqueId @ 0x1C00AF8F0 (ACPIGetUniqueId.c)
 *     UnRegisterOperationRegionHandler @ 0x1C00B0ED4 (UnRegisterOperationRegionHandler.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     Simulator_Free_Arguments @ 0x1C0064DF4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C00652C8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0065578 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 AMLIEvalNameSpaceObject(__int64 *a1, __int64 a2, unsigned int a3, ...)
{
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v11; // r8
  void *v12; // rsi
  _QWORD *v13; // rbx
  PVOID P[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v16 = va_arg(va1, _QWORD);
  P[0] = 0LL;
  v15 = 0LL;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
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
  result = Simulator_Pre_EvalNameSpaceObject(v6, a2, a3, (unsigned int)va, (__int64)&v15, (__int64)P);
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
        v11 = &unk_1C006FB8B;
        v12 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v11) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v11, 0, 0LL);
        if ( v12 )
          ExFreePoolWithTag(v12, 0);
      }
      v7 = SyncEvalObject(v6, a2, a3, v16);
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
      v13 = P[0];
      if ( P[0] )
      {
        v7 = Simulator_TestNotifyRet(P[0]);
        if ( (unsigned int)(*((_DWORD *)v13 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v13 + 8), v13[5]);
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
