/*
 * XREFs of KiEpfStart @ 0x140524494
 * Callers:
 *     KeWaitPhysicalFaultCompletion @ 0x14052419C (KeWaitPhysicalFaultCompletion.c)
 *     KiEpfHandleNotification @ 0x140524470 (KiEpfHandleNotification.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KeSetKernelStackSwapEnable @ 0x1402D0A10 (KeSetKernelStackSwapEnable.c)
 */

void __fastcall KiEpfStart(unsigned __int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  struct _KPRCB *CurrentPrcb; // rax
  _BYTE *SchedulerAssist; // rax
  char v5; // di
  signed __int32 v6; // edx
  _BYTE *v7; // rcx
  __int64 **v8; // rax
  int v9; // eax
  BOOLEAN v10; // bl
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  unsigned __int64 v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+3Ah] [rbp-16h]
  char v16; // [rsp+3Bh] [rbp-15h]
  int v17; // [rsp+3Ch] [rbp-14h]
  _QWORD v18[2]; // [rsp+40h] [rbp-10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v16 = 0;
  _InterlockedIncrement(&KiEpfCounters);
  CurrentThread = KeGetCurrentThread();
  v17 = 0;
  v13 = a1;
  v18[1] = v18;
  v18[0] = v18;
  v14 = 263;
  v15 = 6;
  v2 = KiEpfHashTable + 32LL * (((unsigned int)a1 + (unsigned int)(a1 >> 12)) % 0x25);
  KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( *(int *)(v2 + 24) > 0 )
    goto LABEL_5;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !KiEpfCompletionQueue )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 1;
    goto LABEL_5;
  }
  if ( CurrentThread == CurrentPrcb->IdleThread )
  {
    v7 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v7 )
      v7[16] = 1;
    goto LABEL_5;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
  {
LABEL_5:
    --*(_DWORD *)(v2 + 24);
    v5 = 0;
    goto LABEL_6;
  }
  v8 = *(__int64 ***)(v2 + 8);
  v5 = 1;
  if ( *v8 != (__int64 *)v2 )
    __fastfail(3u);
  v12 = *(_QWORD *)(v2 + 8);
  v11 = v2;
  *v8 = &v11;
  *(_QWORD *)(v2 + 8) = &v11;
LABEL_6:
  KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 16));
  if ( v5 )
  {
    _InterlockedIncrement(&dword_140C2B110);
    v6 = _InterlockedIncrement(&dword_140C2B114);
    do
      v9 = dword_140C2B118;
    while ( dword_140C2B118 < v6 && v9 != _InterlockedCompareExchange(&dword_140C2B118, v6, dword_140C2B118) );
    v10 = KeSetKernelStackSwapEnable(0);
    KeWaitForGate((__int64)&v14, 0x27u);
    KeSetKernelStackSwapEnable(v10);
    _InterlockedDecrement(&dword_140C2B114);
  }
}
