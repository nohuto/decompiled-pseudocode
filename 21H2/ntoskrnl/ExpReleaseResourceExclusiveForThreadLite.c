/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140212B30 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140357DC0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x1402E7B60 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1402EF720 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402F0D40 (KiWakeQueueWaiter.c)
 *     KiTryUnwaitThread @ 0x14034D570 (KiTryUnwaitThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A79F0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AB178 (PerfLogExecutiveResourceRelease.c)
 */

char __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3)
{
  _QWORD *v3; // r14
  bool v5; // r15
  unsigned int v6; // edi
  unsigned int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  int v12; // edx
  unsigned int v13; // r13d
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v17; // rdi
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // r13d
  unsigned int v21; // ebp
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // cl
  __int64 v27; // r9
  struct _KPRCB *v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  char v34; // al
  bool v35; // zf
  char v36; // al
  __int64 *v37; // rax
  __int64 *v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 **v41; // rcx
  __int64 *v42; // r13
  int v43; // eax
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v48; // r10
  _DWORD *v49; // r9
  int v50; // eax
  _DWORD *v51; // r9
  unsigned __int8 v52; // cl
  _DWORD *v53; // r9
  __int64 CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r9
  _QWORD *v59; // r10
  __int64 v60; // rcx
  char v61; // al
  int v62; // r9d
  __int64 v64; // [rsp+30h] [rbp-A8h]
  __int64 *v65; // [rsp+38h] [rbp-A0h]
  __int64 *v66; // [rsp+40h] [rbp-98h]
  __int64 v67; // [rsp+48h] [rbp-90h]
  unsigned int v68; // [rsp+50h] [rbp-88h]
  _QWORD *v69; // [rsp+58h] [rbp-80h]
  __int64 *v70; // [rsp+60h] [rbp-78h]
  __int64 v71; // [rsp+68h] [rbp-70h]
  struct _KPRCB *v72; // [rsp+78h] [rbp-60h]
  __int64 v73; // [rsp+80h] [rbp-58h]
  __int64 v74; // [rsp+88h] [rbp-50h]
  unsigned __int8 v75; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v77; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v78; // [rsp+F8h] [rbp+20h]

  v3 = (_QWORD *)a3;
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
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIoEx(v9, BugCheckParameter2, 0LL, 0LL);
        *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
        v8 = *(_DWORD *)(BugCheckParameter1 + 56);
      }
      if ( (v8 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v9 + 1364));
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
    v10 = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
    v68 = *(_DWORD *)(BugCheckParameter1 + 68);
    v71 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v37 = *(__int64 **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      a3 = *(unsigned int *)(BugCheckParameter1 + 72);
      v66 = v37;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !(_DWORD)a3 )
        goto LABEL_16;
    }
    else
    {
      v11 = *(_DWORD *)(BugCheckParameter1 + 76);
      v66 = 0LL;
      if ( !v11 )
      {
        *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
LABEL_16:
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
        v12 = 0;
LABEL_17:
        *(_DWORD *)(BugCheckParameter1 + 64) = v12;
        if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
          *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
        v13 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
        v78 = v13;
        if ( v10 )
        {
          v39 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v10;
          *(_DWORD *)(BugCheckParameter1 + 56) = v39 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v3, retaddr);
          goto LABEL_25;
        }
        _m_prefetchw(v3);
        v14 = *v3;
        if ( !*v3 )
        {
          if ( v3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)v3[1], 0LL, (signed __int64)v3) )
          {
LABEL_25:
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v46 = SchedulerAssist[6] - 1;
                SchedulerAssist[6] = v46;
                if ( !v46 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            v17 = *((unsigned __int8 *)v3 + 16);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v17 <= 0xFu && CurrentIrql >= 2u )
                {
                  v48 = KeGetCurrentPrcb();
                  v49 = v48->SchedulerAssist;
                  v50 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
                  v35 = (v50 & v49[5]) == 0;
                  a3 = (unsigned int)v50 & v49[5];
                  v49[5] = a3;
                  if ( v35 )
                    KiRemoveSystemWorkPriorityKick(v48);
                }
              }
            }
            __writecr8(v17);
            LOBYTE(v18) = v71 != 0;
            v19 = 1;
            if ( !v66 )
              goto LABEL_28;
            v26 = KeGetCurrentIrql();
            v75 = v26;
            v27 = 2LL;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
            {
              v51 = KeGetCurrentPrcb()->SchedulerAssist;
              a3 = (-1 << (v26 + 1)) & 4u | v51[5];
              v51[5] = a3;
              v27 = 2LL;
            }
            v28 = KeGetCurrentPrcb();
            v29 = v66;
            v70 = v66;
            v67 = (__int64)v28;
            while ( 1 )
            {
              v77 = 0;
              v65 = v29;
              v30 = *v70;
              v70 = (__int64 *)*v70;
              if ( _interlockedbittestandset((volatile signed __int32 *)v29 + 6, 7u) )
              {
                v42 = v29;
                do
                {
                  do
                    KeYieldProcessorEx(&v77, v30, a3, v27);
                  while ( (*((_DWORD *)v42 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v42 + 6, 7u) );
                v13 = v78;
                v29 = v65;
                v28 = (struct _KPRCB *)v67;
              }
              *((_DWORD *)v29 + 7) = 1;
              a3 = v29[4];
              if ( (__int64 *)a3 != v29 + 4 )
                break;
LABEL_48:
              _InterlockedAnd((volatile signed __int32 *)v29 + 6, 0xFFFFFF7F);
              v29 = v70;
              if ( v70 == v66 )
              {
                v36 = KiRemoveBoostThread(v67, *(_QWORD *)(v67 + 8));
                if ( v13 )
                {
                  v19 = 2;
                  if ( v36 > (char)v13 )
                    v13 = v36;
                }
                if ( ((2 * (v71 != 0) + 1) & 2) != 0 && v19 == 1 )
                  v13 = 1;
                LOBYTE(v18) = KiExitDispatcher(v67, 0LL, v19, v13, v75);
LABEL_28:
                v20 = v68;
                v21 = 65570;
                v7 = 0;
                goto LABEL_29;
              }
              v28 = (struct _KPRCB *)v67;
              v27 = 2LL;
            }
            while ( 1 )
            {
              v31 = *(_QWORD *)a3;
              v32 = a3;
              v33 = *(_QWORD *)(a3 + 8);
              v69 = (_QWORD *)v32;
              v74 = v31;
              if ( *(_QWORD *)(v31 + 8) != v32 || *(_QWORD *)v33 != v32 )
                goto LABEL_43;
              *(_QWORD *)v33 = v31;
              *(_QWORD *)(v31 + 8) = v33;
              v34 = *(_BYTE *)(v32 + 16);
              if ( v34 != 1 )
                break;
              v35 = (unsigned __int8)KiTryUnwaitThread((__int64)v28, v32, *(unsigned __int16 *)(v32 + 18), 0LL) == 0;
              v29 = v65;
              if ( !v35 )
              {
                v35 = (*((_DWORD *)v65 + 7))-- == 1;
                if ( v35 )
                  goto LABEL_48;
              }
LABEL_76:
              a3 = v74;
              v28 = (struct _KPRCB *)v67;
              if ( (__int64 *)v74 == v29 + 4 )
                goto LABEL_48;
            }
            if ( v34 != 2 )
            {
              KiTryUnwaitThread((__int64)v28, v32, 256LL, 0LL);
              v29 = v65;
              goto LABEL_76;
            }
            *(_BYTE *)(v32 + 17) = 5;
            v64 = *(_QWORD *)(v32 + 24);
            *(_QWORD *)v32 = 0LL;
            v52 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
            {
              v53 = KeGetCurrentPrcb()->SchedulerAssist;
              v33 = (unsigned int)(-1LL << (v52 + 1)) & 4 | v53[5];
              v53[5] = v33;
            }
            v72 = KeGetCurrentPrcb();
            CurrentThread = (__int64)v72->CurrentThread;
            v73 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v57, v56, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v64, v32, v33, CurrentThread);
            v59 = (_QWORD *)(v64 + 8);
            v60 = v64;
            if ( (_QWORD *)*v59 != v59
              && *(_DWORD *)(v64 + 40) < *(_DWORD *)(v64 + 44)
              && (*(_QWORD *)(v73 + 232) != v64 || *(_BYTE *)(v73 + 643) != 15) )
            {
              v61 = KiWakeQueueWaiter((__int64)v72, v64, (__int64)v69, v58);
              v60 = v64;
              if ( v61 )
                goto LABEL_121;
              v59 = (_QWORD *)(v64 + 8);
            }
            v62 = *(_DWORD *)(v60 + 4);
            *(_DWORD *)(v60 + 4) = v62 + 1;
            a3 = *(_QWORD *)(v60 + 32);
            if ( *(_QWORD *)a3 != v60 + 24 )
              goto LABEL_43;
            *v69 = v60 + 24;
            v69[1] = a3;
            *(_QWORD *)a3 = v69;
            *(_QWORD *)(v60 + 32) = v69;
            if ( !v62 && (_QWORD *)*v59 != v59 )
            {
              KiWakeOtherQueueWaiters((__int64)v72, v60);
              v60 = v64;
            }
LABEL_121:
            _InterlockedAnd((volatile signed __int32 *)v60, 0xFFFFFF7F);
            v29 = v65;
            v35 = (*((_DWORD *)v65 + 7))-- == 1;
            if ( v35 )
              goto LABEL_48;
            goto LABEL_76;
          }
          v14 = KxWaitForLockChainValid(v3);
        }
        *v3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
        goto LABEL_25;
      }
      v38 = *(__int64 **)(BugCheckParameter1 + 40);
      if ( v38 )
      {
        if ( (__int64 *)*v38 == v38 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *v38;
          v40 = *v38;
          v41 = (__int64 **)v38[1];
          if ( *(__int64 **)(*v38 + 8) != v38 || *v41 != v38 )
LABEL_43:
            __fastfail(3u);
          *v41 = (__int64 *)v40;
          *(_QWORD *)(v40 + 8) = v41;
        }
        v10 = v38[2];
        v38[1] = (__int64)v38;
        *v38 = (__int64)v38;
        v11 = *(_DWORD *)(BugCheckParameter1 + 76);
        v66 = v38;
      }
      v71 = v10;
      *(_DWORD *)(BugCheckParameter1 + 76) = v11 - 1;
      a3 = 1LL;
    }
    v12 = a3 + *(_DWORD *)(BugCheckParameter1 + 64) - 1;
    goto LABEL_17;
  }
  v21 = 65586;
  v20 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw((const void *)a3);
    v22 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      if ( a3 == _InterlockedCompareExchange64(*(volatile signed __int64 **)(a3 + 8), 0LL, a3) )
        goto LABEL_35;
      v22 = KxWaitForLockChainValid((__int64 *)a3);
    }
    *v3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
  }
LABEL_35:
  v23 = KeGetCurrentPrcb();
  v24 = v23->SchedulerAssist;
  if ( v24 )
  {
    if ( v23->NestingLevel <= 1u )
    {
      v43 = v24[6] - 1;
      v24[6] = v43;
      if ( !v43 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
  }
  LOBYTE(v18) = KiIrqlFlags;
  v25 = *((unsigned __int8 *)v3 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v18) = KeGetCurrentIrql();
      if ( (unsigned __int8)v18 <= 0xFu && (unsigned __int8)v25 <= 0xFu && (unsigned __int8)v18 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v25 + 1));
        v35 = (v18 & v45[5]) == 0;
        v45[5] &= v18;
        if ( v35 )
          LOBYTE(v18) = KiRemoveSystemWorkPriorityKick(v44);
      }
    }
  }
  __writecr8(v25);
LABEL_29:
  __incgsdword(0x866Cu);
  if ( v5 )
    LOBYTE(v18) = PerfLogExecutiveResourceRelease(v21, BugCheckParameter1, v7, v20);
  return v18;
}
