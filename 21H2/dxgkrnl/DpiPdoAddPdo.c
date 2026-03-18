/*
 * XREFs of DpiPdoAddPdo @ 0x1C0205A28
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0011E60 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0204C58 (WdmlibIoCreateDeviceSecure.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C020595C (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0205ED8 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C02067A4 (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0206954 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0206D64 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C03889CC (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoRemovePdo @ 0x1C0397BD4 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        int a4,
        char a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8)
{
  PVOID DeviceExtension; // rdi
  __int64 v9; // r13
  int v11; // ebx
  char v12; // r12
  _QWORD **v13; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  int DeviceDescriptor; // eax
  __int64 v18; // rsi
  PVOID v19; // r15
  __int64 v20; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v22; // eax
  PDEVICE_OBJECT v23; // rax
  _DWORD *PoolWithTag; // rax
  NTSTATUS v25; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v27; // rax
  int v28; // eax
  int PhysicalMonitor; // eax
  __int64 v31; // r8
  const void *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  PVOID *v38; // rcx
  struct _IO_WORKITEM *v39; // rcx
  void *v40; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v42; // [rsp+50h] [rbp-20h]
  char v43; // [rsp+51h] [rbp-1Fh]
  char v44; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF

  DeviceObject = 0LL;
  DeviceExtension = 0LL;
  v9 = *(_QWORD *)(a1 + 64);
  v11 = a1;
  v43 = 0;
  v12 = 0;
  v44 = 0;
  v42 = 0;
  v13 = *(_QWORD ***)(v9 + 3648);
  *(_OWORD *)P = 0LL;
  v15 = v13;
  v16 = *v13;
  if ( *v13 != v13 )
  {
    v31 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      DeviceExtension = v15;
      if ( *((_DWORD *)v15 + 126) == (_DWORD)v31 )
        break;
      v15 = v16;
      v16 = (_QWORD *)*v16;
      if ( v16 == v13 )
        goto LABEL_2;
    }
    DeviceObject = (PDEVICE_OBJECT)v15[3];
    v43 = 1;
    if ( !a5 )
    {
      LODWORD(v18) = 0x40000000;
      WdLogSingleEntry1(4LL, v31);
LABEL_21:
      v19 = P[1];
      goto LABEL_22;
    }
  }
LABEL_2:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(v11, a2, a3, a4, a5, a6);
  LODWORD(v18) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    WdLogSingleEntry1(4LL, *(unsigned int *)(a2 + 24));
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_20;
  }
  else if ( DeviceDescriptor == 259 )
  {
    v19 = P[1];
    goto LABEL_25;
  }
  v19 = P[1];
  if ( v43 == 1 )
  {
    if ( P[1] != *((PVOID *)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_41;
      if ( P[1] )
      {
LABEL_42:
        if ( v32 )
        {
          v33 = *((_DWORD *)DeviceExtension + 231);
          if ( HIDWORD(P[0]) == v33 && RtlCompareMemory(P[1], v32, v33) == HIDWORD(P[0]) )
            goto LABEL_45;
        }
LABEL_46:
        *((_BYTE *)DeviceExtension + 511) = 1;
        WdLogSingleEntry1(4LL, DeviceObject);
        v20 = a1;
        LOBYTE(v34) = 1;
        DpiPdoRemovePdo(a1, a2, v34, a8);
        goto LABEL_6;
      }
      if ( !v32 )
      {
LABEL_41:
        if ( !P[1] )
          goto LABEL_46;
        goto LABEL_42;
      }
    }
LABEL_45:
    LODWORD(v18) = 0x40000000;
    goto LABEL_22;
  }
  v20 = a1;
LABEL_6:
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v22 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v9 + 40) + 32LL),
          0x408u,
          0LL,
          0x1Cu,
          0x180u,
          Exclusive,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v18 = v22;
  if ( v22 < 0 )
    goto LABEL_47;
  v44 = 1;
  DeviceExtension = DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = 5;
  v23 = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = v20;
  *((_QWORD *)DeviceExtension + 3) = v23;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v9 + 40);
  *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v9 + 48);
  *((_BYTE *)DeviceExtension + 56) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  LODWORD(v23) = *(_DWORD *)(a2 + 68);
  *((_DWORD *)DeviceExtension + 71) = (_DWORD)v23;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v23 != 1);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_48:
    v35 = -1073741801LL;
    LODWORD(v18) = -1073741801;
    v36 = 6LL;
    goto LABEL_49;
  }
  PoolWithTag[26] = 1;
  v25 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v18 = v25;
  if ( v25 < 0 )
  {
LABEL_47:
    v35 = v18;
    v36 = 2LL;
LABEL_49:
    WdLogSingleEntry1(v36, v35);
    goto LABEL_22;
  }
  v42 = 1;
  WorkItem = IoAllocateWorkItem(DeviceObject);
  *((_QWORD *)DeviceExtension + 119) = WorkItem;
  if ( !WorkItem )
    goto LABEL_48;
  *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
  *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
  *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
  *((_QWORD *)DeviceExtension + 15) = DpiPdoDispatchIoctl;
  *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
  *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
  *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
  *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
  *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
  *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
  *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
  *((_QWORD *)DeviceExtension + 117) = a2;
  *((_DWORD *)DeviceExtension + 124) = *(_DWORD *)a2;
  *((_DWORD *)DeviceExtension + 125) = *(_DWORD *)(a2 + 20);
  *((_DWORD *)DeviceExtension + 126) = *(_DWORD *)(a2 + 24);
  *((_WORD *)DeviceExtension + 254) = 1;
  *((_BYTE *)DeviceExtension + 511) = 0;
  if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
    *((_DWORD *)DeviceExtension + 244) = a3;
  *((_DWORD *)DeviceExtension + 245) = 0;
  KeWaitForSingleObject((PVOID)(v9 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = DeviceObject;
  KeReleaseMutex((PRKMUTEX)(v9 + 3408), 0);
  v27 = *(_QWORD **)(v9 + 3656);
  if ( *v27 != v9 + 3648 )
    goto LABEL_69;
  *(_QWORD *)DeviceExtension = v9 + 3648;
  *((_QWORD *)DeviceExtension + 1) = v27;
  *v27 = DeviceExtension;
  *(_QWORD *)(v9 + 3656) = DeviceExtension;
  ++*(_DWORD *)(v9 + 3664);
  if ( *((_DWORD *)DeviceExtension + 124) != 1
    || (v28 = DmmSetTemporaryVideoOutputTechnology(
                *(DXGADAPTER **)(v9 + 3896),
                *((_DWORD *)DeviceExtension + 126),
                a3,
                (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)(a7 != 0
                                                      ? D3DKMDT_VOT_RF|D3DKMDT_VOT_INDIRECT_WIRED
                                                      : D3DKMDT_VOT_UNINITIALIZED)),
        v18 = v28,
        v28 >= 0)
    && (IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)),
        PhysicalMonitor = MonitorCreatePhysicalMonitor(
                            *(void **)(v9 + 3896),
                            *((_DWORD *)DeviceExtension + 126),
                            1,
                            a7,
                            a8),
        v18 = PhysicalMonitor,
        PhysicalMonitor >= 0) )
  {
    LODWORD(v18) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, P);
    if ( (int)v18 < 0 )
    {
      if ( *((_DWORD *)DeviceExtension + 124) != 1 )
      {
        v12 = 1;
        goto LABEL_21;
      }
      LODWORD(v18) = 0;
    }
    DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
    DeviceObject->Flags |= 4u;
    DeviceObject->Flags |= 0x2000u;
    DeviceObject->Flags &= ~0x4000u;
    DeviceObject->Flags &= ~0x80u;
    WdLogSingleEntry1(4LL, DeviceObject);
LABEL_20:
    v12 = v42;
    if ( (_DWORD)v18 == 259 )
    {
      v19 = P[1];
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  WdLogSingleEntry1(2LL, v18);
  v12 = 1;
LABEL_22:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v9 + 3408), 0);
  }
LABEL_24:
  if ( (int)v18 >= 0 || v44 != 1 )
    goto LABEL_25;
  if ( v12 == 1 )
  {
    v37 = *(_QWORD **)DeviceExtension;
    if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v38 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v38 == DeviceExtension )
      {
        *v38 = v37;
        v37[1] = v38;
        --*(_DWORD *)(v9 + 3664);
        goto LABEL_59;
      }
    }
LABEL_69:
    __fastfail(3u);
  }
LABEL_59:
  KeWaitForSingleObject((PVOID)(v9 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v9 + 3408), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v42 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v39 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v39 )
    IoFreeWorkItem(v39);
  v40 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_25:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  return (unsigned int)v18;
}
