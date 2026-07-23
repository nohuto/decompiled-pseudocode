/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140673180
 * Callers:
 *     HalpPostPnpInitialize @ 0x1407AE7C8 (HalpPostPnpInitialize.c)
 *     PopConnectToPolicyDevice @ 0x1407C4888 (PopConnectToPolicyDevice.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1408E3110 (PopRegisterCoolingExtensionProtection.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     PoInitDriverServices @ 0x140A72D64 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x140A96BC4 (SbpWaitForVmbus.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     PnpGetRelatedTargetDevice @ 0x1402F7DC0 (PnpGetRelatedTargetDevice.c)
 *     KeAcquireGuardedMutex @ 0x1402FA0B0 (KeAcquireGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140361460 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopGetDeviceInterfaces @ 0x14062F318 (IopGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x140673554 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140673654 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14073E2A4 (IopGetSessionIdFromSymbolicName.c)
 *     PiRegisterKernelSoftRestartNotification @ 0x1408B2F34 (PiRegisterKernelSoftRestartNotification.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  NTSTATUS result; // eax
  __int32 v11; // ebx
  __int32 v12; // ebx
  __int32 v13; // ebx
  NTSTATUS restarted; // ebx
  _QWORD *PoolWithTag; // rdi
  PCWSTR v16; // rsi
  PCWSTR *v17; // rdx
  struct _FAST_MUTEX *v18; // rcx
  _DWORD *v19; // r14
  char *v20; // rax
  char **v21; // rdx
  __int128 v22; // xmm1
  WCHAR *v23; // r14
  const WCHAR *i; // rsi
  __int64 CurrentServerSilo; // rax
  int SessionIdFromSymbolicName; // eax
  _QWORD *v27; // rax
  struct _DMA_ADAPTER *v28; // rcx
  ULONG v29; // edx
  PCWSTR SourceString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v32; // [rsp+48h] [rbp-38h] BYREF
  GUID v33; // [rsp+4Ch] [rbp-34h]
  __int128 v34; // [rsp+5Ch] [rbp-24h]
  int v35; // [rsp+6Ch] [rbp-14h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-10h]

  LODWORD(SourceString) = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointerWithTag(DriverObject, 0, IoDriverObjectType, 0, 0x4E706E50u);
  if ( result >= 0 )
  {
    v11 = EventCategory - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            restarted = -1073741585;
            goto LABEL_33;
          }
          restarted = PiRegisterKernelSoftRestartNotification(DriverObject, CallbackRoutine, Context, NotificationEntry);
          goto LABEL_13;
        }
        SourceString = 0LL;
        restarted = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &SourceString);
        if ( restarted < 0 )
          goto LABEL_33;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x43706E50u);
        if ( PoolWithTag )
        {
          restarted = PnpInitializeNotifyEntry(
                        (_DWORD)PoolWithTag,
                        3,
                        (_DWORD)CallbackRoutine,
                        (_DWORD)Context,
                        (__int64)DriverObject,
                        (__int64)&PnpTargetDeviceNotifyLock);
          if ( restarted < 0 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v28 = (struct _DMA_ADAPTER *)*((_QWORD *)SourceString + 4);
          }
          else
          {
            v16 = SourceString;
            PoolWithTag[10] = EventCategoryData;
            PoolWithTag[11] = *((_QWORD *)v16 + 4);
            restarted = PnpDeferNotification(PoolWithTag);
            if ( restarted >= 0 )
            {
              KeAcquireGuardedMutex(&PnpTargetDeviceNotifyLock);
              v17 = (PCWSTR *)*((_QWORD *)v16 + 60);
              if ( *v17 == v16 + 236 )
              {
                *PoolWithTag = v16 + 236;
                v18 = &PnpTargetDeviceNotifyLock;
                PoolWithTag[1] = v17;
                *v17 = (PCWSTR)PoolWithTag;
                *((_QWORD *)v16 + 60) = PoolWithTag;
LABEL_11:
                KeReleaseGuardedMutex(v18);
LABEL_12:
                *NotificationEntry = PoolWithTag;
                goto LABEL_13;
              }
              goto LABEL_47;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v28 = (struct _DMA_ADAPTER *)*((_QWORD *)v16 + 4);
          }
          HalPutDmaAdapter(v28);
LABEL_13:
          if ( restarted >= 0 )
            return restarted;
LABEL_33:
          ObfDereferenceObjectWithTag(DriverObject, 0x4E706E50u);
          return restarted;
        }
        HalPutDmaAdapter(*((PADAPTER_OBJECT *)SourceString + 4));
LABEL_38:
        restarted = -1073741670;
        goto LABEL_33;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_38;
      restarted = PnpInitializeNotifyEntry(
                    (_DWORD)PoolWithTag,
                    2,
                    (_DWORD)CallbackRoutine,
                    (_DWORD)Context,
                    (__int64)DriverObject,
                    (__int64)&PnpDeviceClassNotifyLock);
      if ( restarted < 0 )
        goto LABEL_33;
      v19 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      restarted = PnpDeferNotification(PoolWithTag);
      if ( restarted >= 0 )
      {
        KeAcquireGuardedMutex(&PnpDeviceClassNotifyLock);
        v20 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v19 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v21 = (char **)*((_QWORD *)v20 + 1);
        if ( *v21 == v20 )
        {
          *PoolWithTag = v20;
          PoolWithTag[1] = v21;
          *v21 = (char *)PoolWithTag;
          *((_QWORD *)v20 + 1) = PoolWithTag;
          KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
          if ( ((unsigned __int8)SourceString & 1) != 0 )
          {
            v22 = *(_OWORD *)v19;
            SourceString = 0LL;
            DestinationString = 0LL;
            v35 = 0;
            v32 = 3145729;
            v33 = GUID_DEVICE_INTERFACE_ARRIVAL;
            v34 = v22;
            restarted = IopGetDeviceInterfaces((int *)PoolWithTag + 20, 0LL, 0, 0, &SourceString, 0LL);
            if ( restarted < 0 )
              goto LABEL_33;
            v23 = (WCHAR *)SourceString;
            for ( i = SourceString; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
            {
              LODWORD(SourceString) = 0;
              RtlInitUnicodeString(&DestinationString, i);
              p_DestinationString = &DestinationString;
              CurrentServerSilo = PsGetCurrentServerSilo();
              if ( *((_DWORD *)PoolWithTag + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
              {
                SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(p_DestinationString);
                if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)PoolWithTag + 5) != SessionIdFromSymbolicName )
                  continue;
              }
              PnpNotifyDriverCallback(PoolWithTag, &v32, &SourceString);
            }
            ExFreePoolWithTag(v23, 0);
          }
          goto LABEL_12;
        }
        goto LABEL_47;
      }
      v29 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_38;
      restarted = PnpInitializeNotifyEntry(
                    (_DWORD)PoolWithTag,
                    1,
                    (_DWORD)CallbackRoutine,
                    (_DWORD)Context,
                    (__int64)DriverObject,
                    (__int64)&PnpHwProfileNotifyLock);
      if ( restarted < 0 )
        goto LABEL_33;
      restarted = PnpDeferNotification(PoolWithTag);
      if ( restarted >= 0 )
      {
        KeAcquireGuardedMutex(&PnpHwProfileNotifyLock);
        v27 = (_QWORD *)qword_140D2EB58;
        if ( *(PVOID **)qword_140D2EB58 == &PnpProfileNotifyList )
        {
          *PoolWithTag = &PnpProfileNotifyList;
          v18 = &PnpHwProfileNotifyLock;
          PoolWithTag[1] = v27;
          *v27 = PoolWithTag;
          qword_140D2EB58 = (__int64)PoolWithTag;
          goto LABEL_11;
        }
LABEL_47:
        __fastfail(3u);
      }
      v29 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v29);
    goto LABEL_13;
  }
  return result;
}
