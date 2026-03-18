/*
 * XREFs of PopNotifyPolicyDevice @ 0x14077DB50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x14077B698 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14077B6F4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x140784FD4 (PopChangeCapability.c)
 *     PopConnectToPolicyDevice @ 0x1407B20AC (PopConnectToPolicyDevice.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ecx
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock((_DWORD)NotificationStructure);
    LOBYTE(v7) = !v5;
    PopChangeCapability(&byte_140C23A73, v7);
    PopReleasePolicyLock(v9, v8);
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock(v10);
    v11 = PopHiberEnabled;
    PopEnableHiberFile(0LL, 0LL);
    if ( v11 )
    {
      LOBYTE(v13) = 1;
      PopEnableHiberFile(v13, 0LL);
    }
    PopReleasePolicyLock(v13, v12);
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
