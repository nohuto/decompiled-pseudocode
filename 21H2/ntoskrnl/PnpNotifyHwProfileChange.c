/*
 * XREFs of PnpNotifyHwProfileChange @ 0x14089FC28
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14089FEF8 (PnpRequestHwProfileChangeNotification.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     PnpDereferenceNotify @ 0x1406FD1E8 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpNotifyHwProfileChange(GUID *Source1, _DWORD *a2, UNICODE_STRING *a3)
{
  int v4; // esi
  PVOID *v7; // rdi
  PVOID **v8; // r13
  struct _KTHREAD *CurrentThread; // rax
  GUID v10; // xmm0
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID **v15; // rsi
  PVOID **v16; // rbx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v26[20]; // [rsp+28h] [rbp-28h] BYREF

  v25 = 0;
  memset(v26, 0, sizeof(v26));
  v4 = 0;
  ExAcquireFastMutex(&PnpHwProfileNotifyLock);
  v7 = (PVOID *)PnpProfileNotifyList;
  while ( v7 != &PnpProfileNotifyList )
  {
    ++*((_WORD *)v7 + 28);
    v8 = (PVOID **)v7;
    KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
    if ( *((_BYTE *)v7 + 58) )
    {
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
      v4 = v25;
    }
    else
    {
      v10 = *Source1;
      *(_DWORD *)v26 = 1310721;
      *(GUID *)&v26[4] = v10;
      v11 = PnpNotifyDriverCallback((__int64)v7, (__int64)v26, &v25);
      ExReleaseResourceLite((PERESOURCE)v7[9]);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
      v4 = v25;
      if ( v11 < 0 )
        v4 = 0;
      v25 = v4;
      if ( v4 < 0
        && (Source1 == &GUID_HWPROFILE_QUERY_CHANGE
         || RtlCompareMemory(Source1, &GUID_HWPROFILE_QUERY_CHANGE, 0x10uLL) == 16) )
      {
        if ( a2 )
          *a2 = 7;
        if ( a3 )
        {
          a3->Length = 0;
          RtlCopyUnicodeString(a3, (PCUNICODE_STRING)((char *)v7[6] + 56));
        }
        *(_WORD *)&v26[2] = 16;
        v15 = (PVOID **)v7;
        *(GUID *)&v26[4] = GUID_HWPROFILE_CHANGE_CANCELLED;
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        do
        {
          ++*((_WORD *)v7 + 28);
          v16 = (PVOID **)v7;
          KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquireResourceExclusiveLite((PERESOURCE)v7[9], 1u);
          if ( !*((_BYTE *)v7 + 58) )
            PnpNotifyDriverCallback((__int64)v7, (__int64)v26, 0LL);
          ExReleaseResourceLite((PERESOURCE)v7[9]);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v18, v19, v20);
          ExAcquireFastMutex(&PnpHwProfileNotifyLock);
          v7 = (PVOID *)v7[1];
          PnpDereferenceNotify(v16);
          if ( v16 == v15 )
            PnpDereferenceNotify(v16);
        }
        while ( v7 != &PnpProfileNotifyList );
        v4 = v25;
        break;
      }
    }
    ExAcquireFastMutex(&PnpHwProfileNotifyLock);
    v7 = (PVOID *)*v7;
    PnpDereferenceNotify(v8);
  }
  KeReleaseGuardedMutex(&PnpHwProfileNotifyLock);
  return (unsigned int)v4;
}
