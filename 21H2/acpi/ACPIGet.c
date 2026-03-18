/*
 * XREFs of ACPIGet @ 0x1C0010180
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C00029E0 (ACPICMButtonStartWorker.c)
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     IsPciDeviceWorker @ 0x1C0007A10 (IsPciDeviceWorker.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C00090D0 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C0009A50 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C0009D10 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C000A160 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIDetectDockDevices @ 0x1C000A628 (ACPIDetectDockDevices.c)
 *     IsPciBusAsyncWorker @ 0x1C000B380 (IsPciBusAsyncWorker.c)
 *     GetPciAddressWorker @ 0x1C000CDE0 (GetPciAddressWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C000ECC0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIThermalLoopEx @ 0x1C00209D8 (ACPIThermalLoopEx.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C0025B10 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C0027D40 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C00286C0 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0029D30 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C002DD10 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIDockIrpRemoveDevice @ 0x1C0049220 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C004AD40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMLidSetPower @ 0x1C004DC00 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C004DD90 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C004E2D8 (CmosGetOpRegionType.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C00511D0 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0051370 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C500 (LinkNodepRunSrsWorker.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00905D8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092610 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C0092934 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092A34 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C0092C24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00932F8 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C0093BA0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094BF8 (ACPISystemPowerGetSxD.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C009581C (ACPISystemPowerGetDeviceWake.c)
 *     ACPIThermalWorker @ 0x1C00959C0 (ACPIThermalWorker.c)
 *     ACPIThermalGetParameter @ 0x1C00966CC (ACPIThermalGetParameter.c)
 *     TranslateEjectInterface @ 0x1C0097130 (TranslateEjectInterface.c)
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalSetProximityDomain @ 0x1C009800C (ACPIInternalSetProximityDomain.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A1918 (AcpiEjectBusNumberTranslator.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C00AA290 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C00AA350 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C00AACA0 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C00AB2A0 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C00AC2E0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     LinkNodeGetPossibleResources @ 0x1C00B5F70 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AsyncEvalObject @ 0x1C00114E0 (AsyncEvalObject.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     HeapFree @ 0x1C0018DD0 (HeapFree.c)
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     Simulator_Free_Arguments @ 0x1C0064DF4 (Simulator_Free_Arguments.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00651CC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_TestNotifyRet @ 0x1C0065578 (Simulator_TestNotifyRet.c)
 *     AMLIDebugger @ 0x1C0067034 (AMLIDebugger.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ACPIGet(
        __int64 a1,
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
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  __int16 v15; // ax
  __int64 Pool2; // rax
  char *v17; // r14
  KIRQL v18; // al
  char **v19; // rcx
  char *v20; // r12
  KIRQL v21; // dl
  __int64 v22; // rax
  __int64 *v23; // rbx
  __int64 *v24; // rax
  unsigned int v25; // eax
  void (__fastcall *v26)(volatile signed __int32 *, _QWORD, char *, char *); // r13
  unsigned int v27; // ebx
  KIRQL v28; // al
  __int64 v29; // r8
  char **v30; // rdx
  _OWORD *v32; // rsi
  __int64 v33; // r15
  int v34; // edi
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v37; // rdi
  _QWORD *v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rcx
  void (__fastcall *v41)(volatile signed __int32 *, _QWORD, char *, char *); // [rsp+40h] [rbp-51h] BYREF
  PVOID P; // [rsp+48h] [rbp-49h] BYREF
  __int128 *v43; // [rsp+50h] [rbp-41h] BYREF
  __int64 v44; // [rsp+58h] [rbp-39h]
  __int64 v45; // [rsp+60h] [rbp-31h] BYREF
  __int128 v46; // [rsp+68h] [rbp-29h] BYREF
  __int128 v47; // [rsp+78h] [rbp-19h]
  __int64 v48; // [rsp+88h] [rbp-9h]
  __int64 v49; // [rsp+90h] [rbp-1h] BYREF
  int v50; // [rsp+E0h] [rbp+4Fh]

  v48 = 0LL;
  v43 = 0LL;
  v50 = a3 & 0x20000000;
  v44 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v11 = a3 & 0x4000000;
  if ( (a3 & 0x4000000) != 0 )
    v12 = (volatile signed __int32 *)a1;
  else
    v12 = *(volatile signed __int32 **)(a1 + 760);
  v13 = 0LL;
  if ( !v11 )
    v13 = a1;
  v14 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x40000 )
  {
    P = (PVOID)v13;
    v41 = (void (__fastcall *)(volatile signed __int32 *, _QWORD, char *, char *))&ACPIGetWorkerForInteger;
    if ( (a3 & 0x4000800) == 0x800 )
    {
      P = (PVOID)v13;
      if ( _bittest64((const signed __int64 *)(v13 + 8), 0x39u) )
      {
        P = *(PVOID *)(v13 + 184);
        v12 = (volatile signed __int32 *)*((_QWORD *)P + 95);
      }
    }
  }
  else
  {
    switch ( v14 )
    {
      case 0x80000:
        P = (PVOID)v13;
        v41 = (void (__fastcall *)(volatile signed __int32 *, _QWORD, char *, char *))&ACPIGetWorkerForString;
        break;
      case 0x10000:
        P = (PVOID)v13;
        v41 = (void (__fastcall *)(volatile signed __int32 *, _QWORD, char *, char *))&ACPIGetWorkerForBuffer;
        break;
      case 0x20000:
        P = (PVOID)v13;
        v41 = (void (__fastcall *)(volatile signed __int32 *, _QWORD, char *, char *))&ACPIGetWorkerForData;
        break;
      case 0x100000:
        P = (PVOID)v13;
        v41 = (void (__fastcall *)(volatile signed __int32 *, _QWORD, char *, char *))&ACPIGetWorkerForNothing;
        break;
      default:
        return 3221225713LL;
    }
  }
  v15 = 3;
  if ( (a3 & 0x3800000) != 0 )
  {
    v44 = 1LL;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v46) = 1;
      *(_QWORD *)&v47 = a4;
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
      WORD1(v46) = v15;
      DWORD2(v47) = a5;
      v48 = a4;
    }
    v43 = &v46;
  }
  Pool2 = ExAllocatePool2(64LL, 120LL, 1299211073LL);
  v17 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a3;
  *(_DWORD *)(Pool2 + 4) = a2;
  *(_QWORD *)(Pool2 + 24) = v13;
  *(_QWORD *)(Pool2 + 32) = v12;
  *(_QWORD *)(Pool2 + 40) = a6;
  *(_QWORD *)(Pool2 + 48) = a7;
  *(_QWORD *)(Pool2 + 56) = a8;
  *(_QWORD *)(Pool2 + 64) = a9;
  v18 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v19 = (char **)qword_1C0081908;
  v20 = v17 + 8;
  if ( *(__int64 **)qword_1C0081908 != &AcpiGetListEntry )
    goto LABEL_104;
  *(_QWORD *)v20 = &AcpiGetListEntry;
  *((_QWORD *)v17 + 2) = v19;
  *v19 = v20;
  qword_1C0081908 = (__int64)(v17 + 8);
  KeReleaseSpinLock(&AcpiGetLock, v18);
  if ( !v11 && (*(_QWORD *)(v13 + 8) & 0x208000000000000LL) == 0x8000000000000LL )
    goto LABEL_19;
  v21 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v22 = *(_QWORD *)v12;
  v23 = *(__int64 **)(*(_QWORD *)v12 + 24LL);
  v24 = (__int64 *)(v22 + 24);
  if ( v24 == v23 )
  {
LABEL_17:
    ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
LABEL_18:
    v12 = 0LL;
LABEL_19:
    v25 = -1073741772;
LABEL_20:
    v26 = v41;
    goto LABEL_21;
  }
  while ( a2 != *((_DWORD *)v23 + 10) )
  {
    v23 = (__int64 *)*v23;
    if ( v24 == v23 )
      goto LABEL_17;
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v21);
  if ( !v23 )
    goto LABEL_18;
  v12 = (volatile signed __int32 *)(v23 + 15);
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v12 + 2);
  if ( !v12 )
    goto LABEL_19;
  if ( *(_WORD *)(*(_QWORD *)v12 + 66LL) == 8
    && P
    && a3 >= 0
    && *((_QWORD *)P + 81)
    && (*((_BYTE *)P + 1000) & 0x40) == 0 )
  {
    v25 = -1073741661;
    goto LABEL_20;
  }
  v32 = v17 + 80;
  if ( !v50 )
  {
    v25 = AMLIEvalNameSpaceObject((__int64 *)v12, (__int64)(v17 + 80), v44, v43);
    goto LABEL_20;
  }
  v26 = v41;
  v45 = (__int64)v17;
  P = 0LL;
  v49 = 0LL;
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger();
  }
  v33 = *(_QWORD *)v12;
  if ( !g_SimulatorCallbackObject )
    goto LABEL_34;
  if ( v17 != (char *)-80LL )
  {
    *v32 = 0LL;
    *((_OWORD *)v17 + 6) = 0LL;
    *((_QWORD *)v17 + 14) = 0LL;
  }
  v25 = Simulator_Pre_AsyncEvalObject(
          v33,
          (int)v17 + 80,
          v44,
          (unsigned int)&v43,
          (__int64)&v49,
          (__int64)&v41,
          (__int64)&v45,
          (__int64)&P);
  v34 = v25;
  if ( !v25 )
  {
LABEL_34:
    if ( (*(_BYTE *)(v33 + 64) & 4) != 0 )
    {
      v34 = -1073741738;
    }
    else
    {
      if ( v17 != (char *)-80LL )
      {
        *v32 = 0LL;
        *((_OWORD *)v17 + 6) = 0LL;
        *((_QWORD *)v17 + 14) = 0LL;
      }
      for ( ; *(_WORD *)(v33 + 66) == 128; v33 = *(_QWORD *)(v33 + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
        _InterlockedIncrement((volatile signed __int32 *)(v33 + 112));
      if ( (gDebugger & 8) != 0 )
      {
        ObjectPath = GetObjectPath(v33);
        CurrentThread = (unsigned int)KeGetCurrentThread();
        v37 = (void *)ObjectPath;
        if ( ObjectPath )
        {
          PrintDebugMessage(11, CurrentThread, ObjectPath, 0, 0LL);
          ExFreePoolWithTag(v37, 0);
        }
        else
        {
          PrintDebugMessage(11, CurrentThread, (unsigned int)&unk_1C006FB8B, 0, 0LL);
        }
      }
      v34 = AsyncEvalObject(v33, (int)v17 + 80, v44, (_DWORD)v43, (__int64)v41, v45, 1);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v33 + 64) |= 4u;
        if ( (*(_WORD *)(v33 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v33);
      }
      if ( v34 == 32772 )
        v34 = 259;
    }
    if ( g_SimulatorCallbackObject && v34 != 259 )
    {
      v38 = P;
      if ( P )
      {
        v34 = Simulator_TestNotifyRet(P);
        if ( (unsigned int)(*((_DWORD *)v38 + 1) - 1) <= 2 )
          Simulator_Free_Arguments(*((unsigned int *)v38 + 8), v38[5]);
        ExFreePoolWithTag(P, 0);
      }
      else
      {
        v34 = -1073741823;
      }
    }
    v25 = v34;
  }
  if ( v34 != 259 )
  {
LABEL_21:
    *(_DWORD *)v17 |= 0x10000000u;
    v26(v12, v25, v17 + 80, v17);
    if ( v12 )
    {
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
      {
        v40 = *(_QWORD *)v12;
        if ( v12 == (volatile signed __int32 *)(*(_QWORD *)v12 + 120LL) )
        {
          DereferenceObjectEx(v40);
        }
        else
        {
          DereferenceObjectEx(v40);
          HeapFree(v12);
        }
      }
    }
    v27 = *((_DWORD *)v17 + 18);
    v28 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v29 = *(_QWORD *)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) == v20 )
    {
      v30 = (char **)*((_QWORD *)v17 + 2);
      if ( *v30 == v20 )
      {
        *v30 = (char *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        KeReleaseSpinLock(&AcpiGetLock, v28);
        ExFreePoolWithTag(v17, 0);
        return v27;
      }
    }
LABEL_104:
    __fastfail(3u);
  }
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
  {
    v39 = *(_QWORD *)v12;
    if ( v12 == (volatile signed __int32 *)(*(_QWORD *)v12 + 120LL) )
    {
      DereferenceObjectEx(v39);
    }
    else
    {
      DereferenceObjectEx(v39);
      HeapFree(v12);
    }
  }
  return 259LL;
}
