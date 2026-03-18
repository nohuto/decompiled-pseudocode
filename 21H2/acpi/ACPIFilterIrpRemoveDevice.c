/*
 * XREFs of ACPIFilterIrpRemoveDevice @ 0x1C002CDC0
 * Callers:
 *     ACPIDispatchIrpDepFilterRemoveDevice @ 0x1C0055B30 (ACPIDispatchIrpDepFilterRemoveDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0001CCC (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C00071F0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002D08C (ACPIInitDeleteChildDeviceList.c)
 *     ACPIWakeDisconnectWakeInterrupts @ 0x1C002FABC (ACPIWakeDisconnectWakeInterrupts.c)
 *     EnableDisableRegions @ 0x1C0094CC0 (EnableDisableRegions.c)
 *     AcpiDeletePciBusInterface @ 0x1C00A1094 (AcpiDeletePciBusInterface.c)
 *     ACPIInitStopDevice @ 0x1C00AEFEC (ACPIInitStopDevice.c)
 *     IsPciBusExtension @ 0x1C00B024C (IsPciBusExtension.c)
 */

__int64 __fastcall ACPIFilterIrpRemoveDevice(ULONG_PTR a1, IRP *a2)
{
  unsigned __int8 MinorFunction; // r12
  __int64 DeviceExtension; // rbx
  char v5; // r14
  volatile signed __int64 *v6; // rdi
  char v7; // r15
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r12
  bool v10; // r13
  __int64 v11; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v13; // rax
  NTSTATUS Status; // edi
  __int64 v15; // rax
  const char *v16; // rcx
  const char *v17; // rdx
  __int64 v18; // rax
  void *v19; // rcx
  unsigned int v20; // ebx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 v23; // [rsp+B8h] [rbp+10h]

  memset(&Event, 0, sizeof(Event));
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v23 = MinorFunction;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  ACPIInitDeleteChildDeviceList(DeviceExtension);
  if ( *(_QWORD *)(DeviceExtension + 368) )
  {
    v5 = 0;
    if ( *(_DWORD *)(DeviceExtension + 368) == 5 )
    {
      v6 = (volatile signed __int64 *)(DeviceExtension + 8);
      goto LABEL_30;
    }
  }
  else
  {
    v5 = 1;
  }
  v6 = (volatile signed __int64 *)(DeviceExtension + 8);
  if ( *(char *)(DeviceExtension + 8) < 0 )
  {
LABEL_30:
    v7 = 1;
    v8 = v6;
    goto LABEL_10;
  }
  v7 = 0;
  v8 = (volatile signed __int64 *)(DeviceExtension + 8);
  if ( !v5 )
  {
    v9 = *(_QWORD *)(DeviceExtension + 1000) & 0x8000LL;
    v10 = (*(_QWORD *)(DeviceExtension + 1000) & 0x8000) != 0;
    if ( (unsigned __int8)IsPciBusExtension(DeviceExtension) || v9 )
    {
      LOBYTE(v11) = v10;
      EnableDisableRegions(*(_QWORD *)(DeviceExtension + 760), 0LL, v11);
      v7 = 0;
      v8 = (volatile signed __int64 *)(DeviceExtension + 8);
    }
    MinorFunction = v23;
  }
LABEL_10:
  AcpiDeletePciBusInterface(DeviceExtension);
  ACPIInitReferenceDeviceExtension(DeviceExtension);
  if ( *(_DWORD *)(DeviceExtension + 368) != 5 )
    _InterlockedOr64(v8, 0x800uLL);
  *(_DWORD *)(DeviceExtension + 368) = 0;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v13 = a2->Tail.Overlay.CurrentStackLocation;
  v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v13[-1].Context = &Event;
  v13[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v15 = *(_QWORD *)(DeviceExtension + 8);
  v16 = (const char *)&unk_1C006FB8B;
  v17 = (const char *)&unk_1C006FB8B;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = *(const char **)(DeviceExtension + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = *(const char **)(DeviceExtension + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = MinorFunction;
    if ( MinorFunction >= 0x1Au )
      v18 = 26LL;
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x17u,
      (__int64)&WPP_e895f2808a1832dc95c5c4714d739d11_Traceguids,
      (char)a2,
      ACPIDispatchPnpTableNames[v18],
      Status,
      DeviceExtension,
      v16,
      v17);
  }
  if ( Status >= 0 )
  {
    if ( !v7 && !v5 )
    {
      LOBYTE(v17) = 1;
      ACPIInitStopDevice(DeviceExtension, v17);
    }
    ACPIWakeDisconnectWakeInterrupts(DeviceExtension, v17);
    v19 = *(void **)(DeviceExtension + 112);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(DeviceExtension + 112) = 0LL;
    }
    ACPIInitDereferenceDeviceExtensionUnlocked(DeviceExtension);
  }
  v20 = a2->IoStatus.Status;
  IofCompleteRequest(a2, 0);
  return v20;
}
