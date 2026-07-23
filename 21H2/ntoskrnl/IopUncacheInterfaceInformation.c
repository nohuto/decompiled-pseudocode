/*
 * XREFs of IopUncacheInterfaceInformation @ 0x14073E5B8
 * Callers:
 *     IopDestroyDeviceNode @ 0x1406120F4 (IopDestroyDeviceNode.c)
 *     IopRemoveDevice @ 0x140738AB4 (IopRemoveDevice.c)
 *     PipProcessStartPhase1 @ 0x14073E02C (PipProcessStartPhase1.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopUncacheInterfaceInformation(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  void *v14; // r14
  __int64 v15; // rbp
  void *v16; // r12

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
    v13 = v7[3];
    v14 = v7;
    if ( v13 )
    {
      (*(void (__fastcall **)(_QWORD))(v13 + 24))(*(_QWORD *)(v13 + 8));
      ExFreePoolWithTag((PVOID)v13, 0);
    }
    v7 = (_QWORD *)*v7;
    ExFreePoolWithTag(v14, 0);
  }
  v8 = v5 + 63;
  v9 = (_QWORD *)v5[63];
  while ( v9 != v8 )
  {
    v15 = v9[3];
    v16 = v9;
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(v15 + 24))(*(_QWORD *)(v15 + 8));
      ExFreePoolWithTag((PVOID)v15, 0);
    }
    v9 = (_QWORD *)*v9;
    ExFreePoolWithTag(v16, 0);
  }
  v5[62] = v5 + 61;
  *v6 = v6;
  v5[64] = v5 + 63;
  *v8 = v8;
  v5[65] = 0LL;
  if ( a2 )
  {
    KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  }
}
