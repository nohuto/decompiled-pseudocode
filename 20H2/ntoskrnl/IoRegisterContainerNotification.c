/*
 * XREFs of IoRegisterContainerNotification @ 0x140897470
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSessionObjectById @ 0x140209854 (MmGetSessionObjectById.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IopGetDevicePDO @ 0x1403618D8 (IopGetDevicePDO.c)
 *     ExRegisterCallback @ 0x14037E960 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140381270 (ExUnregisterCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14073B300 (IopGetSessionIdFromPDO.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoRegisterContainerNotification(
        IO_CONTAINER_NOTIFICATION_CLASS NotificationClass,
        PIO_CONTAINER_NOTIFICATION_FUNCTION CallbackFunction,
        PVOID NotificationInformation,
        ULONG NotificationInformationLength,
        PVOID CallbackRegistration)
{
  NTSTATUS v5; // ebx
  PIO_CONTAINER_NOTIFICATION_FUNCTION v7; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v10; // rsi
  PVOID *v11; // rcx
  PVOID *v12; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rdi
  PVOID v15; // rbp
  __int64 v16; // r8
  __int64 v17; // r9
  void *SessionObjectById; // r12
  void *v19; // r14
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DMA_ADAPTER *v21; // r15
  unsigned int SessionIdFromPDO; // eax
  __int64 v23; // rdx
  _QWORD *v24; // rax

  v5 = 0;
  v7 = CallbackFunction;
  if ( NotificationClass >= IoMaxContainerNotificationClass )
    return -1073741585;
  if ( NotificationInformationLength == 32 && *(_DWORD *)NotificationInformation == 32 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *((_QWORD *)NotificationInformation + 1);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
    v11 = (PVOID *)IopSessionNotificationQueueHead;
    while ( v11 != &IopSessionNotificationQueueHead )
    {
      v12 = v11;
      v11 = (PVOID *)*v11;
      if ( v12[5] == (PVOID)v10 )
      {
        v5 = -1073741791;
        goto LABEL_30;
      }
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x6E536F49u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = -1073741670;
      goto LABEL_30;
    }
    v15 = ExRegisterCallback((PCALLBACK_OBJECT)IopSessionCallbackObject, IopDispatchSessionNotifications, PoolWithTag);
    if ( !v15 )
    {
      v5 = -1073741670;
      goto LABEL_28;
    }
    SessionObjectById = 0LL;
    switch ( *(_WORD *)v10 )
    {
      case 3:
        v19 = *(void **)(v10 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v10);
          v21 = (struct _DMA_ADAPTER *)DevicePDO;
          if ( DevicePDO )
          {
            SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO, v23);
            HalPutDmaAdapter(v21);
          }
          v7 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v19 = (void *)v10;
        break;
      case 5:
        LOBYTE(v16) = 1;
        v19 = *(void **)(*(_QWORD *)(v10 + 8) + 8LL);
        v5 = IopSetFileObjectExtensionFlag(v10, 2, v16, v17);
        if ( v5 < 0 )
        {
LABEL_28:
          ExFreePoolWithTag(v14, 0);
          if ( v15 )
            ExUnregisterCallback(v15);
LABEL_30:
          ExReleasePushLockEx((ULONG_PTR)&IopSessionNotificationLock, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          return v5;
        }
        break;
      default:
        v5 = -1073741583;
        goto LABEL_28;
    }
    ObfReferenceObject(v19);
    v14[5] = v10;
    v14[2] = v19;
    v14[4] = v15;
    v14[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
    v14[3] = v7;
    v14[6] = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v15;
    v24 = (_QWORD *)qword_140C457A8;
    if ( *(PVOID **)qword_140C457A8 != &IopSessionNotificationQueueHead )
      __fastfail(3u);
    *v14 = &IopSessionNotificationQueueHead;
    v14[1] = v24;
    *v24 = v14;
    qword_140C457A8 = (__int64)v14;
    goto LABEL_30;
  }
  return -1073741582;
}
