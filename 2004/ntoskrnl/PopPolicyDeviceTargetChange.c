/*
 * XREFs of PopPolicyDeviceTargetChange @ 0x1408EE1C0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14037D6C0 (PnpUnregisterPlugPlayNotification.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceRemove @ 0x1408EE14C (PopPolicyDeviceRemove.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPolicyDeviceTargetChange(char *NotificationStructure, UNICODE_STRING *Context)
{
  char v4; // si
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = 0;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
  v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v5 )
  {
    PopPolicyDeviceRemove((__int64)Context);
    goto LABEL_14;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v6 )
  {
    PopPolicyDeviceRemove((__int64)Context);
LABEL_13:
    v4 = 1;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v7 )
  {
    PopConnectToPolicyDevice(*(_DWORD *)&Context[1].Length, Context + 2);
    goto LABEL_13;
  }
LABEL_14:
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  if ( v4 )
  {
    PnpUnregisterPlugPlayNotification(Context[1].Buffer, 1);
    ExFreePoolWithTag(Context, *((_DWORD *)&unk_140C03264 + 8 * *(int *)&Context[1].Length));
  }
  return 0LL;
}
