/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310
 * Callers:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14020A1C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x1403283B0 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     KiRemoveBoostThread @ 0x14020E760 (KiRemoveBoostThread.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140280080 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x140282AC0 (KiWakeOtherQueueWaiters.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140288BF0 (KiTryUnwaitThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050DBE4 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A22F0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A5A9C (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        signed __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // r14
  bool v6; // r15
  unsigned int v7; // edi
  unsigned int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v18; // rdi
  int v19; // edi
  __int64 result; // rax
  char v21; // r14
  unsigned int v22; // r13d
  unsigned int v23; // ebp
  __int64 v24; // rax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  unsigned __int64 v27; // rsi
  unsigned __int8 v28; // cl
  struct _KPRCB *v29; // rcx
  volatile signed __int32 *v30; // rax
  volatile signed __int32 *v31; // rdx
  volatile signed __int32 *v32; // r8
  __int64 v33; // rax
  volatile signed __int32 *v34; // rdx
  volatile signed __int32 **v35; // r8
  char v36; // al
  bool v37; // zf
  char v38; // al
  volatile signed __int32 *v39; // rax
  volatile signed __int32 *v40; // r8
  int v41; // eax
  __int64 v42; // rdx
  volatile signed __int32 **v43; // rcx
  volatile signed __int32 *v44; // r13
  int v45; // eax
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  _DWORD *v53; // r9
  unsigned __int8 v54; // cl
  _DWORD *v55; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v57; // rdx
  __int64 v58; // r9
  _QWORD *v59; // r10
  __int64 v60; // rcx
  char v61; // al
  int v62; // r9d
  volatile signed __int32 **v63; // r8
  __int64 v64; // [rsp+30h] [rbp-A8h]
  volatile signed __int32 *v65; // [rsp+38h] [rbp-A0h]
  volatile signed __int32 *v66; // [rsp+40h] [rbp-98h]
  struct _KPRCB *i; // [rsp+48h] [rbp-90h]
  unsigned int v68; // [rsp+50h] [rbp-88h]
  volatile signed __int32 *v69; // [rsp+58h] [rbp-80h]
  volatile signed __int32 *v70; // [rsp+60h] [rbp-78h]
  __int64 v71; // [rsp+68h] [rbp-70h]
  struct _KPRCB *v72; // [rsp+78h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  volatile signed __int32 *v74; // [rsp+88h] [rbp-50h]
  char v75; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v77; // [rsp+E0h] [rbp+8h] BYREF
  int v78; // [rsp+F8h] [rbp+20h]

  v4 = (_QWORD *)a3;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( ((*(_BYTE *)(BugCheckParameter1 + 26) & 1) != 0 || ExpResourceEnforceOwnerTransfer)
    && *(_QWORD *)(BugCheckParameter1 + 48) != BugCheckParameter2 )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, *(_QWORD *)(BugCheckParameter1 + 16), 1uLL);
  }
  v7 = *(_DWORD *)(BugCheckParameter1 + 56) & 7 | (8 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 3) - 8);
  *(_DWORD *)(BugCheckParameter1 + 56) = v7;
  v8 = v7 >> 3;
  if ( !v8 )
  {
    v9 = *(_DWORD *)(BugCheckParameter1 + 56);
    v10 = *(_QWORD *)(BugCheckParameter1 + 48);
    if ( (v9 & 2) != 0 )
    {
      v10 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v10 & 3) != 0 )
    {
      goto LABEL_13;
    }
    if ( v10 )
    {
      if ( (v9 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIoEx(v10, BugCheckParameter2, 0LL, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v9 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v9 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v10 + 1364));
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
        v9 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v9 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v10);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
      }
    }
LABEL_13:
    v11 = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v68 = *(_DWORD *)(BugCheckParameter1 + 68);
    v71 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v39 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      a3 = *(unsigned int *)(BugCheckParameter1 + 72);
      v66 = v39;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !(_DWORD)a3 )
        goto LABEL_16;
    }
    else
    {
      v12 = *(_DWORD *)(BugCheckParameter1 + 76);
      v66 = 0LL;
      if ( !v12 )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        v13 = 0LL;
LABEL_17:
        *(_DWORD *)(BugCheckParameter1 + 64) = v13;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v14 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        v78 = v14;
        if ( v11 )
        {
          v41 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v11;
          *(_DWORD *)(BugCheckParameter1 + 56) = v41 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v4, retaddr, a3, a4);
          goto LABEL_25;
        }
        _m_prefetchw(v4);
        v15 = *v4;
        if ( !*v4 )
        {
          if ( v4 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)v4[1], 0LL, (signed __int64)v4) )
          {
LABEL_25:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v48 = SchedulerAssist[6] - 1;
                SchedulerAssist[6] = v48;
                if ( !v48 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            v18 = *((unsigned __int8 *)v4 + 16);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
                {
                  v50 = KeGetCurrentPrcb();
                  v51 = v50->SchedulerAssist;
                  v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                  v37 = (v52 & v51[5]) == 0;
                  v51[5] &= v52;
                  if ( v37 )
                    KiRemoveSystemWorkPriorityKick(v50);
                }
              }
            }
            __writecr8(v18);
            v19 = 1;
            result = v71 != 0;
            v21 = 2 * result + 1;
            if ( !v66 )
              goto LABEL_28;
            v28 = KeGetCurrentIrql();
            v75 = v28;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 <= 0xFu )
            {
              v53 = KeGetCurrentPrcb()->SchedulerAssist;
              v53[5] |= (-1 << (v28 + 1)) & 4;
            }
            v29 = KeGetCurrentPrcb();
            v30 = v66;
            v70 = v66;
            for ( i = v29; ; v29 = i )
            {
              v77 = 0;
              v65 = v30;
              v31 = *(volatile signed __int32 **)v70;
              v70 = *(volatile signed __int32 **)v70;
              if ( _interlockedbittestandset(v30 + 6, 7u) )
              {
                v44 = v30;
                do
                {
                  do
                    KeYieldProcessorEx(&v77, v31);
                  while ( (*((_DWORD *)v44 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v44 + 6, 7u) );
                v14 = v78;
                v30 = v65;
                v29 = i;
              }
              *((_DWORD *)v30 + 7) = 1;
              v32 = (volatile signed __int32 *)*((_QWORD *)v30 + 4);
              if ( v32 != v30 + 8 )
                break;
LABEL_48:
              _InterlockedAnd(v30 + 6, 0xFFFFFF7F);
              v30 = v70;
              if ( v70 == v66 )
              {
                v38 = KiRemoveBoostThread(i, i->CurrentThread);
                if ( v14 )
                {
                  v19 = 2;
                  if ( v38 > (char)v14 )
                    v14 = v38;
                }
                if ( (v21 & 2) != 0 && v19 == 1 )
                  v14 = 1;
                result = KiExitDispatcher((_DWORD)i, 0, v19, v14, v75);
LABEL_28:
                v22 = v68;
                v23 = 65570;
                v8 = 0;
                goto LABEL_29;
              }
            }
            while ( 1 )
            {
              v33 = *(_QWORD *)v32;
              v34 = v32;
              v35 = (volatile signed __int32 **)*((_QWORD *)v32 + 1);
              v69 = v34;
              v74 = (volatile signed __int32 *)v33;
              if ( *(volatile signed __int32 **)(v33 + 8) != v34 || *v35 != v34 )
                goto LABEL_43;
              *v35 = (volatile signed __int32 *)v33;
              *(_QWORD *)(v33 + 8) = v35;
              v36 = *((_BYTE *)v34 + 16);
              if ( v36 != 1 )
                break;
              v37 = (unsigned __int8)KiTryUnwaitThread(v29, v34, *((unsigned __int16 *)v34 + 9), 0LL) == 0;
              v30 = v65;
              if ( !v37 )
              {
                v37 = (*((_DWORD *)v65 + 7))-- == 1;
                if ( v37 )
                  goto LABEL_48;
              }
LABEL_76:
              v32 = v74;
              v29 = i;
              if ( v74 == v30 + 8 )
                goto LABEL_48;
            }
            if ( v36 != 2 )
            {
              KiTryUnwaitThread(v29, v34, 256LL, 0LL);
              v30 = v65;
              goto LABEL_76;
            }
            *((_BYTE *)v34 + 17) = 5;
            v64 = *((_QWORD *)v34 + 3);
            *(_QWORD *)v34 = 0LL;
            v54 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
            {
              v55 = KeGetCurrentPrcb()->SchedulerAssist;
              v55[5] |= (-1LL << (v54 + 1)) & 4;
            }
            v72 = KeGetCurrentPrcb();
            CurrentThread = v72->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v72->CurrentThread, v34);
              EtwTraceEnqueueWork(v58, v57, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v64);
            v59 = (_QWORD *)(v64 + 8);
            v60 = v64;
            if ( (_QWORD *)*v59 != v59
              && *(_DWORD *)(v64 + 40) < *(_DWORD *)(v64 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v64 || CurrentThread->WaitReason != 15) )
            {
              v61 = KiWakeQueueWaiter(v72, v64, v69);
              v60 = v64;
              if ( v61 )
                goto LABEL_121;
              v59 = (_QWORD *)(v64 + 8);
            }
            v62 = *(_DWORD *)(v60 + 4);
            *(_DWORD *)(v60 + 4) = v62 + 1;
            v63 = *(volatile signed __int32 ***)(v60 + 32);
            if ( *v63 != (volatile signed __int32 *)(v60 + 24) )
              goto LABEL_43;
            *(_QWORD *)v69 = v60 + 24;
            *((_QWORD *)v69 + 1) = v63;
            *v63 = v69;
            *(_QWORD *)(v60 + 32) = v69;
            if ( !v62 && (_QWORD *)*v59 != v59 )
            {
              KiWakeOtherQueueWaiters(v72, v60);
              v60 = v64;
            }
LABEL_121:
            _InterlockedAnd((volatile signed __int32 *)v60, 0xFFFFFF7F);
            v30 = v65;
            v37 = (*((_DWORD *)v65 + 7))-- == 1;
            if ( v37 )
              goto LABEL_48;
            goto LABEL_76;
          }
          v15 = KxWaitForLockChainValid(v4, v13, a3, a4);
        }
        *v4 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
        goto LABEL_25;
      }
      v40 = *(volatile signed __int32 **)(BugCheckParameter1 + 40);
      if ( v40 )
      {
        if ( *(volatile signed __int32 **)v40 == v40 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *(_QWORD *)v40;
          v42 = *(_QWORD *)v40;
          v43 = (volatile signed __int32 **)*((_QWORD *)v40 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v40 + 8LL) != v40 || *v43 != v40 )
LABEL_43:
            __fastfail(3u);
          *v43 = (volatile signed __int32 *)v42;
          *(_QWORD *)(v42 + 8) = v43;
        }
        v11 = *((_QWORD *)v40 + 2);
        *((_QWORD *)v40 + 1) = v40;
        *(_QWORD *)v40 = v40;
        v12 = *(_DWORD *)(BugCheckParameter1 + 76);
        v66 = v40;
      }
      v71 = v11;
      *(_DWORD *)(BugCheckParameter1 + 76) = v12 - 1;
      a3 = 1LL;
    }
    v13 = (unsigned int)(a3 + *(_DWORD *)(BugCheckParameter1 + 64) - 1);
    goto LABEL_17;
  }
  v23 = 65586;
  v22 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr, a3, a4);
  }
  else
  {
    _m_prefetchw((const void *)a3);
    v24 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      if ( a3 == _InterlockedCompareExchange64(*(volatile signed __int64 **)(a3 + 8), 0LL, a3) )
        goto LABEL_35;
      v24 = KxWaitForLockChainValid(a3, BugCheckParameter2, a3, a4);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v24 + 8), 1uLL);
  }
LABEL_35:
  v25 = KeGetCurrentPrcb();
  v26 = v25->SchedulerAssist;
  if ( v26 )
  {
    if ( v25->NestingLevel <= 1u )
    {
      v45 = v26[6] - 1;
      v26[6] = v45;
      if ( !v45 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v27 = *((unsigned __int8 *)v4 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v27 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = v46->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v27 + 1));
        v37 = ((unsigned int)result & v47[5]) == 0;
        v47[5] &= result;
        if ( v37 )
          result = KiRemoveSystemWorkPriorityKick(v46);
      }
    }
  }
  __writecr8(v27);
LABEL_29:
  __incgsdword(0x866Cu);
  if ( v6 )
    return PerfLogExecutiveResourceRelease(v23, BugCheckParameter1, v8, v22);
  return result;
}
