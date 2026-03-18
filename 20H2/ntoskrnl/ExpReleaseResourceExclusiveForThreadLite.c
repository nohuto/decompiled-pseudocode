/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x140223290
 * Callers:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140223140 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x1402FEF50 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x1402183C0 (KiTryUnwaitThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KiWakeOtherQueueWaiters @ 0x14028CDD0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1402DDFD0 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1402E07D0 (KiWakeQueueWaiter.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140511514 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A5D90 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A953C (PerfLogExecutiveResourceRelease.c)
 */

char __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
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
  int v19; // edi
  unsigned int v20; // r13d
  unsigned int v21; // ebp
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // rcx
  volatile signed __int32 *v28; // rax
  volatile signed __int32 *v29; // r8
  volatile signed __int32 *v30; // rax
  __int64 v31; // rdx
  volatile signed __int32 **v32; // r8
  char v33; // al
  bool v34; // zf
  char v35; // al
  volatile signed __int32 *v36; // rax
  int v37; // r8d
  volatile signed __int32 *v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  volatile signed __int32 **v41; // rcx
  volatile signed __int32 *v42; // r13
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
  unsigned __int8 IsThreadRunning; // al
  __int64 v55; // rdx
  __int64 v56; // r9
  _QWORD *v57; // r10
  __int64 v58; // rcx
  char v59; // al
  int v60; // r9d
  _QWORD *v61; // r8
  __int64 v63; // [rsp+30h] [rbp-A8h]
  volatile signed __int32 *v64; // [rsp+38h] [rbp-A0h]
  volatile signed __int32 *v65; // [rsp+40h] [rbp-98h]
  __int64 i; // [rsp+48h] [rbp-90h]
  unsigned int v67; // [rsp+50h] [rbp-88h]
  _QWORD *v68; // [rsp+58h] [rbp-80h]
  volatile signed __int32 *v69; // [rsp+60h] [rbp-78h]
  __int64 v70; // [rsp+68h] [rbp-70h]
  struct _KPRCB *v71; // [rsp+78h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  volatile signed __int32 *v73; // [rsp+88h] [rbp-50h]
  unsigned __int8 v74; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v76; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v77; // [rsp+F8h] [rbp+20h]

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
    v67 = *(_DWORD *)(BugCheckParameter1 + 68);
    v70 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v36 = *(volatile signed __int32 **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v37 = *(_DWORD *)(BugCheckParameter1 + 72);
      v65 = v36;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !v37 )
        goto LABEL_16;
    }
    else
    {
      v11 = *(_DWORD *)(BugCheckParameter1 + 76);
      v65 = 0LL;
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
        v77 = v13;
        if ( v10 )
        {
          v39 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v10;
          *(_DWORD *)(BugCheckParameter1 + 56) = v39 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
          goto LABEL_25;
        }
        _m_prefetchw(a3);
        v14 = *a3;
        if ( !*a3 )
        {
          if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
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
            v17 = *((unsigned __int8 *)a3 + 16);
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
                  v34 = (v50 & v49[5]) == 0;
                  v49[5] &= v50;
                  if ( v34 )
                    KiRemoveSystemWorkPriorityKick(v48);
                }
              }
            }
            __writecr8(v17);
            LOBYTE(v18) = v70 != 0;
            v19 = 1;
            if ( !v65 )
              goto LABEL_28;
            v26 = KeGetCurrentIrql();
            v74 = v26;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
            {
              v51 = KeGetCurrentPrcb()->SchedulerAssist;
              v51[5] |= (-1 << (v26 + 1)) & 4;
            }
            v27 = KeGetCurrentPrcb();
            v28 = v65;
            v69 = v65;
            for ( i = (__int64)v27; ; v27 = (struct _KPRCB *)i )
            {
              v76 = 0;
              v64 = v28;
              v69 = *(volatile signed __int32 **)v69;
              if ( _interlockedbittestandset(v28 + 6, 7u) )
              {
                v42 = v28;
                do
                {
                  do
                    KeYieldProcessorEx(&v76);
                  while ( (*((_DWORD *)v42 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset(v42 + 6, 7u) );
                v13 = v77;
                v28 = v64;
                v27 = (struct _KPRCB *)i;
              }
              *((_DWORD *)v28 + 7) = 1;
              v29 = (volatile signed __int32 *)*((_QWORD *)v28 + 4);
              if ( v29 != v28 + 8 )
                break;
LABEL_48:
              _InterlockedAnd(v28 + 6, 0xFFFFFF7F);
              v28 = v69;
              if ( v69 == v65 )
              {
                v35 = KiRemoveBoostThread(i, *(_QWORD *)(i + 8));
                if ( v13 )
                {
                  v19 = 2;
                  if ( v35 > (char)v13 )
                    v13 = v35;
                }
                if ( ((2 * (v70 != 0) + 1) & 2) != 0 && v19 == 1 )
                  v13 = 1;
                LOBYTE(v18) = KiExitDispatcher(i, 0LL, v19, v13, v74);
LABEL_28:
                v20 = v67;
                v21 = 65570;
                v7 = 0;
                goto LABEL_29;
              }
            }
            while ( 1 )
            {
              v30 = *(volatile signed __int32 **)v29;
              v31 = (__int64)v29;
              v32 = (volatile signed __int32 **)*((_QWORD *)v29 + 1);
              v68 = (_QWORD *)v31;
              v73 = v30;
              if ( *((_QWORD *)v30 + 1) != v31 || *v32 != (volatile signed __int32 *)v31 )
                goto LABEL_43;
              *v32 = v30;
              *((_QWORD *)v30 + 1) = v32;
              v33 = *(_BYTE *)(v31 + 16);
              if ( v33 != 1 )
                break;
              v34 = (unsigned __int8)KiTryUnwaitThread((__int64)v27, v31, *(unsigned __int16 *)(v31 + 18), 0LL) == 0;
              v28 = v64;
              if ( !v34 )
              {
                v34 = (*((_DWORD *)v64 + 7))-- == 1;
                if ( v34 )
                  goto LABEL_48;
              }
LABEL_76:
              v29 = v73;
              v27 = (struct _KPRCB *)i;
              if ( v73 == v28 + 8 )
                goto LABEL_48;
            }
            if ( v33 != 2 )
            {
              KiTryUnwaitThread((__int64)v27, v31, 256LL, 0LL);
              v28 = v64;
              goto LABEL_76;
            }
            *(_BYTE *)(v31 + 17) = 5;
            v63 = *(_QWORD *)(v31 + 24);
            *(_QWORD *)v31 = 0LL;
            v52 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v52 <= 0xFu )
            {
              v53 = KeGetCurrentPrcb()->SchedulerAssist;
              v53[5] |= (-1LL << (v52 + 1)) & 4;
            }
            v71 = KeGetCurrentPrcb();
            CurrentThread = v71->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v71->CurrentThread);
              EtwTraceEnqueueWork(v56, v55, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe(v63);
            v57 = (_QWORD *)(v63 + 8);
            v58 = v63;
            if ( (_QWORD *)*v57 != v57
              && *(_DWORD *)(v63 + 40) < *(_DWORD *)(v63 + 44)
              && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v63 || CurrentThread->WaitReason != 15) )
            {
              v59 = KiWakeQueueWaiter(v71, v63, v68);
              v58 = v63;
              if ( v59 )
                goto LABEL_121;
              v57 = (_QWORD *)(v63 + 8);
            }
            v60 = *(_DWORD *)(v58 + 4);
            *(_DWORD *)(v58 + 4) = v60 + 1;
            v61 = *(_QWORD **)(v58 + 32);
            if ( *v61 != v58 + 24 )
              goto LABEL_43;
            *v68 = v58 + 24;
            v68[1] = v61;
            *v61 = v68;
            *(_QWORD *)(v58 + 32) = v68;
            if ( !v60 && (_QWORD *)*v57 != v57 )
            {
              KiWakeOtherQueueWaiters(v71, v58);
              v58 = v63;
            }
LABEL_121:
            _InterlockedAnd((volatile signed __int32 *)v58, 0xFFFFFF7F);
            v28 = v64;
            v34 = (*((_DWORD *)v64 + 7))-- == 1;
            if ( v34 )
              goto LABEL_48;
            goto LABEL_76;
          }
          v14 = KxWaitForLockChainValid(a3);
        }
        *a3 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
        goto LABEL_25;
      }
      v38 = *(volatile signed __int32 **)(BugCheckParameter1 + 40);
      if ( v38 )
      {
        if ( *(volatile signed __int32 **)v38 == v38 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *(_QWORD *)v38;
          v40 = *(_QWORD *)v38;
          v41 = (volatile signed __int32 **)*((_QWORD *)v38 + 1);
          if ( *(volatile signed __int32 **)(*(_QWORD *)v38 + 8LL) != v38 || *v41 != v38 )
LABEL_43:
            __fastfail(3u);
          *v41 = (volatile signed __int32 *)v40;
          *(_QWORD *)(v40 + 8) = v41;
        }
        v10 = *((_QWORD *)v38 + 2);
        *((_QWORD *)v38 + 1) = v38;
        *(_QWORD *)v38 = v38;
        v11 = *(_DWORD *)(BugCheckParameter1 + 76);
        v65 = v38;
      }
      v70 = v10;
      *(_DWORD *)(BugCheckParameter1 + 76) = v11 - 1;
      v37 = 1;
    }
    v12 = v37 + *(_DWORD *)(BugCheckParameter1 + 64) - 1;
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
    _m_prefetchw(a3);
    v22 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_35;
      v22 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
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
  v25 = *((unsigned __int8 *)a3 + 16);
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
        v34 = (v18 & v45[5]) == 0;
        v45[5] &= v18;
        if ( v34 )
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
