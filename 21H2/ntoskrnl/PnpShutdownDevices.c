/*
 * XREFs of PnpShutdownDevices @ 0x14089BAAC
 * Callers:
 *     IoShutdownSystem @ 0x1409ABD08 (IoShutdownSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PnpCreateDeviceEventEntry @ 0x1406FD284 (PnpCreateDeviceEventEntry.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1407392FC (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 PnpShutdownDevices()
{
  unsigned int v0; // esi
  GUID *DeviceEventEntry; // rdi
  _QWORD *v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  __int64 v11; // [rsp+80h] [rbp-88h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h] BYREF
  char *v13; // [rsp+90h] [rbp-78h]
  char v14; // [rsp+98h] [rbp-70h] BYREF

  P = 0LL;
  HIDWORD(v12) = 0;
  LODWORD(v11) = 0;
  KeSetEvent(&PnpShutdownEvent, 0, 0);
  v0 = 0;
  if ( !PnpTearDownPnpStacksOnShutdown && (PopShutdownCleanly & 0x20) == 0 )
    return v0;
  DeviceEventEntry = (GUID *)PnpCreateDeviceEventEntry(0x189uLL);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
  KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
  v3 = IopRootDeviceNode;
  v13 = &v14;
  LODWORD(v12) = 10485760;
  PipSetDevNodeUserFlags((__int64)IopRootDeviceNode, 16);
  while ( 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
    v3 = (_QWORD *)v3[1];
    while ( v3 )
    {
      v5 = *((_DWORD *)v3 + 100);
      if ( (v5 & 0x20) != 0 )
      {
        if ( v3 == IopRootDeviceNode )
        {
          v3 = 0LL;
          break;
        }
LABEL_17:
        v9 = (_QWORD *)*v3;
        if ( *v3 )
          goto LABEL_19;
        v3 = (_QWORD *)v3[2];
        PipSetDevNodeUserFlags((__int64)v3, 32);
      }
      else
      {
        if ( (v5 & 0x10) == 0 )
          break;
        v9 = (_QWORD *)v3[1];
        if ( !v9 )
        {
          PipSetDevNodeUserFlags((__int64)v3, 32);
          goto LABEL_17;
        }
LABEL_19:
        v3 = v9;
      }
    }
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
    if ( v3 )
    {
      PnpInitializeTargetDeviceRemoveEvent(
        DeviceEventEntry,
        0x189uLL,
        (PVOID)v3[4],
        0,
        1,
        0,
        0,
        0x2Eu,
        0,
        0LL,
        0LL,
        (__int64)&v11,
        (__int64)&v12);
      P = DeviceEventEntry;
      v0 = PnpProcessQueryRemoveAndEject((__int64 *)&P);
      if ( P != DeviceEventEntry && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 )
        ExFreePoolWithTag(P, 0x4B706E50u);
      continue;
    }
    break;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&DeviceEventEntry[4], 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag(DeviceEventEntry, 0x4B706E50u);
  return v0;
}
