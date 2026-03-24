/*
 * XREFs of CmSetCallbackObjectContext @ 0x1405D5830
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpPostOpenOrCreate @ 0x1405D4420 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14088338C (VrpPreLoadKey.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
  struct _KTHREAD *v15; // rax
  LARGE_INTEGER *PoolWithTag; // rax
  LONGLONG *v17; // rcx
  __int64 *v18; // rbx
  LARGE_INTEGER *v19; // rax
  LARGE_INTEGER **v20; // rdx
  LONGLONG v21; // rax
  LONGLONG v22; // rdx
  LONGLONG QuadPart; // rcx
  void *v25; // rax

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
      v25 = (void *)_InterlockedExchange64(v13 + 7, (__int64)NewContext);
      if ( OldContext )
        *OldContext = v25;
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
        v17 = (LONGLONG *)PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[5].QuadPart = (LONGLONG)v14;
          v18 = v14 + 8;
          PoolWithTag[4] = *Cookie;
          v19 = PoolWithTag + 2;
          v17[7] = (LONGLONG)NewContext;
          v17[6] = (LONGLONG)Object;
          v20 = (LARGE_INTEGER **)v18[1];
          if ( *v20 != (LARGE_INTEGER *)v18
            || (v19->QuadPart = (LONGLONG)v18,
                v17[3] = (LONGLONG)v20,
                *v20 = v19,
                v18[1] = (__int64)v19,
                v21 = v13[1],
                v22 = *(_QWORD *)v21,
                *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21) )
          {
            __fastfail(3u);
          }
          *v17 = v22;
          v17[1] = v21;
          *(_QWORD *)(v22 + 8) = v17;
          *(_QWORD *)v21 = v17;
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v15 = KeGetCurrentThread();
    v4 = 1;
    --v15->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpContextListLock, 0LL);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleasePushLockEx((ULONG_PTR)&CmpCallbackListLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
