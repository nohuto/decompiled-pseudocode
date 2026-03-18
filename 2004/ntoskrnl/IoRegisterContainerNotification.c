/*
 * XREFs of IoRegisterContainerNotification @ 0x1408917F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140208380 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IopGetDevicePDO @ 0x140277508 (IopGetDevicePDO.c)
 *     IopSetFileObjectExtensionFlag @ 0x14027B310 (IopSetFileObjectExtensionFlag.c)
 *     MmGetSessionObjectById @ 0x140297904 (MmGetSessionObjectById.c)
 *     ExRegisterCallback @ 0x14037CC30 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x14037F540 (ExUnregisterCallback.c)
 *     IopGetSessionIdFromPDO @ 0x14072C884 (IopGetSessionIdFromPDO.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  void *SessionObjectById; // r12
  void *v17; // r14
  struct _DEVICE_OBJECT *DevicePDO; // rax
  struct _DMA_ADAPTER *v19; // r15
  unsigned int SessionIdFromPDO; // eax
  __int64 v21; // rdx
  _QWORD *v22; // rax

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
        v17 = *(void **)(v10 + 8);
        if ( (*(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) & 0x400) != 0 )
        {
          DevicePDO = (struct _DEVICE_OBJECT *)IopGetDevicePDO(v10);
          v19 = (struct _DMA_ADAPTER *)DevicePDO;
          if ( DevicePDO )
          {
            SessionIdFromPDO = IopGetSessionIdFromPDO(DevicePDO);
            SessionObjectById = MmGetSessionObjectById(SessionIdFromPDO, v21);
            HalPutDmaAdapter(v19);
          }
          v7 = CallbackFunction;
        }
        *(_DWORD *)(*(_QWORD *)(v10 + 312) + 32LL) |= 0x1000u;
        break;
      case 4:
        v17 = (void *)v10;
        break;
      case 5:
        v17 = *(void **)(*(_QWORD *)(v10 + 8) + 8LL);
        v5 = IopSetFileObjectExtensionFlag(v10, 2, 1);
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
    ObfReferenceObject(v17);
    v14[5] = v10;
    v14[2] = v17;
    v14[4] = v15;
    v14[8] = *((_QWORD *)NotificationInformation + 3);
    *((_DWORD *)v14 + 14) = *((_DWORD *)NotificationInformation + 4);
    v14[3] = v7;
    v14[6] = SessionObjectById;
    *(_QWORD *)CallbackRegistration = v15;
    v22 = (_QWORD *)qword_140C45768;
    if ( *(PVOID **)qword_140C45768 != &IopSessionNotificationQueueHead )
      __fastfail(3u);
    *v14 = &IopSessionNotificationQueueHead;
    v14[1] = v22;
    *v22 = v14;
    qword_140C45768 = (__int64)v14;
    goto LABEL_30;
  }
  return -1073741582;
}
