/*
 * XREFs of KiSetAffinityThread @ 0x14020EC24
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x1403DAC1C (KeSetAffinityProcess.c)
 * Callees:
 *     KiRescheduleThreadAfterAffinityChange @ 0x14020EE7C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiReselectIdealProcessorAfterAffinityChange @ 0x14020EFEC (KiReselectIdealProcessorAfterAffinityChange.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140292A04 (KiUpdateNodeAffinitizedFlag.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 *     EtwTraceThreadAffinity @ 0x14062E5D0 (EtwTraceThreadAffinity.c)
 */

unsigned int __fastcall KiSetAffinityThread(__int64 a1, __int64 a2, _WORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // rsi
  int v7; // r13d
  _DWORD *SchedulerAssist; // rcx
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rbx
  char v12; // r12
  int v13; // r8d
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int result; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-30h]
  unsigned int v26; // [rsp+34h] [rbp-2Ch]
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h] BYREF
  __int16 v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h]
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  v31 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0;
  v32 = 0;
  v29 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = SchedulerAssist[6];
        SchedulerAssist[6] = v22 + 1;
        if ( v22 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v23 = v21[6] - 1;
        v21[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v32);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v25 = *(_DWORD *)(a1 + 588);
  v26 = *(_DWORD *)(a1 + 196);
  KiCopyAffinityEx(*(_QWORD *)(a1 + 552), *(unsigned __int16 *)(*(_QWORD *)(a1 + 552) + 2LL), a3);
  v9 = *(unsigned int *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 196);
  v11 = KiProcessorBlock[v9];
  if ( !(unsigned __int8)KiCheckPrcbAffinityEx(a3, v11) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    KeFirstGroupAffinityEx(&v29, a3);
    v30 = *(unsigned __int8 *)(v11 + 209);
    v9 = (unsigned __int16)KiReselectIdealProcessorAfterAffinityChange(a1, &v29, v11, &v30);
    *(_DWORD *)(a1 + 196) = v9;
    v10 = v9;
    v11 = KiProcessorBlock[v9];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v11 + 208);
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v14 = v27;
  }
  else
  {
    v12 = KiAcquireThreadStateLock(a1, &v27, &v28);
    KiCopyAffinityEx(*(_QWORD *)(a1 + 576), *(unsigned __int16 *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
    if ( !(unsigned int)KiComputeThreadAffinity(a1) )
    {
      *(_DWORD *)(a1 + 588) = v9;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v11 + 208);
      KiUpdateNodeAffinitizedFlag(a1);
      KiUpdateSharedReadyQueueAffinityThread(v11, a1);
    }
    LOBYTE(v13) = v12;
    v14 = v27;
    v15 = v28;
    v7 = KiRescheduleThreadAfterAffinityChange(a1, *(_QWORD *)(a1 + 576), v13, v27, v28, v31);
    KiReleaseThreadStateLock(v16, v14, v15);
    v10 = *(_DWORD *)(a1 + 196);
  }
  v17 = *(_DWORD *)(a1 + 588);
  result = KiReleaseThreadLockSafe(a1);
  if ( v7 )
  {
    v20 = *(unsigned int *)(v14 + 36);
    result = KeGetPcr()->Prcb.Number;
    if ( result != (_DWORD)v20 )
    {
      LOBYTE(v19) = 2;
      result = KiSendSoftwareInterrupt(v20, v19);
    }
  }
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1350LL, v25, v17);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = EtwTraceIdealProcessor(a1, 1351LL, v26, v10);
  if ( (WORD2(PerfGlobalGroupMask) & 0x1000) != 0 )
  {
    v24 = *(unsigned __int16 *)(a1 + 560);
    WORD4(v29) = v24;
    if ( (unsigned __int16)v24 < *a3 )
      v4 = *(_QWORD *)&a3[4 * v24 + 4];
    *(_QWORD *)&v29 = v4;
    return EtwTraceThreadAffinity(a1, &v29);
  }
  return result;
}
