/*
 * XREFs of KiSchedulerApc @ 0x1402EFA40
 * Callers:
 *     <none>
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14023BD18 (KiCheckForMaxOverQuotaScb.c)
 *     KiIsProcessTerminationRequested @ 0x140245C68 (KiIsProcessTerminationRequested.c)
 *     KiRemoveQueueApc @ 0x14024ECFC (KiRemoveQueueApc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiInsertQueueApc @ 0x1402EE784 (KiInsertQueueApc.c)
 *     KiSignalThreadForApc @ 0x1402EE894 (KiSignalThreadForApc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiSetProcessorIdle @ 0x14035C560 (KiSetProcessorIdle.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     DbgkForwardException @ 0x1406EA7D0 (DbgkForwardException.c)
 */

char __fastcall KiSchedulerApc(ULONG_PTR a1)
{
  char result; // al
  int v3; // r13d
  int v4; // r13d
  void *v5; // r15
  unsigned __int8 CurrentIrql; // r15
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v9; // rcx
  __int64 NextThread; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  unsigned __int8 v15; // r14
  struct _KPRCB *v16; // r15
  _DWORD *v17; // rcx
  bool v18; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // r8
  unsigned __int8 *PriorityState; // r14
  char v22; // cl
  unsigned __int8 v23; // al
  void *v24; // rcx
  __int64 v25; // r8
  _DWORD *v26; // r8
  KPROCESSOR_MODE v27; // si
  __int64 v28; // rax
  KPROCESSOR_MODE v29; // di
  bool v30; // di
  _DWORD *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  char v34; // r9
  _DWORD *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  unsigned int v40; // edx
  char v41; // al
  char v42; // al
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // r14
  _DWORD *v50; // r9
  struct _KPRCB *v51; // rdi
  _DWORD *v52; // rcx
  int v53; // eax
  _DWORD *v54; // rcx
  int v55; // eax
  _DWORD *v56; // rcx
  int v57; // eax
  char v58; // di
  char v59; // al
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  unsigned __int8 v64; // si
  _DWORD *v65; // r9
  struct _KPRCB *v66; // rdi
  _DWORD *v67; // rcx
  int v68; // eax
  _DWORD *v69; // rcx
  int v70; // eax
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r10
  _DWORD *v73; // r9
  int v74; // eax
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  int v78; // eax
  int v79; // eax
  int v80; // [rsp+38h] [rbp-99h] BYREF
  int v81; // [rsp+3Ch] [rbp-95h] BYREF
  int v82; // [rsp+40h] [rbp-91h] BYREF
  int v83; // [rsp+44h] [rbp-8Dh] BYREF
  int v84[4]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v85[40]; // [rsp+58h] [rbp-79h] BYREF

  result = (unsigned __int8)memset(v85, 0, 0x98uLL);
  v3 = *(_DWORD *)(a1 + 120);
  v80 = 0;
  v4 = v3 & 0x8000;
  if ( (*(_DWORD *)(a1 + 120) & 0x400) != 0 && !v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xAu);
    KiAbProcessContextSwitch(a1, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    v81 = 0;
    while ( 1 )
    {
      v9 = CurrentPrcb->SchedulerAssist;
      if ( v9 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v36 = v9[6];
          v9[6] = v36 + 1;
          if ( v36 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        break;
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v37 = v31[6] - 1;
          v31[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v81);
      while ( CurrentPrcb->PrcbLock );
    }
    NextThread = (__int64)CurrentPrcb->NextThread;
    if ( NextThread
      || (NextThread = KiSelectReadyThreadEx(CurrentPrcb, (_KTHREAD *)a1, 0LL)) != 0
      || (*(_DWORD *)(a1 + 120) & 0x200) == 0
      && (v11 = *(_QWORD *)(a1 + 104)) != 0
      && (v12 = CurrentPrcb->ScbOffset + v11) != 0
      && KiCheckForMaxOverQuotaScb(v12)
      && (NextThread = (__int64)CurrentPrcb->IdleThread, KiSetProcessorIdle(CurrentPrcb, 1LL, 1LL), NextThread) )
    {
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v7) = 1;
      KiEndThreadCycleAccumulation(CurrentPrcb, a1, 0LL, v7);
      _enable();
      PriorityState = (unsigned __int8 *)CurrentPrcb->PriorityState;
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0
        && *(char *)(NextThread + 195) < 16
        && *(_QWORD *)(NextThread + 104)
        && (v32 = *(_QWORD *)(NextThread + 104)) != 0
        && (v33 = CurrentPrcb->ScbOffset + v32) != 0
        && (unsigned int)KiGetThreadEffectiveRankNonZero(NextThread, v33, v20, 0, 0LL) )
      {
        v22 = v34 + 1;
      }
      else
      {
        v22 = *(_BYTE *)(NextThread + 195);
      }
      v23 = v22 & 0x7F | (*(_BYTE *)(NextThread + 119) << 7);
      *PriorityState = v23;
      v24 = CurrentPrcb->SchedulerAssist;
      if ( v24 )
      {
        if ( (_KTHREAD *)NextThread == CurrentPrcb->IdleThread )
          v39 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v39 = v23 & 0x7F;
        KiSetSchedulerAssistPriority(v24, v39, 0LL);
      }
      v25 = (__int64)CurrentPrcb->PriorityState;
      if ( KeHeteroSystem )
      {
        v40 = *(_DWORD *)(NextThread + 80);
        v41 = (*(_BYTE *)(v25 + 64) ^ *(_BYTE *)(NextThread + 512)) & 7 ^ *(_BYTE *)(v25 + 64);
        v42 = (v41 ^ (8 * *(_BYTE *)(NextThread + 516))) & 0x38 ^ v41;
        if ( v40 <= *(_DWORD *)(NextThread + 84) )
          v40 = *(_DWORD *)(NextThread + 84);
        *(_BYTE *)(v25 + 64) = (v40 >= KiDynamicHeteroCpuPolicyExpectedCycles ? 0x40 : 0) | v42 & 0xBF;
      }
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      if ( (_KTHREAD *)NextThread != CurrentPrcb->IdleThread && (CurrentPrcb->IdleState & 1) == 0 )
        __fastfail(0x21u);
      *(_BYTE *)(a1 + 643) = 38;
      *(_BYTE *)(a1 + 390) = 0;
      KiQueueReadyThread(CurrentPrcb, a1, v25);
      if ( (unsigned __int8)KiSwapContext(a1, NextThread, 0LL) )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v43 = KeGetCurrentPrcb();
            v44 = v43->SchedulerAssist;
            v18 = (v44[5] & 0xFFFF0003) == 0;
            v44[5] &= 0xFFFF0003;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v43);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(a1 + 116) &= ~0x40u;
        KiDeliverApc(0LL, 0LL, 0LL);
      }
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v38 = v14[6] - 1;
          v14[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && CurrentIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  v5 = (void *)(a1 + 736);
  if ( !*(_DWORD *)(a1 + 740) && !v4 )
  {
    v27 = (*(_DWORD *)(a1 + 116) & 0x40000) != 0;
    if ( (*(_DWORD *)(a1 + 116) & 0x40000) == 0 )
    {
      v28 = *(_QWORD *)(a1 + 144);
      if ( v28 )
      {
        --*(_WORD *)(a1 + 486);
        v29 = *(_BYTE *)(v28 + 368) & 1;
        v18 = (*(_WORD *)(a1 + 486))++ == 0xFFFF;
        v27 = v29;
        if ( v18 && *(_QWORD *)(a1 + 152) != a1 + 152 )
          KiCheckForKernelApcDelivery();
      }
    }
    v30 = (*(_BYTE *)(a1 + 194) & 2) != 0;
    if ( (*(_BYTE *)(a1 + 194) & 2) != 0 )
    {
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
      {
        v50 = KeGetCurrentPrcb()->SchedulerAssist;
        v50[5] |= (-1 << (v49 + 1)) & 4;
      }
      v51 = KeGetCurrentPrcb();
      v82 = 0;
      v52 = v51->SchedulerAssist;
      if ( v52 )
      {
        if ( v51->NestingLevel <= 1u )
        {
          v53 = v52[6];
          v52[6] = v53 + 1;
          if ( v53 == -1 )
LABEL_104:
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      {
        v54 = v51->SchedulerAssist;
        if ( v54 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v55 = v54[6] - 1;
            v54[6] = v55;
            if ( !v55 )
              KiRemoveSystemWorkPriorityKick(v51);
          }
        }
        do
          KeYieldProcessorEx(&v82);
        while ( *(_QWORD *)(a1 + 64) );
        v56 = v51->SchedulerAssist;
        if ( v56 )
        {
          if ( v51->NestingLevel <= 1u )
          {
            v57 = v56[6];
            v56[6] = v57 + 1;
            if ( v57 == -1 )
              goto LABEL_104;
          }
        }
      }
      v58 = *(_BYTE *)(a1 + 194);
      v59 = v58 & 0xFD;
      v30 = (v58 & 2) != 0;
      *(_BYTE *)(a1 + 194) = v59;
      KiReleaseThreadLockSafe(a1);
      v5 = (void *)(a1 + 736);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v60 = KeGetCurrentIrql();
          if ( v60 <= 0xFu && v49 <= 0xFu && v60 >= 2u )
          {
            v61 = KeGetCurrentPrcb();
            v62 = v61->SchedulerAssist;
            v63 = ~(unsigned __int16)(-1LL << (v49 + 1));
            v18 = (v63 & v62[5]) == 0;
            v62[5] &= v63;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v61);
          }
        }
      }
      __writecr8(v49);
    }
    *(_DWORD *)(a1 + 116) |= 0x80000u;
    result = KeWaitForSingleObject(v5, Suspended, v27, 0, 0LL);
    *(_DWORD *)(a1 + 116) &= ~0x80000u;
    if ( v30 )
    {
      v64 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
      {
        v65 = KeGetCurrentPrcb()->SchedulerAssist;
        v65[5] |= (-1 << (v64 + 1)) & 4;
      }
      v66 = KeGetCurrentPrcb();
      v83 = 0;
      while ( 1 )
      {
        v67 = v66->SchedulerAssist;
        if ( v67 )
        {
          if ( v66->NestingLevel <= 1u )
          {
            v68 = v67[6];
            v67[6] = v68 + 1;
            if ( v68 == -1 )
              KiRemoveSystemWorkPriorityKick(v66);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        v69 = v66->SchedulerAssist;
        if ( v69 )
        {
          if ( v66->NestingLevel <= 1u )
          {
            v70 = v69[6] - 1;
            v69[6] = v70;
            if ( !v70 )
              KiRemoveSystemWorkPriorityKick(v66);
          }
        }
        do
          KeYieldProcessorEx(&v83);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( *(_QWORD *)(a1 + 168) != a1 + 168 )
        *(_BYTE *)(a1 + 194) |= 2u;
      KiReleaseThreadLockSafe(a1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v71 = KeGetCurrentIrql();
          if ( v71 <= 0xFu && v64 <= 0xFu && v71 >= 2u )
          {
            v72 = KeGetCurrentPrcb();
            v73 = v72->SchedulerAssist;
            v74 = ~(unsigned __int16)(-1LL << (v64 + 1));
            v18 = (v74 & v73[5]) == 0;
            v73[5] &= v74;
            if ( v18 )
              KiRemoveSystemWorkPriorityKick(v72);
          }
        }
      }
      result = v64;
      __writecr8(v64);
    }
  }
  *(_DWORD *)(a1 + 116) &= ~0x40000u;
  if ( v4 )
  {
    if ( KiIsProcessTerminationRequested(a1, &v80) )
    {
      memset(&v85[2], 0, 0x90uLL);
      LOBYTE(v75) = 1;
      v85[0] = v80;
      LOBYTE(v76) = 1;
      v85[1] = 1;
      DbgkForwardException(v85, v76, v75);
      LOBYTE(v77) = 1;
      DbgkForwardException(v85, 0LL, v77);
    }
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v15 <= 0xFu )
    {
      v26 = KeGetCurrentPrcb()->SchedulerAssist;
      v26[5] |= (-1 << (v15 + 1)) & 4;
    }
    v16 = KeGetCurrentPrcb();
    v84[0] = 0;
    while ( 1 )
    {
      v17 = v16->SchedulerAssist;
      if ( v17 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v78 = v17[6];
          v17[6] = v78 + 1;
          if ( v78 == -1 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v35 = v16->SchedulerAssist;
      if ( v35 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v79 = v35[6] - 1;
          v35[6] = v79;
          if ( !v79 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(v84);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
    {
      v18 = *(_BYTE *)(a1 + 730) == 0;
      *(_QWORD *)(a1 + 680) = KiSchedulerApcTerminate;
      *(_BYTE *)(a1 + 729) = 1;
      if ( !v18 )
        KiRemoveQueueApc(a1 + 648);
      *(_BYTE *)(a1 + 730) = 1;
      KiInsertQueueApc(a1 + 648);
      KiSignalThreadForApc((__int64)v16, a1 + 648, v15);
    }
    KiReleaseThreadLockSafe(a1);
    return KiExitDispatcher((__int64)v16, 0, 1, 0, v15);
  }
  return result;
}
