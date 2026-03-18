/*
 * XREFs of PiDmListAddList @ 0x1406E4980
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     PiDmListAddObjectWorker @ 0x14076A1F0 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14077B33C (PiDmGetObjectManagerForObjectType.c)
 */

void __fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  ULONG_PTR v5; // rdi
  __int64 ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v9; // rbp
  _QWORD **v10; // r15
  struct _KTHREAD *v11; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // rax

  v5 = a2;
  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(unsigned int *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = ObjectManagerForObjectType;
  v10 = (_QWORD **)(v7 + 88);
  if ( v5 >= v7 )
  {
    --CurrentThread->KernelApcDisable;
    if ( v5 > v7 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(v5, 0LL);
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v10; i != v10; i = (_QWORD *)*i )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2LL, v9, v5, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegion();
  }
  if ( v5 >= a4 )
  {
    if ( v5 > a4 )
    {
      ExReleasePushLockEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v5 = a4;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegion();
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegion();
}
