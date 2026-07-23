/*
 * XREFs of PiDmListRemoveList @ 0x140730AF8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14062A730 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14062BBA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140730CE8 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  void *v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rax
  _QWORD *i; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG_PTR v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KTHREAD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = ObjectManagerForObjectType;
  v10 = (_QWORD **)(v7 + 88);
  if ( a2 >= v7 )
  {
    --CurrentThread->KernelApcDisable;
    if ( a2 > v7 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
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
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2LL, v9, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  if ( a2 >= a4 )
  {
    if ( a2 > a4 )
    {
      ExReleasePushLockEx(a2, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v26, v27, v28);
      v16 = a4;
      goto LABEL_8;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
  }
  v16 = a2;
LABEL_8:
  ExReleasePushLockEx(v16, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
}
