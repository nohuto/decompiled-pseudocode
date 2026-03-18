/*
 * XREFs of ACPIGet @ 0x1C0003AB0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C000C8B0 (ACPICMButtonStartWorker.c)
 *     ACPIThermalLoopEx @ 0x1C00127C8 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0014D90 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0014F80 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C0015160 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0015320 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0015A90 (ACPIBuildProcessDevicePhaseSub.c)
 *     IsPciDeviceWorker @ 0x1C0016480 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C00174B0 (IsPciBusAsyncWorker.c)
 *     GetPciAddressWorker @ 0x1C0018810 (GetPciAddressWorker.c)
 *     ACPIDetectFilterDevices @ 0x1C0018DA4 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C00190D8 (ACPIDetectPdoDevices.c)
 *     ACPIDetectDockDevices @ 0x1C001A5A0 (ACPIDetectDockDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001B5B0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001C230 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001ED70 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C002BB50 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C002BD30 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002FE50 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C004A640 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004C0E0 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C004EE40 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C004EFD0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C004F308 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051B10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051CC0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C0F0 (LinkNodepRunSrsWorker.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C008F410 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIInitStopDevice @ 0x1C009092C (ACPIInitStopDevice.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0090DA8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0095FF0 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C00963FC (ACPIBusIrpQueryCompatibleId.c)
 *     TranslateEjectInterface @ 0x1C0099F24 (TranslateEjectInterface.c)
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C009B69C (ACPIThermalGetParameter.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009BCFC (ACPISystemPowerGetDeviceWake.c)
 *     ACPIBusIrpQueryResources @ 0x1C009BDB0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C009C474 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009C6D4 (ACPIInternalSetProximityDomain.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009DA84 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPISystemPowerGetSxD @ 0x1C009DF70 (ACPISystemPowerGetSxD.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C009E218 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C009E450 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00A1CE0 (ACPIBusIrpQueryInstanceId.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A330C (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C00AB170 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C00AB230 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00ABC10 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AC260 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AD3B0 (ACPIBusAndFilterIrpEject.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B65E8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     FreeNameSpaceObjects @ 0x1C0003690 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C00040D0 (SyncEvalObject.c)
 *     AsyncEvalObject @ 0x1C00054D0 (AsyncEvalObject.c)
 *     GetObjectPath @ 0x1C0023838 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C002C2E0 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     Simulator_Free_Arguments @ 0x1C00639E4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C0063DBC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0063EB8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0064168 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0065AF0 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065BD0 (ConPrintf.c)
 */

__int64 __fastcall ACPIGet(
        __int64 *a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v11; // r15d
  __int64 *v12; // rbx
  __int64 *v13; // r14
  int v14; // eax
  __int16 v15; // ax
  char *PoolWithTag; // rax
  char *v17; // rsi
  KIRQL v18; // al
  char **v19; // rcx
  char *v20; // r12
  KIRQL v21; // dl
  __int64 *v22; // rax
  __int64 *v23; // rax
  _OWORD *v24; // rdi
  unsigned __int64 v25; // r15
  unsigned int v26; // r13d
  unsigned int v27; // r14d
  void (__fastcall *v28)(__int64 *, _QWORD, char *, char *); // r13
  unsigned int v29; // ebx
  KIRQL v30; // al
  __int64 v31; // r8
  char **v32; // rdx
  unsigned __int64 v34; // r14
  int v35; // r15d
  __int64 v36; // rax
  unsigned int v37; // edx
  void *v38; // r8
  void *v39; // r15
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rcx
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v44; // r8
  void *v45; // r14
  _QWORD *v46; // rdi
  unsigned __int64 v47; // rcx
  void (__fastcall *v48)(__int64 *, _QWORD, char *, char *); // [rsp+40h] [rbp-81h]
  __int64 *v49; // [rsp+48h] [rbp-79h]
  int v50; // [rsp+50h] [rbp-71h]
  PVOID P; // [rsp+58h] [rbp-69h] BYREF
  __int128 *v52; // [rsp+60h] [rbp-61h]
  PVOID Argument1; // [rsp+68h] [rbp-59h] BYREF
  __int64 v54; // [rsp+70h] [rbp-51h] BYREF
  __int64 v55; // [rsp+78h] [rbp-49h] BYREF
  __int128 *v56; // [rsp+80h] [rbp-41h] BYREF
  __int128 *v57; // [rsp+88h] [rbp-39h] BYREF
  __int128 v58; // [rsp+90h] [rbp-31h] BYREF
  __int128 v59; // [rsp+A0h] [rbp-21h]
  __int64 v60; // [rsp+B0h] [rbp-11h]
  __int64 v61; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-1h] BYREF
  int v63; // [rsp+110h] [rbp+4Fh]

  v60 = 0LL;
  v52 = 0LL;
  v63 = a3 & 0x20000000;
  v50 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v11 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    v12 = a1;
  else
    v12 = (__int64 *)a1[90];
  v13 = 0LL;
  if ( !v11 )
    v13 = a1;
  v14 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    v49 = v13;
    v48 = (void (__fastcall *)(__int64 *, _QWORD, char *, char *))&ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 )
    {
      v49 = v13;
      if ( (v13[1] & 0x200000000000000LL) != 0 )
      {
        v49 = (__int64 *)v13[23];
        v12 = (__int64 *)v49[90];
      }
    }
  }
  else
  {
    switch ( v14 )
    {
      case 0x80000:
        v49 = v13;
        v48 = (void (__fastcall *)(__int64 *, _QWORD, char *, char *))&ACPIGetWorkerForString;
        break;
      case 0x10000:
        v49 = v13;
        v48 = (void (__fastcall *)(__int64 *, _QWORD, char *, char *))&ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        v49 = v13;
        v48 = (void (__fastcall *)(__int64 *, _QWORD, char *, char *))&ACPIGetWorkerForData;
        break;
      case 0x100000:
        v49 = v13;
        v48 = (void (__fastcall *)(__int64 *, _QWORD, char *, char *))&ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  v15 = 3;
  if ( (a3 & 0x3800000) != 0 )
  {
    v50 = 1;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v58) = 1;
      *(_QWORD *)&v59 = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v15 = 2;
      }
      else if ( (a3 & 0x2000000) == 0 )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
      }
      WORD1(v58) = v15;
      DWORD2(v59) = a5;
      v60 = a4;
    }
    v52 = &v58;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x4D706341u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *(_OWORD *)PoolWithTag = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_OWORD *)PoolWithTag + 2) = 0LL;
  *((_OWORD *)PoolWithTag + 3) = 0LL;
  *((_OWORD *)PoolWithTag + 4) = 0LL;
  *((_OWORD *)PoolWithTag + 5) = 0LL;
  *((_OWORD *)PoolWithTag + 6) = 0LL;
  *((_QWORD *)PoolWithTag + 14) = 0LL;
  *((_QWORD *)PoolWithTag + 5) = a6;
  *((_QWORD *)PoolWithTag + 6) = a7;
  *((_QWORD *)PoolWithTag + 7) = a8;
  *((_QWORD *)PoolWithTag + 8) = a9;
  *(_DWORD *)PoolWithTag = a3;
  *((_DWORD *)PoolWithTag + 1) = a2;
  *((_QWORD *)PoolWithTag + 3) = v13;
  *((_QWORD *)PoolWithTag + 4) = v12;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (char **)qword_1C00826E8;
  v20 = v17 + 8;
  if ( *(__int64 **)qword_1C00826E8 != &AcpiGetListEntry )
    goto LABEL_137;
  *(_QWORD *)v20 = &AcpiGetListEntry;
  *((_QWORD *)v17 + 2) = v19;
  *v19 = v20;
  qword_1C00826E8 = (__int64)(v17 + 8);
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v11 && (v13[1] & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_40;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = (__int64 *)*v12;
  v12 = *(__int64 **)(*v12 + 24);
  v23 = v22 + 3;
  if ( v23 == v12 )
  {
LABEL_17:
    v12 = 0LL;
  }
  else
  {
    while ( a2 != *((_DWORD *)v12 + 10) )
    {
      v12 = (__int64 *)*v12;
      if ( v23 == v12 )
        goto LABEL_17;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v12 )
    goto LABEL_40;
  v12 += 15;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
  if ( !v12 )
  {
LABEL_40:
    v27 = -1073741772;
    goto LABEL_41;
  }
  if ( *(_WORD *)(*v12 + 66) == 8 && v49 && a3 >= 0 && v49[76] && (v49[120] & 0x40) == 0 )
  {
    v27 = -1073741661;
    goto LABEL_41;
  }
  v24 = v17 + 80;
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( !v63 )
  {
    v57 = v52;
    Argument1 = 0LL;
    v62 = 0LL;
    if ( (gDebugger & 0x1000) != 0 )
    {
      ConPrintf("\nProcess AML Debugger Request.\n");
      _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
      AMLIDebugger();
    }
    v25 = *v12;
    if ( g_SimulatorCallbackObject )
    {
      if ( v17 != (char *)-80LL )
      {
        *v24 = 0LL;
        *((_OWORD *)v17 + 6) = 0LL;
        *((_QWORD *)v17 + 14) = 0LL;
      }
      v26 = v50;
      v27 = Simulator_Pre_EvalNameSpaceObject(
              v25,
              (int)v17 + 80,
              v50,
              (unsigned int)&v57,
              (__int64)&v62,
              (__int64)&Argument1);
      if ( v27 )
        goto LABEL_41;
    }
    else
    {
      v26 = v50;
    }
    if ( (*(_BYTE *)(v25 + 64) & 4) != 0 )
    {
      v27 = -1073741738;
    }
    else
    {
      if ( v17 != (char *)-80LL )
      {
        *v24 = 0LL;
        *((_OWORD *)v17 + 6) = 0LL;
        *((_QWORD *)v17 + 14) = 0LL;
      }
      for ( ; *(_WORD *)(v25 + 66) == 128; v25 = *(_QWORD *)(v25 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v25 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v25);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v44 = &unk_1C00701BA;
        v45 = (void *)ObjectPath;
        if ( ObjectPath )
          LODWORD(v44) = ObjectPath;
        PrintDebugMessage(44, CurrentThread, (_DWORD)v44, 0, 0LL);
        if ( v45 )
          ExFreePoolWithTag(v45, 0);
      }
      v27 = SyncEvalObject(v25, v17 + 80, v26, v57);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v25 + 64) |= 4u;
        if ( (*(_WORD *)(v25 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v25);
      }
      if ( v27 == 32772 )
        v27 = 259;
    }
    if ( g_SimulatorCallbackObject )
    {
      v46 = Argument1;
      if ( Argument1 )
      {
        v27 = Simulator_TestNotifyRet(Argument1);
        if ( (unsigned int)(*((_DWORD *)v46 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v46 + 8), v46[5]);
        ExFreePoolWithTag(Argument1, 0);
      }
      else
      {
        v27 = -1073741823;
      }
    }
LABEL_41:
    v28 = v48;
    goto LABEL_42;
  }
  v28 = v48;
  v55 = (__int64)v48;
  v54 = (__int64)v17;
  v56 = v52;
  P = 0LL;
  v61 = 0LL;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v34 = *v12;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_51;
  if ( v17 != (char *)-80LL )
  {
    *v24 = 0LL;
    *((_OWORD *)v17 + 6) = 0LL;
    *((_QWORD *)v17 + 14) = 0LL;
  }
  v35 = Simulator_Pre_AsyncEvalObject(
          v34,
          (int)v17 + 80,
          v50,
          (unsigned int)&v56,
          (__int64)&v61,
          (__int64)&v55,
          (__int64)&v54,
          (__int64)&P);
  if ( !v35 )
  {
LABEL_51:
    if ( (*(_BYTE *)(v34 + 64) & 4) != 0 )
    {
      v35 = -1073741738;
    }
    else
    {
      if ( v17 != (char *)-80LL )
      {
        *v24 = 0LL;
        *((_OWORD *)v17 + 6) = 0LL;
        *((_QWORD *)v17 + 14) = 0LL;
      }
      for ( ; *(_WORD *)(v34 + 66) == 128; v34 = *(_QWORD *)(v34 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        v36 = GetObjectPath(v34);
        v37 = (unsigned int)KeGetCurrentThread();
        v38 = &unk_1C00701BA;
        v39 = (void *)v36;
        if ( v36 )
          LODWORD(v38) = v36;
        PrintDebugMessage(11, v37, (_DWORD)v38, 0, 0LL);
        if ( v39 )
          ExFreePoolWithTag(v39, 0);
      }
      v35 = AsyncEvalObject(v34, (int)v17 + 80, v50, (_DWORD)v56, v55, v54, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v34 + 64) |= 4u;
        if ( (*(_WORD *)(v34 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v34);
      }
      if ( v35 == 32772 )
        v35 = 259;
    }
    if ( g_SimulatorCallbackObject && v35 != 259 )
    {
      v40 = P;
      if ( P )
      {
        v35 = Simulator_TestNotifyRet(P);
        if ( (unsigned int)(*((_DWORD *)v40 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v40 + 8), v40[5]);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        v35 = -1073741823;
      }
    }
  }
  v27 = v35;
  if ( v35 != 259 )
  {
LABEL_42:
    *(_DWORD *)v17 |= 0x10000000u;
    v28(v12, v27, v17 + 80, v17);
    if ( v12 )
    {
      dword_1C0082908 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
      {
        v47 = *v12;
        if ( v12 == (__int64 *)(*v12 + 120) )
        {
          DereferenceObjectEx(v47);
        }
        else
        {
          DereferenceObjectEx(v47);
          HeapFree(v12);
        }
      }
    }
    v29 = *((_DWORD *)v17 + 18);
    v30 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v31 = *(_QWORD *)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
    {
      v32 = (char **)*((_QWORD *)v17 + 2);
      if ( *v32 == v20 )
      {
        *v32 = (char *)v31;
        *(_QWORD *)(v31 + 8) = v32;
        KeReleaseSpinLock(&AcpiGetLock, v30);
        ExFreePoolWithTag(v17, 0);
        return v29;
      }
    }
LABEL_137:
    __fastfail(3u);
  }
  dword_1C0082908 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
  {
    v41 = *v12;
    if ( v12 == (__int64 *)(*v12 + 120) )
    {
      DereferenceObjectEx(v41);
    }
    else
    {
      DereferenceObjectEx(v41);
      HeapFree(v12);
    }
  }
  return 259LL;
}
