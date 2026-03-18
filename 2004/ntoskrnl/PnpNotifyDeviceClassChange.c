/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x14072CDB4
 * Callers:
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x140202160 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x1406459B4 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14072C70C (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 *v7; // r14
  __int64 v8; // rbx
  PVOID **v9; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  int v13; // [rsp+20h] [rbp-78h] BYREF
  int v14; // [rsp+28h] [rbp-70h] BYREF
  __int128 v15; // [rsp+2Ch] [rbp-6Ch]
  __int128 v16; // [rsp+3Ch] [rbp-5Ch]
  int v17; // [rsp+4Ch] [rbp-4Ch]
  __int64 v18; // [rsp+50h] [rbp-48h]

  v3 = *a1;
  v17 = 0;
  v4 = *(_OWORD *)a2;
  v13 = 0;
  v15 = v3;
  SessionIdFromSymbolicName = -1;
  v16 = v4;
  v14 = 3145729;
  v18 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v7 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v8 = *v7;
  while ( (__int64 *)v8 != v7 )
  {
    v9 = (PVOID **)v8;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v8 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName();
    ++*(_WORD *)(v8 + 56);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v8 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v8 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v8 + 58)
      && ((_DWORD *)(v8 + 80) == a2 || RtlCompareMemory((const void *)(v8 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v8, (__int64)&v14, &v13);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 72));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v8 = *(_QWORD *)v8;
    PnpDereferenceNotify(v9);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
