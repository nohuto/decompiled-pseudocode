/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14062E878
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14062F5EC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D20D0 (_wcsicmp.c)
 *     ConstraintEval @ 0x14062E324 (ConstraintEval.c)
 *     PiDqQueryFreeActiveData @ 0x14062E710 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14062FBA8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x14062FC34 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEnumObject @ 0x140633B34 (PiDqQueryEnumObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406350E8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406357D0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x140636A6C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140636DF0 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x14063772C (PiDmObjectIsEnumerable.c)
 *     _PnpStringFromGuid @ 0x140638420 (_PnpStringFromGuid.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  char v5; // r14
  int EnumObject; // ebx
  _BYTE *v7; // r12
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  PVOID v13; // rsi
  PVOID v14; // rcx
  ULONG_PTR v15; // rsi
  __int64 *v17; // rsi
  unsigned int j; // r14d
  __int64 *v19; // r13
  __int64 v20; // rax
  int v21; // r9d
  __int128 v22; // xmm0
  __int64 v23; // rax
  int v24; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  int v27; // eax
  const wchar_t *v28; // rsi
  __int64 v29; // rax
  const wchar_t *i; // r14
  __int64 v31; // rax
  int Object; // eax
  PVOID v33; // r14
  __int64 v34; // rax
  struct _KTHREAD *v35; // rax
  char v36; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v38; // [rsp+40h] [rbp-99h] BYREF
  _OWORD v39[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v40; // [rsp+68h] [rbp-71h]
  _BYTE *v41; // [rsp+78h] [rbp-61h]
  __int128 v42; // [rsp+80h] [rbp-59h] BYREF
  __int128 v43; // [rsp+90h] [rbp-49h]
  _BYTE v44[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  v38 = 0LL;
  v5 = *(_BYTE *)(v2 + 40) & 1;
  v36 = v5;
  EnumObject = 0;
  v41 = 0LL;
  v7 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memset(v39, 0, sizeof(v39));
  v40 = 0LL;
  if ( !v5 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v28 = *(const wchar_t **)(v9 + 32);
          while ( 2 )
          {
            if ( *v28 )
            {
              v29 = -1LL;
              do
                ++v29;
              while ( v28[v29] );
              for ( i = &v28[v29 + 1]; *i; i += v31 + 1 )
              {
                if ( !wcsicmp(v28, i) )
                  goto LABEL_60;
                v31 = -1LL;
                do
                  ++v31;
                while ( i[v31] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v28, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
                goto LABEL_60;
              if ( Object >= 0 )
              {
                v33 = P;
                if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, v33);
                PiDmObjectRelease(v33);
                P = 0LL;
                if ( EnumObject >= 0 )
                {
LABEL_60:
                  v34 = -1LL;
                  do
                    ++v34;
                  while ( v28[v34] );
                  v28 += v34 + 1;
                  continue;
                }
              }
              goto LABEL_12;
            }
            break;
          }
        }
        goto LABEL_10;
      }
      v12 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v9 + 24), &P);
      EnumObject = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_12;
        v13 = P;
        if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
          EnumObject = PiDqQueryEnumObject(a2, v13);
        v14 = v13;
LABEL_9:
        PiDmObjectRelease(v14);
        if ( EnumObject >= 0 )
          goto LABEL_10;
LABEL_12:
        v15 = a2 + 64;
        ExReleasePushLockEx(a2 + 64, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = v36;
        goto LABEL_13;
      }
    }
    else
    {
      v17 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v19 = v17;
        if ( *(_DWORD *)v17 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v20 = v17[1];
          v21 = *((_DWORD *)v17 + 4);
          v22 = *(_OWORD *)v20;
          LODWORD(v43) = *(_DWORD *)(v20 + 16);
          v23 = *(_QWORD *)(a2 + 24);
          v42 = v22;
          EnumObject = ConstraintEval(*(_DWORD *)(v23 + 80), *(_DWORD **)(v23 + 88), (__int64)&v42, v21, (__int64)v39);
          if ( EnumObject != -1073741823 )
            break;
        }
        v17 += 4;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_12;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
      else if ( DWORD2(v40) == *((_DWORD *)v19 + 5) )
      {
        if ( DWORD2(v40) == 13 )
        {
          EnumObject = PnpStringFromGuid(v41, v44);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v7 = v44;
        }
        else if ( DWORD2(v40) == 18 )
        {
          v7 = v41;
        }
        v24 = PiDmGetObject(*((unsigned int *)v19 + 6), v7, &P);
        EnumObject = v24;
        if ( v24 != -1073741772 )
        {
          if ( v24 < 0 )
            goto LABEL_12;
          v27 = PiDmListEnumObjectsWithCallback(*((unsigned int *)v19 + 7), P, PiDqEnumQueryObjectsCallback, a2);
          v14 = P;
          EnumObject = v27;
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v38);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v38);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v15 = a2 + 64;
LABEL_13:
  if ( EnumObject < 0 )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    ExReleasePushLockEx(v15, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v5 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}
