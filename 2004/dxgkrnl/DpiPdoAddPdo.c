/*
 * XREFs of DpiPdoAddPdo @ 0x1C017539C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0175228 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A4FC (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C01758E4 (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C01855FC (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0189364 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0189D84 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C018B170 (MonitorCreatePhysicalMonitor.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C02C7E1C (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoRemovePdo @ 0x1C02D92F0 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C02DEB6C (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char Timeout,
        BOOLEAN a6,
        __int64 a7)
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
  void *v20; // r15
  const void *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // eax
  SIZE_T v24; // rax
  char v25; // r12
  __int64 v27; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  PDEVICE_OBJECT v32; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  NTSTATUS v38; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v40; // rax
  int PhysicalMonitor; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rax
  PVOID *v56; // rcx
  struct _IO_WORKITEM *v57; // rcx
  void *v58; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  int DefaultSDDLString; // [rsp+30h] [rbp-40h]
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
  if ( *v10 != v10 )
  {
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
    if ( !Timeout )
    {
      LODWORD(v19) = 0x40000000;
      v45 = WdLogNewEntry5_WdEvent(v13, v10);
      *(_QWORD *)(v45 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v45);
      v20 = Source1[1];
      goto LABEL_14;
    }
  }
LABEL_4:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(v9, a2, a3, a4, Timeout, a6);
  LODWORD(v19) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v46 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v46 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v46);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_37;
  }
  else if ( DeviceDescriptor == 259 )
  {
    v20 = Source1[1];
    v25 = 0;
    goto LABEL_17;
  }
  v20 = Source1[1];
  if ( v12 != 1 )
  {
    v27 = a1;
LABEL_22:
    DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
    if ( *(_DWORD *)a2 != 1 )
      DeviceClassGuid = &GUID_SD_PDO;
    v29 = WdmlibIoCreateDeviceSecure(
            *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
            0x408u,
            0LL,
            0x1Cu,
            0x180u,
            Exclusive,
            &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
            DeviceClassGuid,
            &DeviceObject);
    v19 = v29;
    if ( v29 < 0 )
      goto LABEL_49;
    v62 = 1;
    DeviceExtension = DeviceObject->DeviceExtension;
    *((_DWORD *)DeviceExtension + 4) = 1953656900;
    *((_DWORD *)DeviceExtension + 5) = 5;
    v32 = DeviceObject;
    *((_QWORD *)DeviceExtension + 4) = v27;
    *((_QWORD *)DeviceExtension + 3) = v32;
    *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
    *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
    *((_BYTE *)DeviceExtension + 56) = 1;
    *((_DWORD *)DeviceExtension + 70) = 1;
    LODWORD(v32) = *(_DWORD *)(a2 + 68);
    *((_DWORD *)DeviceExtension + 71) = (_DWORD)v32;
    KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v32 != 1);
    KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_50;
    PoolWithTag[26] = 1;
    v38 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v19 = v38;
    if ( v38 < 0 )
      goto LABEL_49;
    v61 = 1;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    *((_QWORD *)DeviceExtension + 119) = WorkItem;
    if ( !WorkItem )
    {
LABEL_50:
      LODWORD(v19) = -1073741801;
      v50 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
      *(_QWORD *)(v50 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v50);
      goto LABEL_14;
    }
    *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
    *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
    *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_reporting,
      0x801B31u,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
      1,
      DefaultSDDLString);
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
    v40 = *(_QWORD **)(v7 + 3656);
    if ( *v40 != v7 + 3648 )
      goto LABEL_71;
    *(_QWORD *)DeviceExtension = v7 + 3648;
    *((_QWORD *)DeviceExtension + 1) = v40;
    *v40 = DeviceExtension;
    *(_QWORD *)(v7 + 3656) = DeviceExtension;
    ++*(_DWORD *)(v7 + 3664);
    if ( *((_DWORD *)DeviceExtension + 124) != 1 )
      goto LABEL_35;
    if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
    {
      v51 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3896), *((_DWORD *)DeviceExtension + 126), a3);
      v19 = v51;
      if ( v51 >= 0 )
        goto LABEL_34;
      v54 = WdLogNewEntry5_WdError(v53, v52);
      *(_QWORD *)(v54 + 24) = v19;
      WdLogEvent5_WdError(v54);
    }
    if ( (int)v19 < 0 )
      goto LABEL_38;
LABEL_34:
    IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
    PhysicalMonitor = MonitorCreatePhysicalMonitor(*(void **)(v7 + 3896), *((_DWORD *)DeviceExtension + 126), 1, a7);
    v19 = PhysicalMonitor;
    if ( PhysicalMonitor >= 0 )
    {
LABEL_35:
      LODWORD(v19) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, Source1);
      if ( (int)v19 < 0 )
      {
        if ( *((_DWORD *)DeviceExtension + 124) != 1 )
          goto LABEL_37;
        LODWORD(v19) = 0;
      }
      DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
      _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
      DeviceObject->Flags |= 4u;
      DeviceObject->Flags |= 0x2000u;
      DeviceObject->Flags &= ~0x4000u;
      DeviceObject->Flags &= ~0x80u;
      v44 = WdLogNewEntry5_WdEvent(v43, v42);
      *(_QWORD *)(v44 + 24) = DeviceObject;
      WdLogEvent5_WdEvent(v44);
LABEL_37:
      v20 = Source1[1];
      goto LABEL_38;
    }
LABEL_49:
    v49 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v49 + 24) = v19;
    WdLogEvent5_WdError(v49);
LABEL_38:
    v25 = v61;
    v63 = v61;
    if ( (_DWORD)v19 == 259 )
      goto LABEL_17;
    goto LABEL_15;
  }
  if ( Source1[1] != *((void **)DeviceExtension + 116) )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
      goto LABEL_9;
    if ( Source1[1] )
      goto LABEL_10;
    if ( !v21 )
    {
LABEL_9:
      if ( !Source1[1] )
      {
LABEL_48:
        *((_BYTE *)DeviceExtension + 511) = 1;
        v47 = WdLogNewEntry5_WdEvent(v22, v21);
        *(_QWORD *)(v47 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v47);
        v27 = a1;
        LOBYTE(v48) = 1;
        DpiPdoRemovePdo(a1, a2, v48, a7);
        goto LABEL_22;
      }
LABEL_10:
      if ( v21 )
      {
        v23 = *((_DWORD *)DeviceExtension + 231);
        if ( HIDWORD(Source1[0]) == v23 )
        {
          v24 = RtlCompareMemory(Source1[1], v21, v23);
          v22 = HIDWORD(Source1[0]);
          if ( v24 == HIDWORD(Source1[0]) )
            goto LABEL_13;
        }
      }
      goto LABEL_48;
    }
  }
LABEL_13:
  LODWORD(v19) = 0x40000000;
LABEL_14:
  v25 = v61;
LABEL_15:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  }
LABEL_17:
  if ( (int)v19 >= 0 || v62 != 1 )
    goto LABEL_18;
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
        goto LABEL_61;
      }
    }
LABEL_71:
    __fastfail(3u);
  }
LABEL_61:
  KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v25 == 1 )
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
LABEL_18:
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  return (unsigned int)v19;
}
