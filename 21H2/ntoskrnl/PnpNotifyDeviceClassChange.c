/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x14073D798
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14027E130 (PsGetServerSiloServiceSessionId.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x1406FD1E8 (PnpDereferenceNotify.c)
 *     IopGetSessionIdFromSymbolicName @ 0x14073E2A4 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int64 *v8; // r14
  __int64 v9; // rbx
  PVOID **v10; // rbp
  __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-78h] BYREF
  int v18; // [rsp+28h] [rbp-70h] BYREF
  __int128 v19; // [rsp+2Ch] [rbp-6Ch]
  __int128 v20; // [rsp+3Ch] [rbp-5Ch]
  int v21; // [rsp+4Ch] [rbp-4Ch]
  __int64 v22; // [rsp+50h] [rbp-48h]

  v3 = *a1;
  v21 = 0;
  v4 = *(_OWORD *)a2;
  v17 = 0;
  v19 = v3;
  SessionIdFromSymbolicName = -1;
  v20 = v4;
  v18 = 3145729;
  v22 = a3;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v8 = (__int64 *)((char *)&PnpDeviceClassNotifyList + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v9 = *v8;
  while ( (__int64 *)v9 != v8 )
  {
    v10 = (PVOID **)v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *(_DWORD *)(v9 + 20) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*(_WORD *)(v9 + 56);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v9 + 72), 1u);
    if ( (SessionIdFromSymbolicName == -1 || *(_DWORD *)(v9 + 20) == SessionIdFromSymbolicName)
      && !*(_BYTE *)(v9 + 58)
      && ((_DWORD *)(v9 + 80) == a2 || RtlCompareMemory((const void *)(v9 + 80), a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v9, (__int64)&v18, &v17);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 72));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v9 = *(_QWORD *)v9;
    PnpDereferenceNotify(v10);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
