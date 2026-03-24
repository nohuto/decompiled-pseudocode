/*
 * XREFs of FreeObjOwner @ 0x1C006517C
 * Callers:
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C00645A0 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     FreeObjOwnerWorker @ 0x1C0065330 (FreeObjOwnerWorker.c)
 *     ParseUnload @ 0x1C006BE10 (ParseUnload.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 * Callees:
 *     HeapFree @ 0x1C0001F3C (HeapFree.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall FreeObjOwner(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  KIRQL v4; // al
  unsigned __int64 Count; // rbx
  bool v6; // al
  NTSTATUS v7; // ebx
  struct _KTIMER Timer; // [rsp+40h] [rbp-88h] BYREF
  struct _KDPC Dpc; // [rsp+80h] [rbp-48h] BYREF
  void *ThreadHandle; // [rsp+E0h] [rbp+18h] BYREF

  memset(&Dpc, 0, sizeof(Dpc));
  ThreadHandle = 0LL;
  memset(&Timer, 0, sizeof(Timer));
  if ( (gdwfAMLI & 4) == 0 )
    goto LABEL_7;
  if ( a1 )
  {
    v4 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    Count = a2[3].Count;
    ExReleaseSpinLockShared(&ACPINamespaceLock, v4);
    v6 = Count != 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !v6 )
  {
    KeInitializeTimer(&Timer);
    KeInitializeDpc(&Dpc, FreeObjOwnerTimeout, a2);
    KeSetTimer(&Timer, (LARGE_INTEGER)-600000000LL, &Dpc);
    ExWaitForRundownProtectionRelease(a2 + 4);
    KeCancelTimer(&Timer);
LABEL_7:
    HeapFree(a2);
    return 0;
  }
  v7 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, FreeObjOwnerWorker, a2);
  if ( v7 >= 0 )
  {
    v7 = 32772;
    NtClose(ThreadHandle);
  }
  return (unsigned int)v7;
}
