/*
 * XREFs of CmSetCallbackObjectContext @ 0x1405D5830
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1405D4420 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x1408834EC (VrpPreLoadKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall CmSetCallbackObjectContext(PVOID Object, PLARGE_INTEGER Cookie, PVOID NewContext, PVOID *OldContext)
{
  char v4; // r12
  NTSTATUS v9; // edi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rax
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v20; // rcx
  __int64 *v21; // rbx
  LARGE_INTEGER *v22; // rax
  LARGE_INTEGER **v23; // rdx
  LONGLONG v24; // rax
  LONGLONG v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  LONGLONG QuadPart; // rcx
  void *v34; // rax

  v4 = 0;
  v9 = -1073741275;
  if ( !Object || *(_DWORD *)Object != 1803104306 )
    return -1073741585;
  if ( OldContext )
    *OldContext = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
  v12 = (char *)Object + 72;
  while ( 1 )
  {
    v13 = (_QWORD *)*v12;
    if ( (_QWORD *)*v12 != v12 )
    {
      QuadPart = Cookie->QuadPart;
      while ( v13[4] != QuadPart )
      {
        if ( v13[4] >= QuadPart )
        {
          v13 = (_QWORD *)*v13;
          if ( v13 != v12 )
            continue;
        }
        goto LABEL_7;
      }
      v34 = (void *)_InterlockedExchange64(v13 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v34;
      v9 = 0;
    }
LABEL_7:
    if ( v9 >= 0 )
      break;
    if ( v4 )
    {
      v14 = (__int64 *)CallbackListHead;
      if ( (__int64 *)CallbackListHead == &CallbackListHead )
      {
LABEL_28:
        v14 = 0LL;
      }
      else
      {
        while ( Cookie->QuadPart != v14[3] )
        {
          v14 = (__int64 *)*v14;
          if ( v14 == &CallbackListHead )
            goto LABEL_28;
        }
      }
      if ( v14 )
      {
        v9 = 0;
        PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63634D43u);
        v20 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v14;
          v21 = v14 + 8;
          PoolWithTag[4] = *Cookie;
          v22 = PoolWithTag + 2;
          v20[7] = (LONGLONG)NewContext;
          v20[6] = (LONGLONG)Object;
          v23 = (LARGE_INTEGER **)v21[1];
          if ( *v23 != (LARGE_INTEGER *)v21
            || (v22->QuadPart = (LONGLONG)v21,
                v20[3] = (LONGLONG)v23,
                *v23 = v22,
                v21[1] = (__int64)v22,
                v24 = v13[1],
                v25 = *(_QWORD *)v24,
                *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24) )
          {
            __fastfail(3u);
          }
          *v20 = v25;
          v20[1] = v24;
          *(_QWORD *)(v25 + 8) = v20;
          *(_QWORD *)v24 = v20;
        }
        else
        {
          v9 = -1073741670;
        }
      }
      else
      {
        v9 = -1073741584;
      }
      break;
    }
    ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
    v18 = KeGetCurrentThread();
    v4 = 1;
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
  return v9;
}
