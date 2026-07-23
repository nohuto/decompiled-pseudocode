/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x1406FEACC
 * Callers:
 *     PnpDeviceEventWorker @ 0x1406FECB0 (PnpDeviceEventWorker.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CEDD8 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PnpDereferenceNotify @ 0x1406FD1E8 (PnpDereferenceNotify.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 **PnpProcessDeferredRegistrations()
{
  _QWORD *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 v3; // rax
  struct _FAST_MUTEX *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 ***v8; // rax
  PVOID **v9; // rbx
  __int64 **result; // rax
  __int64 *v11; // rax
  __int64 *v12; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+34h] [rbp-2Ch] BYREF
  _OWORD v16[2]; // [rsp+38h] [rbp-28h] BYREF

  v14 = 0;
  v15 = 0;
  v13 = &v12;
  v12 = (__int64 *)&v12;
  memset(v16, 0, sizeof(v16));
  ExAcquireFastMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v0 = PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || (v1 = *(_QWORD *)PnpDeferredRegistrationList,
          *(PVOID *)(*(_QWORD *)PnpDeferredRegistrationList + 8LL) != PnpDeferredRegistrationList) )
    {
LABEL_21:
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v1 + 8) = &PnpDeferredRegistrationList;
    v2 = v0[2];
    v3 = v2;
    v4 = *(struct _FAST_MUTEX **)(v2 + 64);
    if ( v4 )
    {
      ExAcquireFastMutex(*(PFAST_MUTEX *)(v2 + 64));
      v3 = v0[2];
    }
    *(_BYTE *)(v3 + 58) = 0;
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( *(_DWORD *)(v2 + 16) == 3 )
    {
      v5 = *(_QWORD *)(v2 + 88);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
        if ( v6 )
        {
          if ( (*(_DWORD *)(v6 + 704) & 0x4000) != 0 )
          {
            v7 = v13;
            v8 = (__int64 ***)(v2 + 96);
            if ( *v13 != (__int64 *)&v12 )
              goto LABEL_21;
            *(_QWORD *)(v2 + 104) = v13;
            *v8 = &v12;
            *v7 = v8;
            v13 = (__int64 **)(v2 + 96);
            ++*(_WORD *)(v2 + 56);
          }
        }
      }
    }
    if ( v4 )
      KeReleaseGuardedMutex(v4);
    PnpDereferenceNotify((PVOID **)v2);
  }
  KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v9 = (PVOID **)v12;
    result = &v12;
    if ( v12 == (__int64 *)&v12 )
      return result;
    if ( (__int64 **)v12[1] != &v12 )
      goto LABEL_21;
    v11 = (__int64 *)*v12;
    if ( *(__int64 **)(*v12 + 8) != v12 )
      goto LABEL_21;
    v12 = (__int64 *)*v12;
    v11[1] = (__int64)&v12;
    LODWORD(v16[0]) = 2097153;
    *(GUID *)((char *)v16 + 4) = GUID_TARGET_DEVICE_REMOVE_COMPLETE;
    PnpNotifyTargetDeviceChangeNotifyEntry((__int64)(v9 - 12), (__int64)v16, &v15, &v14);
    HalPutDmaAdapter((PADAPTER_OBJECT)*(v9 - 1));
    *(v9 - 1) = 0LL;
    PnpDereferenceNotify(v9 - 12);
  }
}
