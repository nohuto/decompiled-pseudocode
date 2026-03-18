/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A055C
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1406A13AC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     ConstraintEval @ 0x1406A0008 (ConstraintEval.c)
 *     PiDqQueryFreeActiveData @ 0x1406A03F4 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryAppendActionEntry @ 0x1406A08C8 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1406A0918 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryEnumObject @ 0x1406A5AF4 (PiDqQueryEnumObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406A7068 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406A7750 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406A89EC (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1406A8D70 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x1406A96AC (PiDmObjectIsEnumerable.c)
 *     _PnpStringFromGuid @ 0x1406AB274 (_PnpStringFromGuid.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v20; // rsi
  unsigned int j; // r14d
  __int64 *v22; // r13
  __int64 v23; // rax
  int v24; // r9d
  __int128 v25; // xmm0
  __int64 v26; // rax
  int v27; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  const wchar_t *v34; // rsi
  __int64 v35; // rax
  const wchar_t *i; // r14
  __int64 v37; // rax
  int Object; // eax
  PVOID v39; // r14
  __int64 v40; // rax
  struct _KTHREAD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v47; // [rsp+40h] [rbp-99h] BYREF
  _OWORD v48[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v49; // [rsp+68h] [rbp-71h]
  _BYTE *v50; // [rsp+78h] [rbp-61h]
  __int128 v51; // [rsp+80h] [rbp-59h] BYREF
  __int128 v52; // [rsp+90h] [rbp-49h]
  _BYTE v53[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  v47 = 0LL;
  v5 = *(_BYTE *)(v2 + 40) & 1;
  v45 = v5;
  EnumObject = 0;
  v50 = 0LL;
  v7 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
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
          v34 = *(const wchar_t **)(v9 + 32);
          while ( 2 )
          {
            if ( *v34 )
            {
              v35 = -1LL;
              do
                ++v35;
              while ( v34[v35] );
              for ( i = &v34[v35 + 1]; *i; i += v37 + 1 )
              {
                if ( !wcsicmp(v34, i) )
                  goto LABEL_60;
                v37 = -1LL;
                do
                  ++v37;
                while ( i[v37] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v34, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
                goto LABEL_60;
              if ( Object >= 0 )
              {
                v39 = P;
                if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, v39);
                PiDmObjectRelease(v39);
                P = 0LL;
                if ( EnumObject >= 0 )
                {
LABEL_60:
                  v40 = -1LL;
                  do
                    ++v40;
                  while ( v34[v40] );
                  v34 += v40 + 1;
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
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v16, v17, v18);
        v5 = v45;
        goto LABEL_13;
      }
    }
    else
    {
      v20 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v22 = v20;
        if ( *(_DWORD *)v20 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v23 = v20[1];
          v24 = *((_DWORD *)v20 + 4);
          v25 = *(_OWORD *)v23;
          LODWORD(v52) = *(_DWORD *)(v23 + 16);
          v26 = *(_QWORD *)(a2 + 24);
          v51 = v25;
          EnumObject = ConstraintEval(*(_DWORD *)(v26 + 80), *(_DWORD **)(v26 + 88), (__int64)&v51, v24, (__int64)v48);
          if ( EnumObject != -1073741823 )
            break;
        }
        v20 += 4;
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
      else if ( DWORD2(v49) == *((_DWORD *)v22 + 5) )
      {
        if ( DWORD2(v49) == 13 )
        {
          EnumObject = PnpStringFromGuid(v50, v53);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v7 = v53;
        }
        else if ( DWORD2(v49) == 18 )
        {
          v7 = v50;
        }
        v27 = PiDmGetObject(*((unsigned int *)v22 + 6), v7, &P);
        EnumObject = v27;
        if ( v27 != -1073741772 )
        {
          if ( v27 < 0 )
            goto LABEL_12;
          v33 = PiDmListEnumObjectsWithCallback(*((unsigned int *)v22 + 7), P, PiDqEnumQueryObjectsCallback, a2);
          v14 = P;
          EnumObject = v33;
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v47);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v47);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v15 = a2 + 64;
LABEL_13:
  if ( EnumObject < 0 )
  {
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    ExReleasePushLockEx(v15, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v42, v43, v44);
  }
  if ( v5 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v30, v31, v32);
  }
  return (unsigned int)EnumObject;
}
