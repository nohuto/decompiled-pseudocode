/*
 * XREFs of DpiPdoAddPdo @ 0x1C0179C7C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0179B08 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A84C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     Feature_OemPanelDriverSupport__private_ReportDeviceUsage @ 0x1C0027E80 (Feature_OemPanelDriverSupport__private_ReportDeviceUsage.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C017A410 (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C018AD9C (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C018DB70 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C018E590 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C019142C (MonitorCreatePhysicalMonitor.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C02C81CC (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoRemovePdo @ 0x1C02D9630 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C02DEEAC (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char Timeout,
        BOOLEAN a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  int v9; // r11d
  _QWORD **v10; // rdx
  char v12; // bl
  _QWORD *v13; // rcx
  PVOID DeviceExtension; // rdi
  _QWORD *v15; // rax
  int DeviceDescriptor; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // r15
  char v23; // r12
  const void *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  SIZE_T v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r8
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  PDEVICE_OBJECT v36; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  NTSTATUS v43; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int8 v50; // al
  int PhysicalMonitor; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rax
  PVOID *v56; // rcx
  struct _IO_WORKITEM *v57; // rcx
  void *v58; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v61; // [rsp+50h] [rbp-20h]
  char v62; // [rsp+51h] [rbp-1Fh]
  char v63; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  void *Source1[2]; // [rsp+60h] [rbp-10h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  DeviceObject = 0LL;
  v9 = a1;
  v62 = 0;
  v61 = 0;
  v10 = *(_QWORD ***)(v7 + 3648);
  v12 = 0;
  v63 = 0;
  *(_OWORD *)Source1 = 0LL;
  v13 = *v10;
  DeviceExtension = 0LL;
  v15 = v10;
  if ( *v10 == v10 )
    goto LABEL_4;
  while ( 1 )
  {
    DeviceExtension = v15;
    if ( *((_DWORD *)v15 + 126) == *(_DWORD *)(a2 + 24) )
      break;
    v15 = v13;
    v13 = (_QWORD *)*v13;
    if ( v13 == v10 )
      goto LABEL_4;
  }
  v12 = 1;
  DeviceObject = (PDEVICE_OBJECT)v15[3];
  if ( Timeout )
  {
LABEL_4:
    DeviceDescriptor = DpiPdoGetDeviceDescriptor(v9, a2, a3, a4, Timeout, a6);
    LODWORD(v19) = DeviceDescriptor;
    if ( DeviceDescriptor >= 0 )
    {
      if ( DeviceDescriptor == 259 )
      {
        v22 = Source1[1];
        v23 = 0;
        goto LABEL_49;
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdEvent(v18, v17);
      *(_QWORD *)(v20 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v20);
      if ( *(_DWORD *)a2 != 1 )
        goto LABEL_44;
    }
    v22 = Source1[1];
    if ( v12 != 1 )
    {
      v29 = a1;
LABEL_23:
      DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
      if ( *(_DWORD *)a2 != 1 )
        DeviceClassGuid = &GUID_SD_PDO;
      v32 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
              0x408u,
              0LL,
              0x1Cu,
              0x180u,
              Exclusive,
              &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
              DeviceClassGuid,
              &DeviceObject);
      v19 = v32;
      if ( v32 < 0 )
        goto LABEL_26;
      v62 = 1;
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 5;
      v36 = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = v29;
      *((_QWORD *)DeviceExtension + 3) = v36;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
      *((_BYTE *)DeviceExtension + 56) = 1;
      *((_DWORD *)DeviceExtension + 70) = 1;
      LODWORD(v36) = *(_DWORD *)(a2 + 68);
      *((_DWORD *)DeviceExtension + 71) = (_DWORD)v36;
      KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v36 != 1);
      KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
      *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_28:
        LODWORD(v19) = -1073741801;
        v42 = WdLogNewEntry5_WdLowResource(v39, v38, v40, v41);
        *(_QWORD *)(v42 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v42);
        goto LABEL_9;
      }
      PoolWithTag[26] = 1;
      v43 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      v19 = v43;
      if ( v43 < 0 )
        goto LABEL_26;
      v61 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( !WorkItem )
        goto LABEL_28;
      *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
      *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
      Feature_OemPanelDriverSupport__private_ReportDeviceUsage();
      *((_QWORD *)DeviceExtension + 117) = a2;
      *((_QWORD *)DeviceExtension + 15) = DpiPdoDispatchIoctl;
      *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
      *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
      *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
      *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
      *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
      *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
      *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
      *((_DWORD *)DeviceExtension + 124) = *(_DWORD *)a2;
      *((_DWORD *)DeviceExtension + 125) = *(_DWORD *)(a2 + 20);
      *((_DWORD *)DeviceExtension + 126) = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *((_DWORD *)DeviceExtension + 244) = a3;
      *((_DWORD *)DeviceExtension + 245) = 0;
      KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
      v45 = *(_QWORD **)(v7 + 3656);
      if ( *v45 != v7 + 3648 )
        goto LABEL_68;
      *(_QWORD *)DeviceExtension = v7 + 3648;
      *((_QWORD *)DeviceExtension + 1) = v45;
      *v45 = DeviceExtension;
      *(_QWORD *)(v7 + 3656) = DeviceExtension;
      ++*(_DWORD *)(v7 + 3664);
      if ( *((_DWORD *)DeviceExtension + 124) != 1 )
        goto LABEL_40;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
      {
        v46 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3896), *((_DWORD *)DeviceExtension + 126), a3);
        v19 = v46;
        if ( v46 >= 0 )
          goto LABEL_39;
        v49 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v49 + 24) = v19;
        WdLogEvent5_WdError(v49);
      }
      if ( (int)v19 < 0 )
        goto LABEL_45;
LABEL_39:
      v50 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
      PhysicalMonitor = MonitorCreatePhysicalMonitor(
                          *(void **)(v7 + 3896),
                          *((_DWORD *)DeviceExtension + 126),
                          DeviceObject,
                          v50,
                          1u,
                          a7);
      v19 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
LABEL_40:
        LODWORD(v19) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, Source1);
        if ( (int)v19 >= 0 )
        {
LABEL_43:
          DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          v54 = WdLogNewEntry5_WdEvent(v53, v52);
          *(_QWORD *)(v54 + 24) = DeviceObject;
          WdLogEvent5_WdEvent(v54);
          goto LABEL_44;
        }
        if ( *((_DWORD *)DeviceExtension + 124) == 1 )
        {
          LODWORD(v19) = 0;
          goto LABEL_43;
        }
LABEL_44:
        v22 = Source1[1];
LABEL_45:
        v23 = v61;
        v63 = v61;
        if ( (_DWORD)v19 == 259 )
          goto LABEL_49;
        goto LABEL_46;
      }
LABEL_26:
      v35 = WdLogNewEntry5_WdError(v34, v33);
      *(_QWORD *)(v35 + 24) = v19;
      WdLogEvent5_WdError(v35);
      goto LABEL_45;
    }
    if ( Source1[1] != *((void **)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_16;
      if ( Source1[1] )
        goto LABEL_17;
      if ( !v24 )
      {
LABEL_16:
        if ( !Source1[1] )
        {
LABEL_21:
          *((_BYTE *)DeviceExtension + 511) = 1;
          v28 = WdLogNewEntry5_WdEvent(v25, v24);
          *(_QWORD *)(v28 + 24) = DeviceObject;
          WdLogEvent5_WdEvent(v28);
          v29 = a1;
          LOBYTE(v30) = 1;
          DpiPdoRemovePdo(a1, a2, v30, a7);
          goto LABEL_23;
        }
LABEL_17:
        if ( v24 )
        {
          v26 = *((_DWORD *)DeviceExtension + 231);
          if ( HIDWORD(Source1[0]) == v26 )
          {
            v27 = RtlCompareMemory(Source1[1], v24, v26);
            v25 = HIDWORD(Source1[0]);
            if ( v27 == HIDWORD(Source1[0]) )
              goto LABEL_20;
          }
        }
        goto LABEL_21;
      }
    }
LABEL_20:
    LODWORD(v19) = 0x40000000;
    goto LABEL_9;
  }
  LODWORD(v19) = 0x40000000;
  v21 = WdLogNewEntry5_WdEvent(v13, v10);
  *(_QWORD *)(v21 + 24) = *(unsigned int *)(a2 + 24);
  WdLogEvent5_WdEvent(v21);
  v22 = Source1[1];
LABEL_9:
  v23 = v61;
LABEL_46:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  }
LABEL_49:
  if ( (int)v19 >= 0 || v62 != 1 )
    goto LABEL_65;
  if ( v63 == 1 )
  {
    v55 = *(_QWORD **)DeviceExtension;
    if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v56 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v56 == DeviceExtension )
      {
        *v56 = v55;
        v55[1] = v56;
        --*(_DWORD *)(v7 + 3664);
        goto LABEL_55;
      }
    }
LABEL_68:
    __fastfail(3u);
  }
LABEL_55:
  KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v23 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v57 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v57 )
    IoFreeWorkItem(v57);
  v58 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v58 )
  {
    ExFreePoolWithTag(v58, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_65:
  if ( v22 )
    ExFreePoolWithTag(v22, 0);
  return (unsigned int)v19;
}
