/*
 * XREFs of PiDmListRemoveList @ 0x140720B84
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405D9270 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PiDmGetObjectManagerForObjectType @ 0x1405DA6E0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140714AE8 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rax
  _QWORD *i; // r14
  ULONG_PTR v13; // rcx
  struct _KTHREAD *v15; // rax
  struct _KTHREAD *v16; // rax

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = (__int64)ObjectManagerForObjectType;
  v10 = (_QWORD **)(v7 + 88);
  if ( a2 >= v7 )
  {
    --CurrentThread->KernelApcDisable;
    if ( a2 > v7 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2, v9, (unsigned int *)a2, (__int64)(i - 8), 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    if ( a2 > a4 )
    {
      ExReleasePushLockEx(a2, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v13 = a4;
      goto LABEL_8;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v13 = a2;
LABEL_8:
  ExReleasePushLockEx(v13, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
