/*
 * XREFs of PspImplicitAssignProcessToJob @ 0x1406599D0
 * Callers:
 *     PspInsertProcess @ 0x14061809C (PspInsertProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 *     PspUnlockJobChain @ 0x140617CD4 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x140617D5C (PspLockJobChain.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140658F80 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspValidateJobChainLimits @ 0x14065900C (PspValidateJobChainLimits.c)
 *     PspEstablishJobHierarchy @ 0x140659124 (PspEstablishJobHierarchy.c)
 *     PspIncrementJobChainProcessCounts @ 0x140659628 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406596EC (PspApplyWorkingSetLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1406598B0 (MmAssignProcessToJob.c)
 *     PspApplyJobChainLimitsToProcess @ 0x140659B74 (PspApplyJobChainLimitsToProcess.c)
 */

__int64 __fastcall PspImplicitAssignProcessToJob(__int64 a1, __int64 a2, __int16 a3)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 EffectiveServerSilo; // rbx
  int v8; // edi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  int v15; // ebx

  CurrentThread = KeGetCurrentThread();
  PspLockJobChain(a1, (__int64)CurrentThread, 0);
  if ( (a3 & 0x400) != 0 )
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
  }
  else
  {
    for ( EffectiveServerSilo = a1; EffectiveServerSilo; EffectiveServerSilo = *(_QWORD *)(EffectiveServerSilo + 1072) )
    {
      v10 = *(_DWORD *)(EffectiveServerSilo + 256);
      if ( (v10 & 0x1000) == 0 )
      {
        if ( (a3 & 1) == 0 )
          goto LABEL_3;
        if ( (v10 & 0x800) == 0 )
          break;
      }
    }
    if ( (a3 & 1) != 0 && EffectiveServerSilo == a1 && (*(_DWORD *)(EffectiveServerSilo + 1320) & 0x40000000) == 0 )
    {
      v8 = -1073741790;
      goto LABEL_5;
    }
  }
LABEL_3:
  if ( !EffectiveServerSilo )
  {
    v8 = 0;
LABEL_5:
    PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
    return (unsigned int)v8;
  }
  if ( !PspValidateJobAssignmentMemoryPartition(EffectiveServerSilo, 0LL, a2, 1) )
  {
    v8 = -1073741637;
    goto LABEL_5;
  }
  v8 = PspValidateJobChainLimits(EffectiveServerSilo, v11, v12, a3);
  if ( v8 < 0 )
    goto LABEL_5;
  v8 = PspEstablishJobHierarchy((char *)EffectiveServerSilo, a2, 0LL, 1u);
  if ( v8 < 0 )
    goto LABEL_5;
  PspIncrementJobChainProcessCounts(EffectiveServerSilo, 0LL, a2, a3);
  PspApplyJobChainLimitsToProcess(EffectiveServerSilo, 0LL, a2);
  if ( (*(_DWORD *)(EffectiveServerSilo + 1320) & 0x1000) != 0 )
  {
    v13 = (volatile signed __int32 *)(a2 + 2472);
    v14 = 7LL;
    do
    {
      _interlockedbittestandset(v13++, 0x1Fu);
      --v14;
    }
    while ( v14 );
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 2508), 0x1Fu);
  }
  PspUnlockJobChain(a1, (__int64)CurrentThread, 0);
  v15 = PspApplyWorkingSetLimitsToProcess(a2);
  if ( v15 >= 0 && !(unsigned int)MmAssignProcessToJob(a2, 0LL, 0) )
    return (unsigned int)-1073741756;
  return (unsigned int)v15;
}
