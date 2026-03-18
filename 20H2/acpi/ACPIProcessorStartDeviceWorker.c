/*
 * XREFs of ACPIProcessorStartDeviceWorker @ 0x1C000CC80
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C000CC30 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C000CE70 (ACPIInternalSetDeviceInterface.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C000DA60 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C00587C4 (ACPICheckModuleStarted.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C005CD50 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C0090A84 (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C0090DA8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C0090FA4 (ACPIProcessorBuildHiddenApicIds.c)
 */

void __fastcall ACPIProcessorStartDeviceWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rsi
  __int64 DeviceExtension; // rax
  __int64 v4; // rdi
  IRP *v5; // r14
  NTSTATUS InitialApicId; // ebx
  unsigned int v7; // edx
  __int64 v8; // rcx
  KIRQL v9; // r8
  __int64 i; // rdx
  unsigned int v11; // edx
  __int64 v12; // rax
  void *v13; // rbx
  void *v14; // rdx
  USHORT v15; // ax
  int started; // eax
  __int64 v17; // rdx
  void *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  USHORT NodeNumber; // [rsp+90h] [rbp+40h] BYREF
  unsigned int Data; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Data = 0;
  NodeNumber = 0;
  v25 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v4 = DeviceExtension;
  v5 = *(IRP **)(a1 + 40);
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_23;
    *(_DWORD *)(v4 + 192) = Data;
    ExAcquireFastMutex(&AcpiProcessorStartupLock);
    if ( !AcpiBootProcessorApicIds && (InitialApicId = ACPIProcessorBuildBootApicIds(), InitialApicId < 0)
      || !AcpiHiddenProcessorApicIds && (InitialApicId = ACPIProcessorBuildHiddenApicIds(), InitialApicId < 0) )
    {
      ExReleaseFastMutex(&AcpiProcessorStartupLock);
      goto LABEL_23;
    }
    ExReleaseFastMutex(&AcpiProcessorStartupLock);
    if ( AcpiBootProcessorCount )
    {
      v7 = 0;
      while ( *(_DWORD *)(AcpiBootProcessorApicIds + 4LL * v7) != Data )
      {
        v25 = ++v7;
        if ( v7 >= AcpiBootProcessorCount )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_28:
      v25 = 0;
      if ( AcpiHiddenProcessorCount )
      {
        v11 = 0;
        while ( *(_DWORD *)(AcpiHiddenProcessorApicIds + 4LL * v11) != Data )
        {
          v25 = ++v11;
          if ( v11 >= AcpiHiddenProcessorCount )
            goto LABEL_32;
        }
      }
      else
      {
LABEL_32:
        v12 = *(_QWORD *)(v4 + 8);
        if ( (v12 & 0x4000) == 0 )
        {
          v13 = &unk_1C00701BA;
          v14 = &unk_1C00701BA;
          if ( (v12 & 0x200000000000LL) != 0 )
            v14 = *(void **)(v4 + 568);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ddqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, 0, Data);
          if ( IoGetDeviceNumaNode(v1, &NodeNumber) )
          {
            v15 = -1;
            NodeNumber = -1;
          }
          else
          {
            v15 = NodeNumber;
          }
          started = KeStartDynamicProcessor(*(unsigned int *)(v4 + 196), Data, v15, &v25);
          if ( started >= 0 )
          {
            v19 = 0LL;
          }
          else
          {
            v17 = *(_QWORD *)(v4 + 8);
            v18 = &unk_1C00701BA;
            if ( (v17 & 0x200000000000LL) != 0 )
            {
              v13 = *(void **)(v4 + 568);
              if ( (v17 & 0x400000000000LL) != 0 )
                v18 = *(void **)(v4 + 576);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = 2;
              WPP_RECORDER_SF_Dqss(
                WPP_GLOBAL_Control->DeviceExtension,
                v17,
                1,
                14,
                (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
                started,
                v4,
                (__int64)v13,
                (__int64)v18);
            }
            v19 = 163LL;
          }
          ACPIInternalEvaluateOST(v4, 0LL, v19);
        }
      }
    }
  }
  else
  {
    Data = -1;
  }
  ACPIThermalAcquireCoolingInterfaces(v4);
  if ( (*(_DWORD *)(v4 + 8) & 0x4000LL) != 0 )
  {
    InitialApicId = IoSetDevicePropertyData(v1, &DEVPKEY_Spare_Processor_Apic_Id, 0, 0, 7u, 4u, &Data);
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(v1, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_23;
  }
  if ( InitialApicId >= 0 )
    *(_DWORD *)(v4 + 328) = 2;
  v8 = *(_QWORD *)(v4 + 752);
  if ( (*(_QWORD *)(v8 + 8) & 0x2000000000LL) != 0 )
    ACPICheckModuleStarted(v8, (unsigned int)InitialApicId);
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = *(_QWORD *)(v4 + 752); i; i = *(_QWORD *)(i + 752) )
    {
      if ( (*(_QWORD *)(i + 960) & 0x8000000000LL) != 0 )
      {
        v20 = i + 216;
        v21 = (_QWORD *)(v4 + 200);
        v22 = *(_QWORD **)(v20 + 8);
        if ( *v22 != v20 )
          __fastfail(3u);
        *v21 = v20;
        v21[1] = v22;
        *v22 = v21;
        *(_QWORD *)(v20 + 8) = v21;
        break;
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
LABEL_23:
  v5->IoStatus.Status = InitialApicId;
  IofCompleteRequest(v5, 0);
}
