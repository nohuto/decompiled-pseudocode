/*
 * XREFs of KeSetIdealProcessorThreadEx @ 0x14029C098
 * Callers:
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x14037A3C4 (KeSetIdealProcessorThreadByNumber.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiReleaseThreadStateLock @ 0x14029B7D0 (KiReleaseThreadStateLock.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1402D5640 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiAcquireThreadStateLock @ 0x1402D5790 (KiAcquireThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KeSetIdealProcessorThreadEx(__int64 a1, int a2, unsigned int *a3)
{
  unsigned int v5; // r13d
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // edi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // eax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v27[11]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+80h] [rbp+8h]
  int v29; // [rsp+88h] [rbp+10h] BYREF
  unsigned int *v30; // [rsp+90h] [rbp+18h]
  volatile signed __int64 *v31; // [rsp+98h] [rbp+20h] BYREF

  v30 = a3;
  v27[0] = 0LL;
  v31 = 0LL;
  v5 = -1073741823;
  v28 = KiProcessorBlock[a2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v29 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v19 = v8[6];
        v8[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v17[6] - 1;
        v17[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(_DWORD *)(a1 + 588);
  v10 = *(_DWORD *)(a1 + 196);
  if ( (struct _KTHREAD *)a1 == KeGetCurrentThread() || (*(_DWORD *)(a1 + 116) & 8) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 588);
    v12 = v11;
    if ( (unsigned int)KiPrcbInGroupAffinity(v28, a1 + 576) )
    {
      KiAcquireThreadStateLock(a1, v27, &v31);
      v13 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 588) = a2;
      if ( (v13 & 8) == 0 )
        *(_DWORD *)(a1 + 196) = a2;
      KiUpdateSharedReadyQueueAffinityThread(v28, a1);
      KiReleaseThreadStateLock(v14, v27[0], v31);
      v12 = *(_DWORD *)(a1 + 588);
      v5 = 0;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 196);
    if ( (unsigned int)KiPrcbInGroupAffinity(v28, a1 + 552) )
    {
      v5 = 0;
      *(_DWORD *)(a1 + 196) = a2;
    }
    v12 = v9;
  }
  v15 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
  {
    EtwTraceIdealProcessor(a1, 1350LL, v9, v12);
    if ( (xmmword_140CFC490 & 0x8000000) != 0 )
      EtwTraceIdealProcessor(a1, 1351LL, v10, v15);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v30 )
    *v30 = v11;
  return v5;
}
