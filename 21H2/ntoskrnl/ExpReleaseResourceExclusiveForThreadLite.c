/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140220DF0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExpReleaseResourceForThreadLite @ 0x1402FDBE0 (ExpReleaseResourceForThreadLite.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWakeQueueWaiter @ 0x1402F6A70 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x1402F6BC0 (KiTryUnwaitThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     KiRemoveBoostThread @ 0x14035B110 (KiRemoveBoostThread.c)
 *     KiWakeOtherQueueWaiters @ 0x14035B550 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14062DA60 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1406327B8 (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
  bool v5; // r12
  unsigned int v6; // edi
  unsigned int v7; // edi
  int v8; // eax
  signed __int64 v9; // rdi
  __int64 v10; // r15
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  int v14; // r13d
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  unsigned __int64 v19; // rdi
  int v20; // edi
  unsigned int v21; // r15d
  unsigned int v22; // ebp
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  volatile signed __int32 *v31; // rax
  volatile signed __int32 *v32; // rdx
  volatile signed __int32 *v33; // r10
  __int64 v34; // rdx
  volatile signed __int32 **v35; // r8
  _QWORD *v36; // rcx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  _DWORD *v40; // r9
  char v41; // dl
  bool v42; // zf
  char v43; // al
  _QWORD *v44; // rax
  int v45; // edx
  __int64 v46; // r8
  _QWORD *v47; // rdx
  volatile signed __int32 *v48; // r13
  int v49; // eax
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  struct _KPRCB *v53; // r10
  _DWORD *v54; // r9
  unsigned __int8 v55; // cl
  _DWORD *v56; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v58; // r9
  __int64 v59; // r10
  _QWORD *v60; // r10
  __int64 v61; // rcx
  char v62; // al
  int v63; // r9d
  volatile signed __int32 **v64; // r8
  volatile signed __int32 *v65; // [rsp+30h] [rbp-98h]
  __int64 v66; // [rsp+38h] [rbp-90h]
  _QWORD *v67; // [rsp+40h] [rbp-88h]
  struct _KPRCB *i; // [rsp+48h] [rbp-80h]
  _QWORD *v69; // [rsp+50h] [rbp-78h]
  struct _KPRCB *v70; // [rsp+50h] [rbp-78h]
  unsigned int v71; // [rsp+58h] [rbp-70h]
  volatile signed __int32 *v72; // [rsp+60h] [rbp-68h]
  _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  volatile signed __int32 *v74; // [rsp+78h] [rbp-50h]
  _QWORD *v75; // [rsp+80h] [rbp-48h]
  char v76; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]
  int v78; // [rsp+D0h] [rbp+8h] BYREF
  int v79; // [rsp+E8h] [rbp+20h]

  v5 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v6 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v6;
  v7 = v6 >> 3;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(BugCheckParameter1 + 56);
    v9 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( (v8 & 2) != 0 )
    {
      v9 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v9 & 3) != 0 )
    {
      goto LABEL_13;
    }
    if ( v9 )
    {
      if ( (v8 & 1) != 0 )
      {
        PsBoostThreadIoEx(v9, 1, 0, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 1444));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v9);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v10 = 0LL;
    v11 = *(_DWORD *)(BugCheckParameter1 + 72);
    v71 = *(_DWORD *)(BugCheckParameter1 + 68);
    if ( v11 )
    {
      v44 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v67 = v44;
      v45 = *(_DWORD *)(BugCheckParameter1 + 64) - 1;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      v13 = v11 + v45;
    }
    else
    {
      v12 = *(_DWORD *)(BugCheckParameter1 + 76);
      v67 = 0LL;
      if ( v12 )
      {
        v36 = *(_QWORD **)(BugCheckParameter1 + 40);
        if ( v36 )
        {
          if ( (_QWORD *)*v36 == v36 )
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
          }
          else
          {
            *(_QWORD *)(BugCheckParameter1 + 40) = *v36;
            v46 = *v36;
            v47 = (_QWORD *)v36[1];
            if ( *(_QWORD **)(*v36 + 8LL) != v36 || (_QWORD *)*v47 != v36 )
LABEL_42:
              __fastfail(3u);
            *v47 = v46;
            *(_QWORD *)(v46 + 8) = v47;
          }
          v10 = v36[2];
          v36[1] = v36;
          *v36 = v36;
          v12 = *(_DWORD *)(BugCheckParameter1 + 76);
          v67 = v36;
        }
        v37 = v12 - 1;
        v38 = *(_DWORD *)(BugCheckParameter1 + 64) - 1;
        *(_DWORD *)(BugCheckParameter1 + 76) = v37;
        v13 = v38 + 1;
      }
      else
      {
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
        v13 = 0;
      }
    }
    *(_DWORD *)(BugCheckParameter1 + 64) = v13;
    if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
      *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
    v14 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
    v79 = v14;
    if ( v10 )
    {
      v39 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
      *(_QWORD *)(BugCheckParameter1 + 48) = v10;
      *(_DWORD *)(BugCheckParameter1 + 56) = v39 | 8;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
      goto LABEL_24;
    }
    _m_prefetchw(a3);
    v15 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
      {
LABEL_24:
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v52 = SchedulerAssist[6] - 1;
            SchedulerAssist[6] = v52;
            if ( !v52 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        result = (unsigned int)KiIrqlFlags;
        v19 = *((unsigned __int8 *)a3 + 16);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v19 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v53 = KeGetCurrentPrcb();
              v54 = v53->SchedulerAssist;
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
              v42 = ((unsigned int)result & v54[5]) == 0;
              v54[5] &= result;
              if ( v42 )
                result = KiRemoveSystemWorkPriorityKick(v53);
            }
          }
        }
        __writecr8(v19);
        v20 = 1;
        if ( !v67 )
          goto LABEL_27;
        CurrentIrql = KeGetCurrentIrql();
        v76 = CurrentIrql;
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v40 = KeGetCurrentPrcb()->SchedulerAssist;
          v40[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        v28 = KeGetCurrentPrcb();
        v29 = v67;
        for ( i = v28; ; v28 = i )
        {
          v30 = v29;
          v69 = v29;
          v75 = (_QWORD *)*v29;
          v31 = (volatile signed __int32 *)(v29 + 3);
          v78 = 0;
          v65 = v31;
          if ( _interlockedbittestandset(v31, 7u) )
          {
            v48 = v31;
            do
            {
              do
                KeYieldProcessorEx(&v78);
              while ( (*v48 & 0x80u) != 0 );
            }
            while ( _interlockedbittestandset(v48, 7u) );
            v14 = v79;
            v31 = v65;
            v28 = i;
            v30 = v69;
          }
          *((_DWORD *)v30 + 7) = 1;
          v32 = (volatile signed __int32 *)*((_QWORD *)v31 + 1);
          if ( v32 != v31 + 2 )
            break;
LABEL_55:
          _InterlockedAnd(v31, 0xFFFFFF7F);
          v29 = v75;
          if ( v75 == v67 )
          {
            v43 = KiRemoveBoostThread(i, i->CurrentThread);
            if ( v14 )
            {
              v20 = 2;
              if ( v43 > (char)v14 )
                v14 = v43;
            }
            if ( v10 && v20 == 1 )
              v14 = 1;
            result = KiExitDispatcher((_DWORD)i, 0, v20, v14, v76);
LABEL_27:
            v21 = v71;
            v22 = 65570;
            v7 = 0;
            goto LABEL_28;
          }
        }
        while ( 1 )
        {
          v33 = v32;
          v72 = v32;
          v34 = *(_QWORD *)v32;
          v74 = (volatile signed __int32 *)v34;
          v35 = (volatile signed __int32 **)*((_QWORD *)v33 + 1);
          if ( *(volatile signed __int32 **)(v34 + 8) != v33 || *v35 != v33 )
            goto LABEL_42;
          *v35 = (volatile signed __int32 *)v34;
          *(_QWORD *)(v34 + 8) = v35;
          v41 = *((_BYTE *)v33 + 16);
          if ( v41 != 1 )
            break;
          v42 = (unsigned __int8)KiTryUnwaitThread(v28, v33, *((unsigned __int16 *)v33 + 9), 0LL) == 0;
          v31 = v65;
          if ( !v42 )
          {
            v42 = (*((_DWORD *)v65 + 1))-- == 1;
            if ( v42 )
              goto LABEL_55;
          }
LABEL_76:
          v32 = v74;
          v28 = i;
          if ( v74 == v31 + 2 )
            goto LABEL_55;
        }
        if ( v41 != 2 )
        {
          if ( v41 == 4 )
          {
            *((_BYTE *)v33 + 17) = 5;
            *((_DWORD *)v31 + 1) = 0;
            KeInsertQueueDpc(*((PRKDPC *)v33 + 3), (PVOID)v31, (PVOID)v33);
          }
          else
          {
            KiTryUnwaitThread(v28, v33, 256LL, 0LL);
          }
          v31 = v65;
          goto LABEL_76;
        }
        *((_BYTE *)v33 + 17) = 5;
        v66 = *((_QWORD *)v33 + 3);
        *(_QWORD *)v33 = 0LL;
        v55 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
        {
          v56 = KeGetCurrentPrcb()->SchedulerAssist;
          v56[5] |= (-1 << (v55 + 1)) & 4;
        }
        v70 = KeGetCurrentPrcb();
        CurrentThread = v70->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          IsThreadRunning = KeIsThreadRunning(v70->CurrentThread);
          EtwTraceEnqueueWork(v58, v59, IsThreadRunning);
        }
        KiAcquireKobjectLockSafe(v66);
        v60 = (_QWORD *)(v66 + 8);
        v61 = v66;
        if ( (_QWORD *)*v60 != v60
          && *(_DWORD *)(v66 + 40) < *(_DWORD *)(v66 + 44)
          && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v66 || CurrentThread->WaitReason != 15) )
        {
          v62 = KiWakeQueueWaiter(v70, v66, v72);
          v61 = v66;
          if ( v62 )
          {
            *(_QWORD *)v72 = 0LL;
            goto LABEL_119;
          }
          v60 = (_QWORD *)(v66 + 8);
        }
        v63 = *(_DWORD *)(v61 + 4);
        *(_DWORD *)(v61 + 4) = v63 + 1;
        v64 = *(volatile signed __int32 ***)(v61 + 32);
        if ( *v64 != (volatile signed __int32 *)(v61 + 24) )
          goto LABEL_42;
        *(_QWORD *)v72 = v61 + 24;
        *((_QWORD *)v72 + 1) = v64;
        *v64 = v72;
        *(_QWORD *)(v61 + 32) = v72;
        if ( !v63 && (_QWORD *)*v60 != v60 )
        {
          KiWakeOtherQueueWaiters(v70, v61);
          v61 = v66;
        }
LABEL_119:
        _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
        v31 = v65;
        v42 = (*((_DWORD *)v65 + 1))-- == 1;
        if ( v42 )
          goto LABEL_55;
        goto LABEL_76;
      }
      v15 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
    goto LABEL_24;
  }
  v22 = 65586;
  v21 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v23 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_34;
      v23 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
  }
LABEL_34:
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v49 = v25[6] - 1;
      v25[6] = v49;
      if ( !v49 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v26 = *((unsigned __int8 *)a3 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v42 = ((unsigned int)result & v51[5]) == 0;
        v51[5] &= result;
        if ( v42 )
          result = KiRemoveSystemWorkPriorityKick(v50);
      }
    }
  }
  __writecr8(v26);
LABEL_28:
  __incgsdword(0x8A6Cu);
  if ( v5 )
    return PerfLogExecutiveResourceRelease(v22, BugCheckParameter1, v7, v21);
  return result;
}
