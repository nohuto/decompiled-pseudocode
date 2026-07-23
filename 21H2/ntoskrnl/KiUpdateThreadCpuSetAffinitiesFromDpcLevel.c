/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C638C
 * Callers:
 *     KeUpdateThreadCpuSets @ 0x1403C627C (KeUpdateThreadCpuSets.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x1403C633C (KiUpdateThreadCpuSetAffinitiesProcess.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140211D5C (KiSendSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiUpdateThreadCpuSets @ 0x1403C642C (KiUpdateThreadCpuSets.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

int __fastcall KiUpdateThreadCpuSetAffinitiesFromDpcLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned int v8; // esi
  __int64 updated; // rax
  unsigned int v10; // ebp
  __int64 v11; // rbx
  int result; // eax
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // [rsp+30h] [rbp+8h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v16 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[6];
        SchedulerAssist[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[6] - 1;
        v14[6] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v16, a2, a3, a4);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v8 = *(_DWORD *)(a1 + 588);
  updated = KiUpdateThreadCpuSets(a1, a2);
  v10 = *(_DWORD *)(a1 + 588);
  v11 = updated;
  result = KiReleaseThreadLockSafe(a1);
  if ( (xmmword_140CFC490 & 0x8000000) != 0 )
    result = EtwTraceIdealProcessor(a1, 1350LL, v8, v10);
  if ( v11 )
  {
    result = KeGetPcr()->Prcb.Number;
    if ( result != *(_DWORD *)(v11 + 36) )
      return KiSendSoftwareInterrupt();
  }
  return result;
}
