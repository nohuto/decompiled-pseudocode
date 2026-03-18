/*
 * XREFs of PopNotifyPolicyDevice @ 0x1407AEE40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x140779288 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x1407792E4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14077C5D4 (PopChangeCapability.c)
 *     PopConnectToPolicyDevice @ 0x1407AEEC8 (PopConnectToPolicyDevice.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock((_DWORD)NotificationStructure);
    PopChangeCapability(&byte_140C24013, !v5);
    PopReleasePolicyLock(v8, v7);
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock(v9);
    v10 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v10 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock(v12, v11);
    PopReleaseTransitionLock(4);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}
