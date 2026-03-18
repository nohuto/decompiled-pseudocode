/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C00612C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01FAE1C (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C01FAF64 (DpiGetDevicePropertyString.c)
 *     DxgkFreeUnicodeString @ 0x1C0205754 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C0388A08 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C038DDAC (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  SIZE_T v6; // rdx
  char v7; // r12
  char v8; // r13
  PVOID PoolWithTag; // rax
  __int64 v10; // rsi
  __int16 v12; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rdx
  PKEVENT v15; // rax
  struct _DEVICE_OBJECT *v16; // rbx
  int v17; // r12d
  int DevicePropertyDataString; // eax
  unsigned int v19; // r13d
  unsigned int v20; // r12d
  SIZE_T v21; // rdx
  _WORD *v22; // rax
  _WORD *v23; // r9
  unsigned __int16 v24; // ax
  int DeviceInstanceId; // eax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rbx
  NTSTATUS LocallyUniqueId; // eax
  PDEVICE_OBJECT v30; // rbx
  __int64 *v31; // rax
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  char v40; // [rsp+4Ah] [rbp-BEh]
  int v41; // [rsp+4Ch] [rbp-BCh] BYREF
  PDEVICE_OBJECT DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-A0h] BYREF
  __m256i SourceString; // [rsp+70h] [rbp-98h] BYREF
  __int128 v45; // [rsp+90h] [rbp-78h]
  _OWORD v46[9]; // [rsp+A8h] [rbp-60h] BYREF

  memset(v46, 0, 0x88uLL);
  memset(&SourceString.m256i_u64[1], 0, 24);
  if ( NotificationStructure )
  {
    v3 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v3 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        EventHandle = 0LL;
        v45 = 0LL;
        v6 = *(unsigned __int16 *)(v4 + 2) + 792LL;
        DestinationString[0] = 0LL;
        v41 = 0;
        v40 = 0;
        v7 = 0;
        v8 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x74727044u);
        v10 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          WdLogSingleEntry1(6LL, -1073741801LL);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v10 + 16) = 1953656900;
        *(_DWORD *)(v10 + 420) = -1;
        *(_DWORD *)(v10 + 456) = -1;
        *(_DWORD *)(v10 + 20) = 14;
        *(_QWORD *)(v10 + 24) = 1LL;
        *(_QWORD *)(v10 + 88) = 0LL;
        *(_DWORD *)(v10 + 32) = 1;
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_DWORD *)(v10 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v10);
        *(_WORD *)(v10 + 144) = 0;
        v12 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v10 + 152) = v10 + 792;
        *(_WORD *)(v10 + 146) = v12;
        RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v10 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v10 + 176),
                                (PDEVICE_OBJECT *)(v10 + 184));
        if ( DeviceObjectPointer < 0 )
        {
          v14 = DeviceObjectPointer;
LABEL_16:
          WdLogSingleEntry1(2LL, v14);
LABEL_49:
          v32 = *(void **)(v10 + 336);
          if ( v32 )
          {
            ExFreePoolWithTag(v32, 0);
            *(_QWORD *)(v10 + 336) = 0LL;
          }
          v33 = *(void **)(v10 + 344);
          if ( v33 )
          {
            ExFreePoolWithTag(v33, 0);
            *(_QWORD *)(v10 + 344) = 0LL;
          }
          v34 = *(void **)(v10 + 352);
          if ( v34 )
          {
            ExFreePoolWithTag(v34, 0);
            *(_QWORD *)(v10 + 352) = 0LL;
          }
          v35 = *(void **)(v10 + 360);
          if ( v35 )
          {
            ExFreePoolWithTag(v35, 0);
            *(_QWORD *)(v10 + 360) = 0LL;
          }
          v36 = *(void **)(v10 + 368);
          if ( v36 )
          {
            ExFreePoolWithTag(v36, 0);
            *(_QWORD *)(v10 + 368) = 0LL;
          }
          if ( v7 )
            ObfDereferenceObject(*(PVOID *)(v10 + 176));
          v37 = *(void **)(v10 + 464);
          if ( v37 )
            ObfDereferenceObject(v37);
          if ( *(_QWORD *)(v10 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 128));
          if ( !v40 )
            goto LABEL_69;
          KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
          v38 = *(_QWORD *)v10;
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
          {
            v39 = *(_QWORD **)(v10 + 8);
            if ( *v39 == v10 )
            {
              *v39 = v38;
              *(_QWORD *)(v38 + 8) = v39;
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
LABEL_69:
              ExFreePoolWithTag((PVOID)v10, 0);
              v30 = DestinationString[0];
LABEL_71:
              if ( v30 )
                ObfDereferenceObject(v30);
              if ( v8 )
              {
                _InterlockedExchange64(&qword_1C01304D8, 0LL);
                KeReleaseMutex(Mutex, 0);
              }
              return 0LL;
            }
          }
LABEL_75:
          __fastfail(3u);
        }
        v7 = 1;
        v15 = IoCreateNotificationEvent(0LL, &EventHandle);
        *(_QWORD *)(v10 + 464) = v15;
        if ( !v15 )
        {
          v14 = -1073741801LL;
          goto LABEL_16;
        }
        ObfReferenceObject(v15);
        ZwClose(EventHandle);
        DestinationString[0] = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v10 + 184));
        v16 = DestinationString[0];
        if ( (int)DpiGetDevicePropertyDataString(
                    DestinationString[0],
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v10 + 336,
                    (__int64)&v41) >= 0
          || (v17 = 0, (int)DpiGetDevicePropertyString(v16, DevicePropertyManufacturer, PagedPool, (__int64)&v41) >= 0) )
        {
          v17 = v41;
        }
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     v16,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v10 + 344,
                                     (__int64)&v41);
        v19 = v41;
        if ( DevicePropertyDataString < 0 )
          v19 = 0;
        v41 = v19;
        v20 = v19 + v17;
        if ( v20 )
        {
          v21 = v20 + 4LL;
          if ( v21 < 0xFFFF )
          {
            v22 = ExAllocatePoolWithTag((POOL_TYPE)512, v21, 0x74727044u);
            *(_QWORD *)(v10 + 352) = v22;
            v23 = v22;
            if ( v22 )
            {
              *(_OWORD *)&DestinationString[1] = 0LL;
              if ( v20 == v19 )
              {
                v24 = (unsigned __int16)DestinationString[1];
              }
              else
              {
                memmove(v22, *(const void **)(v10 + 336), v20 - v19);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)(v20 - v19) >> 1)) = 0;
                RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], *(PCWSTR *)(v10 + 352));
                v16 = DestinationString[0];
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)LOWORD(DestinationString[1]) >> 1)) = 32;
                v23 = *(_WORD **)(v10 + 352);
                v24 = LOWORD(DestinationString[1]) + 2;
                LOWORD(DestinationString[1]) += 2;
              }
              WORD1(DestinationString[1]) = v20 + 4;
              if ( v19 )
              {
                memmove(&v23[(unsigned __int64)v24 >> 1], *(const void **)(v10 + 344), v19);
                v23 = *(_WORD **)(v10 + 352);
                v24 = (unsigned __int16)DestinationString[1];
              }
              v23[(unsigned __int64)(v19 + v24) >> 1] = 0;
            }
          }
        }
        v7 = 1;
        DpiGetDevicePropertyDataString(
          v16,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v10 + 360,
          (__int64)&v41);
        DpiGetDevicePropertyDataString(v16, (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName, v10 + 368, (__int64)&v41);
        SourceString.m256i_i64[0] = 0LL;
        DeviceInstanceId = DpiGetDeviceInstanceId(v16);
        if ( DeviceInstanceId < 0 )
        {
          WdLogSingleEntry1(2LL, DeviceInstanceId);
          v8 = 0;
          goto LABEL_49;
        }
        RtlInitUnicodeString((PUNICODE_STRING)(v10 + 160), (PCWSTR)SourceString.m256i_i64[0]);
        v26 = DpiMiracastSendSyncUserModeRequest(v10, 2295808LL);
        if ( v26 >= 0 )
        {
          if ( *((_QWORD *)&v45 + 1) < 0x88uLL )
          {
            v27 = -1073741811LL;
LABEL_36:
            WdLogSingleEntry1(2LL, v27);
            v8 = 0;
LABEL_48:
            DxgkFreeUnicodeString(v10 + 160);
            goto LABEL_49;
          }
          *(_OWORD *)(v10 + 204) = v46[0];
          *(_OWORD *)(v10 + 220) = v46[1];
          *(_OWORD *)(v10 + 236) = v46[2];
          *(_OWORD *)(v10 + 252) = v46[3];
          *(_OWORD *)(v10 + 268) = v46[4];
          *(_OWORD *)(v10 + 284) = v46[5];
          *(_OWORD *)(v10 + 300) = v46[6];
          *(_OWORD *)(v10 + 316) = v46[7];
          *(_WORD *)(v10 + 332) = v46[8];
          *(_WORD *)(v10 + 332) = 0;
          v26 = PsLookupProcessByProcessId((HANDLE)DWORD1(v46[8]), (PEPROCESS *)(v10 + 104));
          if ( v26 >= 0 )
          {
            ObfDereferenceObject(*(PVOID *)(v10 + 104));
            AcquireMiniportListMutex();
            v28 = qword_1C01308A0;
            v8 = 1;
            while ( (__int64 *)v28 != &qword_1C01308A0 )
            {
              if ( !RtlCompareUnicodeString(
                      *((PCUNICODE_STRING *)NotificationStructure + 5),
                      (PCUNICODE_STRING)(v28 + 144),
                      0) )
                goto LABEL_48;
              v28 = *(_QWORD *)v28;
            }
            LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v10 + 96));
            if ( LocallyUniqueId >= 0 )
            {
              v30 = DestinationString[0];
              LocallyUniqueId = IoRegisterDeviceInterface(
                                  DestinationString[0],
                                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                                  0LL,
                                  (PUNICODE_STRING)(v10 + 128));
              if ( LocallyUniqueId >= 0 )
              {
                KeAcquireInStackQueuedSpinLock(&SpinLock, (PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                v31 = (__int64 *)qword_1C01308A8;
                if ( *(__int64 **)qword_1C01308A8 != &qword_1C01308A0 )
                  goto LABEL_75;
                *(_QWORD *)v10 = &qword_1C01308A0;
                *(_QWORD *)(v10 + 8) = v31;
                *v31 = v10;
                qword_1C01308A8 = v10;
                v40 = 1;
                KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&SourceString.m256i_u64[1]);
                LocallyUniqueId = IoRegisterPlugPlayNotification(
                                    EventCategoryTargetDeviceChange,
                                    0,
                                    *(PVOID *)(v10 + 176),
                                    g_pDriverObject,
                                    DpiMiracastTargetDeviceChange,
                                    (PVOID)v10,
                                    (PVOID *)(v10 + 400));
                if ( LocallyUniqueId >= 0 )
                {
                  IoSetDeviceInterfaceState((PUNICODE_STRING)(v10 + 128), 1u);
                  goto LABEL_71;
                }
              }
            }
            WdLogSingleEntry1(2LL, LocallyUniqueId);
            goto LABEL_48;
          }
        }
        v27 = v26;
        goto LABEL_36;
      }
    }
  }
  WdLogSingleEntry1(2LL, -1073741585LL);
  return 3221225711LL;
}
