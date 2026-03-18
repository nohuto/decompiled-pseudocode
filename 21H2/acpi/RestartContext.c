/*
 * XREFs of RestartContext @ 0x1C000DCC0
 * Callers:
 *     SyncEvalObject @ 0x1C000B990 (SyncEvalObject.c)
 *     RestartCtxtCallback @ 0x1C000C700 (RestartCtxtCallback.c)
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0010A50 (RunContext.c)
 *     AMLIRestartContext @ 0x1C00648F4 (AMLIRestartContext.c)
 *     SleepQueueDpc @ 0x1C0068840 (SleepQueueDpc.c)
 *     AsyncCallBack @ 0x1C00696FC (AsyncCallBack.c)
 *     TimeoutCallback @ 0x1C0069B70 (TimeoutCallback.c)
 *     SyncLoadDDB @ 0x1C00BC4EC (SyncLoadDDB.c)
 * Callees:
 *     InsertReadyQueue @ 0x1C000E2B0 (InsertReadyQueue.c)
 *     OSQueueWorkItem @ 0x1C002B8D0 (OSQueueWorkItem.c)
 */

__int64 __fastcall RestartContext(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rbp
  unsigned __int32 v8; // ecx
  unsigned int v9; // ecx
  __int64 v10; // rdx
  unsigned int inserted; // ebx

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 32);
  else
    v3 = *(_QWORD *)(a1 + 72);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(a1 + 120);
  v6 = *(_QWORD *)(a1 + 408);
  v7 = (unsigned int)gReadyQueue;
  if ( (gDebugger & 0x8000) != 0 && qword_1C0081AA0 )
  {
    v8 = _InterlockedExchangeAdd((_DWORD *)&qword_1C0081A98 + 1, 1u);
    if ( (_DWORD)qword_1C0081A98 == 204 )
      v9 = v8 % 0xCC;
    else
      v9 = v8 % (unsigned int)qword_1C0081A98;
    v10 = 72LL * v9;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 8) = MEMORY[0xFFFFF78000000008];
    *(_DWORD *)((char *)qword_1C0081AA0 + v10) = 1380275028;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 16) = CurrentThread;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 24) = v6;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 32) = a1;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 40) = v7;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 48) = a1;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 56) = v3;
    *(_QWORD *)((char *)qword_1C0081AA0 + v10 + 64) = v5;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    *(_DWORD *)(a1 + 64) |= 0x20u;
    KeReleaseSpinLock(&SpinLock, NewIrql);
    if ( (gdwfAMLI & 4) == 0 || !(unsigned __int8)ExTryQueueWorkItem(a1 + 360, 1LL) )
      OSQueueWorkItem(a1 + 360);
    return 32772LL;
  }
  else
  {
    NewIrql = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    if ( !*(_QWORD *)(a1 + 432) )
      *(_QWORD *)(a1 + 432) = ++gAmliMethodCounter;
    inserted = InsertReadyQueue((PSLIST_ENTRY)a1);
    KeReleaseSpinLock(&SpinLock, NewIrql);
    return inserted;
  }
}
