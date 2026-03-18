/*
 * XREFs of PspRevertContainerImpersonation @ 0x14026D9F0
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x14035A390 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x14057C3A0 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14024CFC0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeClearSystemPriority @ 0x14026B280 (KeClearSystemPriority.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x14026DBE0 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void *v4; // rdi
  unsigned __int8 v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v15; // rdx
  struct _KPRCB *v16; // r14
  _DWORD *v17; // rcx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  struct _KPRCB *v27; // rcx
  _DWORD *v28; // rdx
  bool v29; // zf
  int v30; // eax
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v36; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(void **)(BugCheckParameter1 + 1472);
  if ( !v4 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v16 = KeGetCurrentPrcb();
    v36 = 0;
    v17 = v16->SchedulerAssist;
    if ( v17 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v23 = v17[6];
        v17[6] = v23 + 1;
        if ( v23 == -1 )
LABEL_27:
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      v20 = v16->SchedulerAssist;
      if ( v20 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v24 = v20[6] - 1;
          v20[6] = v24;
          if ( !v24 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v36, v15, a3, (__int64)a4);
      while ( CurrentPrcb->PrcbLock );
      v21 = v16->SchedulerAssist;
      if ( v21 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v25 = v21[6];
          v21[6] = v25 + 1;
          if ( v25 == -1 )
            goto LABEL_27;
        }
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v26 = v19[6] - 1;
        v19[6] = v26;
        if ( !v26 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = (v28[5] & 0xFFFF0001) == 0;
        v28[5] &= 0xFFFF0001;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
    __writecr8(0LL);
  }
  v7 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v7 <= 0xFu )
  {
    a4 = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (v7 + 1)) & 4u | a4[5];
    a4[5] = a3;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, v7);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, v7, a3, a4);
  *(_QWORD *)(BugCheckParameter1 + 1472) = 0LL;
  KeClearSystemPriority(BugCheckParameter1, v8, v9, v10);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  v11 = KeGetCurrentPrcb();
  v12 = v11->SchedulerAssist;
  if ( v12 )
  {
    if ( v11->NestingLevel <= 1u )
    {
      v30 = v12[6] - 1;
      v12[6] = v30;
      if ( !v30 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && v7 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (v7 + 1));
        v29 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v29 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
  }
  __writecr8(v7);
  EtwTraceThreadWorkOnBehalfUpdate(v4, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v4, 0x746E6F43u);
  return 0LL;
}
