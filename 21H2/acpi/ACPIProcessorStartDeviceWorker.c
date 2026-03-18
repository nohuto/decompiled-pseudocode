/*
 * XREFs of ACPIProcessorStartDeviceWorker @ 0x1C0004D10
 * Callers:
 *     ACPIProcessorStartDevice @ 0x1C00040B0 (ACPIProcessorStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C0004F28 (ACPIInternalSetDeviceInterface.c)
 *     ACPIThermalAcquireCoolingInterfaces @ 0x1C0005398 (ACPIThermalAcquireCoolingInterfaces.c)
 *     WPP_RECORDER_SF_ddqss @ 0x1C00558D0 (WPP_RECORDER_SF_ddqss.c)
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     ACPICheckModuleStarted @ 0x1C005969C (ACPICheckModuleStarted.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C00905D8 (ACPIProcessorGetInitialApicId.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1C00907C8 (ACPIProcessorBuildHiddenApicIds.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1C00A1560 (ACPIProcessorBuildBootApicIds.c)
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
  const char *v13; // rbx
  void *v14; // rdx
  void *v15; // rcx
  USHORT v16; // ax
  int started; // eax
  __int64 v18; // rdx
  const char *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // [rsp+40h] [rbp-10h]
  USHORT NodeNumber; // [rsp+90h] [rbp+40h] BYREF
  unsigned int Data; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+50h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  Data = 0;
  NodeNumber = 0;
  v27 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v4 = DeviceExtension;
  v5 = *(IRP **)(a1 + 40);
  if ( *((_QWORD *)AcpiInformation + 4) )
  {
    InitialApicId = ACPIProcessorGetInitialApicId(DeviceExtension, &Data);
    if ( InitialApicId < 0 )
      goto LABEL_22;
    *(_DWORD *)(v4 + 192) = Data;
    ExAcquireFastMutex(&AcpiProcessorStartupLock);
    if ( !AcpiBootProcessorApicIds && (InitialApicId = ACPIProcessorBuildBootApicIds(), InitialApicId < 0)
      || !AcpiHiddenProcessorApicIds && (InitialApicId = ACPIProcessorBuildHiddenApicIds(), InitialApicId < 0) )
    {
      ExReleaseFastMutex(&AcpiProcessorStartupLock);
      goto LABEL_22;
    }
    ExReleaseFastMutex(&AcpiProcessorStartupLock);
    if ( AcpiBootProcessorCount )
    {
      v7 = 0;
      while ( *(_DWORD *)(AcpiBootProcessorApicIds + 4LL * v7) != Data )
      {
        v27 = ++v7;
        if ( v7 >= AcpiBootProcessorCount )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      v27 = 0;
      if ( AcpiHiddenProcessorCount )
      {
        v11 = 0;
        while ( *(_DWORD *)(AcpiHiddenProcessorApicIds + 4LL * v11) != Data )
        {
          v27 = ++v11;
          if ( v11 >= AcpiHiddenProcessorCount )
            goto LABEL_33;
        }
      }
      else
      {
LABEL_33:
        v12 = *(_QWORD *)(v4 + 8);
        if ( (v12 & 0x4000) == 0 )
        {
          v13 = (const char *)&unk_1C006FB8B;
          v14 = &unk_1C006FB8B;
          v15 = &unk_1C006FB8B;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v14 = *(void **)(v4 + 608);
            if ( (v12 & 0x400000000000LL) != 0 )
              v15 = *(void **)(v4 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = (__int64)v14;
            LOBYTE(v14) = 4;
            WPP_RECORDER_SF_ddqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v14,
              1,
              13,
              (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
              *(_DWORD *)(v4 + 196),
              Data,
              v4,
              v24,
              (__int64)v15);
          }
          if ( IoGetDeviceNumaNode(v1, &NodeNumber) )
          {
            v16 = -1;
            NodeNumber = -1;
          }
          else
          {
            v16 = NodeNumber;
          }
          started = KeStartDynamicProcessor(*(unsigned int *)(v4 + 196), Data, v16, &v27);
          if ( started >= 0 )
          {
            v20 = 0LL;
          }
          else
          {
            v18 = *(_QWORD *)(v4 + 8);
            v19 = (const char *)&unk_1C006FB8B;
            if ( (v18 & 0x200000000000LL) != 0 )
            {
              v13 = *(const char **)(v4 + 608);
              if ( (v18 & 0x400000000000LL) != 0 )
                v19 = *(const char **)(v4 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Dqss(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                1u,
                0xEu,
                (__int64)&WPP_dae7fe894c7e323433b1d18b69ca790c_Traceguids,
                started,
                v4,
                v13,
                v19);
            v20 = 163LL;
          }
          ACPIInternalEvaluateOST(v4, 0LL, v20);
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
    if ( InitialApicId < 0 )
      goto LABEL_14;
  }
  else
  {
    InitialApicId = ACPIInternalSetDeviceInterface(v1, &GUID_DEVICE_PROCESSOR);
    if ( InitialApicId < 0 )
      goto LABEL_22;
  }
  *(_DWORD *)(v4 + 368) = 2;
LABEL_14:
  v8 = *(_QWORD *)(v4 + 792);
  if ( _bittest64((const signed __int64 *)(v8 + 8), 0x25u) )
    ACPICheckModuleStarted(v8, (unsigned int)InitialApicId);
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = *(_QWORD *)(v4 + 792); i; i = *(_QWORD *)(i + 792) )
    {
      if ( _bittest64((const signed __int64 *)(i + 1000), 0x27u) )
      {
        v21 = i + 216;
        v22 = (_QWORD *)(v4 + 200);
        v23 = *(_QWORD **)(v21 + 8);
        if ( *v23 != v21 )
          __fastfail(3u);
        *v22 = v21;
        v22[1] = v23;
        *v23 = v22;
        *(_QWORD *)(v21 + 8) = v22;
        break;
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
LABEL_22:
  v5->IoStatus.Status = InitialApicId;
  IofCompleteRequest(v5, 0);
}
