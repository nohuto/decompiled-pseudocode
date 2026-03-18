/*
 * XREFs of IopUncacheInterfaceInformation @ 0x1407490C0
 * Callers:
 *     PipProcessStartPhase1 @ 0x1407491FC (PipProcessStartPhase1.c)
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     IopDestroyDeviceNode @ 0x140774F24 (IopDestroyDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  void *v11; // r14
  __int64 v12; // rbp
  void *v13; // r12

  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  }
  if ( a1 )
    v5 = *(_QWORD **)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = v5 + 61;
  v7 = (_QWORD *)v5[61];
  while ( v7 != v6 )
  {
    v10 = v7[3];
    v11 = v7;
    if ( v10 )
    {
      (*(void (__fastcall **)(_QWORD))(v10 + 24))(*(_QWORD *)(v10 + 8));
      ExFreePoolWithTag((PVOID)v10, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v11, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v12 = v9[3];
    v13 = v9;
    if ( v12 )
    {
      (*(void (__fastcall **)(_QWORD))(v12 + 24))(*(_QWORD *)(v12 + 8));
      ExFreePoolWithTag((PVOID)v12, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v13, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegion();
  }
}
