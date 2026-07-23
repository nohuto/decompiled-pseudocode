/*
 * XREFs of PiUEventProcessBroadcastNotifications @ 0x1406FD780
 * Callers:
 *     PiUEventProcessEventWorker @ 0x1406FD520 (PiUEventProcessEventWorker.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14073E2A4 (IopGetSessionIdFromSymbolicName.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14076C4AC (PiUEventQueueBroadcastEventEntry.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiUEventProcessBroadcastNotifications(__int64 a1)
{
  int ObjectProperty; // ebx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v11; // zf
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // r14
  _DWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  char *v23; // rax
  _DWORD *v24; // rax
  _DWORD *v25; // rdi
  char *v26; // rax
  char *PoolWithTag; // rax
  size_t pcchLength; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  int v30; // [rsp+B8h] [rbp+38h] BYREF
  int v31; // [rsp+C0h] [rbp+40h] BYREF
  int v32; // [rsp+C8h] [rbp+48h] BYREF

  ObjectProperty = 0;
  pcchLength = 0LL;
  v31 = 0;
  DestinationString = 0LL;
  v30 = 0;
  if ( !PiUEventBroadcastSubscriberPresent )
    return (unsigned int)ObjectProperty;
  v3 = *(_DWORD *)(a1 + 88);
  if ( !v3 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x1C0uLL);
    *((_DWORD *)v14 + 6) = -1;
    *((_DWORD *)v14 + 5) = 2;
    *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
    goto LABEL_23;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v12 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
    if ( !v12 )
      v12 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
    if ( !v12 )
      goto LABEL_20;
    v21 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_REMOVE_PENDING.Data1;
    if ( !v21 )
      v21 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_REMOVE_PENDING.Data4;
    if ( !v21 )
    {
LABEL_20:
      v13 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v13;
      if ( !v13 )
        return (unsigned int)-1073741670;
      memset(v13, 0, 0x1C0uLL);
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1 + 120,
                         1LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v30,
                         (__int64)(v14 + 24),
                         4,
                         (__int64)&v31,
                         0);
      if ( ObjectProperty < 0 || v31 != 4 )
      {
        *((_DWORD *)v14 + 6) = -1;
        ObjectProperty = 0;
      }
      goto LABEL_23;
    }
    v22 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
    if ( !v22 )
      v22 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
    v11 = v22 == 0;
LABEL_15:
    if ( !v11 )
      return (unsigned int)ObjectProperty;
    goto LABEL_20;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v16 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v16 )
      v16 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v16 )
    {
      v20 = *(_QWORD *)(a1 + 72) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v20 )
        v20 = *(_QWORD *)(a1 + 80) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( v20 )
        return (unsigned int)ObjectProperty;
    }
    v17 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_VOLUME.Data1;
    if ( !v17 )
      v17 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_VOLUME.Data4;
    if ( v17 )
    {
      v18 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_PARALLEL.Data1;
      if ( !v18 )
        v18 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_PARALLEL.Data4;
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 120) - *(_QWORD *)&GUID_DEVINTERFACE_COMPORT.Data1;
        if ( !v19 )
          v19 = *(_QWORD *)(a1 + 128) - *(_QWORD *)GUID_DEVINTERFACE_COMPORT.Data4;
        if ( v19 )
          return (unsigned int)ObjectProperty;
      }
      v26 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v26;
      if ( !v26 )
        return (unsigned int)-1073741670;
      memset(v26, 0, 0x1C0uLL);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
      *((_DWORD *)v14 + 5) = 3;
      *(_OWORD *)(v14 + 28) = *(_OWORD *)(a1 + 72);
      v32 = 400;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         a1 + 136,
                         3LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_InstanceId,
                         (__int64)&v30,
                         (__int64)(v14 + 44),
                         400,
                         (__int64)&v32,
                         0);
      if ( ObjectProperty < 0 || v30 != 18 )
      {
        ExFreePoolWithTag(v14, 0x59706E50u);
        return (unsigned int)ObjectProperty;
      }
      v32 = 4;
      ObjectProperty = PnpGetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)(v14 + 44),
                         1LL,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_SessionId,
                         (__int64)&v30,
                         (__int64)(v14 + 24),
                         4,
                         (__int64)&v32,
                         0);
      if ( ObjectProperty < 0 || v30 != 7 )
      {
        *((_DWORD *)v14 + 6) = -1;
        ObjectProperty = 0;
      }
    }
    else
    {
      v23 = (char *)ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v14 = v23;
      if ( !v23 )
        return (unsigned int)-1073741670;
      memset(v23, 0, 0x1C0uLL);
      RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 136));
      *((_DWORD *)v14 + 5) = 1;
      *((_DWORD *)v14 + 6) = IopGetSessionIdFromSymbolicName(&DestinationString);
    }
LABEL_23:
    v15 = v14;
LABEL_24:
    PiUEventQueueBroadcastEventEntry(v15);
    return (unsigned int)ObjectProperty;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v11 = v6 == 1;
    goto LABEL_15;
  }
  v7 = a1 + 128;
  ObjectProperty = RtlStringCchLengthW((STRSAFE_PCNZWCH)(a1 + 128), 0xC8uLL, &pcchLength);
  if ( ObjectProperty >= 0 && pcchLength )
  {
    if ( (unsigned int)(2 * pcchLength + 82) < 0x50 || 2 * (int)pcchLength + 89 < (unsigned int)(2 * pcchLength + 82) )
      return (unsigned int)-1073741675;
    ObjectProperty = 0;
    v8 = (2 * (_DWORD)pcchLength + 89) & 0xFFFFFFF8;
    v9 = *(_QWORD *)(v8 + a1 + 76) - *(_QWORD *)&GUID_IO_VOLUME_NAME_CHANGE.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)(v8 + a1 + 84) - *(_QWORD *)GUID_IO_VOLUME_NAME_CHANGE.Data4;
    if ( !v9 )
    {
      v24 = ExAllocatePoolWithTag(PagedPool, 0x1C0uLL, 0x59706E50u);
      v25 = v24;
      if ( v24 )
      {
        memset(v24, 0, 0x1C0uLL);
        v25[5] = 1;
        ObjectProperty = PnpGetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           v7,
                           1LL,
                           0LL,
                           0LL,
                           (__int64)&DEVPKEY_Device_SessionId,
                           (__int64)&v30,
                           (__int64)(v25 + 6),
                           4,
                           (__int64)&v31,
                           0);
        if ( ObjectProperty < 0 || v31 != 4 )
        {
          v25[6] = -1;
          ObjectProperty = 0;
        }
        v15 = v25;
        goto LABEL_24;
      }
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ObjectProperty;
}
