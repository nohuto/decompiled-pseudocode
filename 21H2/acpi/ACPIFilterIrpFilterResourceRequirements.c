/*
 * XREFs of ACPIFilterIrpFilterResourceRequirements @ 0x1C009BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDebugGetIrpText @ 0x1C0002DA4 (ACPIDebugGetIrpText.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0003050 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C0016300 (ACPIInternalInterruptPolarityCacheStorePolarity.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001E3E0 (WPP_RECORDER_SF_qLqss.c)
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BEAC (PnpBiosUpdateResourceListWithSidebandResources.c)
 */

__int64 __fastcall ACPIFilterIrpFilterResourceRequirements(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _IO_STACK_LOCATION *v6; // rax
  unsigned int Status; // r14d
  __int64 v8; // rcx
  const char *v9; // rbp
  void *Information; // r15
  int updated; // r13d
  char *v12; // rax
  const char *v13; // r8
  __int64 v14; // r11
  char *v16; // rax
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // r11
  char *IrpText; // rax
  const char *v21; // r8
  const char *v22; // r10
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r12
  __int64 v26; // rax
  const char *v27; // rdx
  const char *v28; // rcx
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+B8h] [rbp+10h] BYREF

  memset(&Event, 0, sizeof(Event));
  P = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v6 = a2->Tail.Overlay.CurrentStackLocation;
  v6[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ACPIRootIrpCompleteRoutine;
  v6[-1].Context = &Event;
  v6[-1].Control = -32;
  Status = IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 736), a2);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = a2->IoStatus.Status;
  }
  v8 = 0x80000000LL;
  v9 = byte_1C00701BA;
  if ( (int)(Status + 0x80000000) < 0 || Status == -1073741637 )
  {
    Information = (void *)a2->IoStatus.Information;
    if ( !Information )
      Information = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    updated = PnpBiosUpdateResourceListWithSidebandResources(a1, Information, &P, DeviceExtension + 112);
    if ( updated != -1073741772 )
    {
      if ( updated >= 0 )
      {
        v23 = *(_QWORD *)(DeviceExtension + 112);
        v24 = v23 + 8;
        v25 = v23 + 8 + 32LL * *(unsigned int *)(v23 + 4);
        while ( 1 )
        {
          if ( v24 >= v25 )
          {
            if ( Information )
              ExFreePoolWithTag(Information, 0);
            Status = updated;
            a2->IoStatus.Information = (unsigned __int64)P;
            goto LABEL_7;
          }
          if ( *(_BYTE *)(v24 + 1) == 2 )
          {
            updated = ACPIInternalInterruptPolarityCacheStorePolarity(
                        DeviceExtension,
                        *(_DWORD *)(v24 + 12),
                        *(_DWORD *)(v24 + 16));
            if ( updated < 0 )
              break;
          }
          v24 += 32LL;
        }
        v26 = *(_QWORD *)(DeviceExtension + 8);
        v27 = byte_1C00701BA;
        v28 = byte_1C00701BA;
        if ( (v26 & 0x200000000000LL) != 0 )
        {
          v27 = *(const char **)(DeviceExtension + 568);
          if ( (v26 & 0x400000000000LL) != 0 )
            v28 = *(const char **)(DeviceExtension + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qLqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x12u,
            (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
            (char)a2,
            updated,
            DeviceExtension,
            v27,
            v28);
        ExFreePoolWithTag(P, 0);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IrpText = ACPIDebugGetIrpText(v8, 0xDu);
        WPP_RECORDER_SF_qsLqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          5u,
          0x11u,
          (__int64)&WPP_22c0b63b2f1d30c22e2e761bc8912dea_Traceguids,
          (char)a2,
          IrpText,
          updated,
          DeviceExtension,
          v22,
          v21);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = ACPIDebugGetIrpText(0x80000000LL, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0x10u,
      v19,
      (char)a2,
      v16,
      Status,
      DeviceExtension,
      v18,
      v17);
  }
LABEL_7:
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x200000000000LL) != 0 )
    v9 = *(const char **)(DeviceExtension + 568);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = ACPIDebugGetIrpText(v8, 0xDu);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      5u,
      0x13u,
      v14,
      (char)a2,
      v12,
      Status,
      DeviceExtension,
      v9,
      v13);
  }
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return Status;
}
