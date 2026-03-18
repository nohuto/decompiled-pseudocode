/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x140221690
 * Callers:
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140223140 (ExReleaseResourceAndLeaveCriticalRegion.c)
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

char __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  bool v6; // r13
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // r14
  unsigned int v10; // esi
  unsigned __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  int v15; // edx
  bool v16; // zf
  unsigned int v17; // r14d
  __int64 v18; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v21; // rbx
  int v22; // eax
  int v23; // ebx
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  unsigned int v26; // esi
  ULONG_PTR v27; // r8
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  ULONG_PTR v30; // rsi
  unsigned __int64 v31; // r10
  ULONG_PTR v32; // rbx
  ULONG_PTR v33; // r11
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r12
  _QWORD *v39; // rax
  _QWORD *v40; // r15
  _QWORD *v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // rcx
  int v45; // eax
  __int64 v46; // rax
  struct _KPRCB *v47; // rcx
  _DWORD *v48; // rdx
  unsigned __int64 v49; // r15
  char v50; // al
  char v51; // al
  int v52; // eax
  struct _KPRCB *v53; // r9
  _DWORD *v54; // r8
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  int v57; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r9
  int v61; // eax
  struct _KPRCB *v62; // rax
  unsigned __int8 v63; // cl
  _DWORD *v64; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v66; // rdx
  __int64 v67; // r9
  _QWORD *v68; // r10
  __int64 v69; // rcx
  char v70; // al
  int v71; // r9d
  _QWORD *v72; // r8
  __int64 v74; // [rsp+30h] [rbp-88h]
  _QWORD *v75; // [rsp+38h] [rbp-80h]
  _QWORD *v76; // [rsp+40h] [rbp-78h]
  __int64 v77; // [rsp+48h] [rbp-70h]
  struct _KPRCB *v78; // [rsp+58h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  _QWORD *v80; // [rsp+68h] [rbp-50h]
  unsigned __int8 v81; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v83; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v84; // [rsp+C8h] [rbp+10h]
  _QWORD *v85; // [rsp+D8h] [rbp+20h]

  v4 = 0LL;
  v85 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v7 = 0;
  else
    v7 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v8 = *(_QWORD *)(BugCheckParameter1 + 48);
  v9 = BugCheckParameter1 + 48;
  if ( v8 != BugCheckParameter2 )
  {
    v27 = BugCheckParameter1 + 48;
    v28 = v8 != 0;
    if ( v8 )
      v27 = 0LL;
    if ( !v7
      || (v29 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v7 >= *(_DWORD *)(v29 + 8)
      || (v9 = v29 + 16LL * v7, *(_QWORD *)v9 != BugCheckParameter2) )
    {
      v30 = *(_QWORD *)(BugCheckParameter1 + 16);
      v31 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v30 || (v9 = v30 + 16, v28 >= v31) )
LABEL_97:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v30, 2uLL);
      while ( 1 )
      {
        v32 = v27;
        v33 = v27;
        if ( *(_QWORD *)v9 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v9 )
        {
          if ( ++v28 == v31 )
            goto LABEL_97;
        }
        else
        {
          v27 = v9;
          if ( v33 )
            v27 = v32;
        }
        v9 += 16LL;
        if ( v9 == v30 + 16LL * *(unsigned int *)(v30 + 8) )
          goto LABEL_97;
      }
      v4 = v85;
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v9 - v30) >> 4;
    }
  }
  v10 = *(_DWORD *)(v9 + 8) & 7 | (8 * (*(_DWORD *)(v9 + 8) >> 3) - 8);
  *(_DWORD *)(v9 + 8) = v10;
  if ( v10 < 8 )
  {
    v11 = *(_QWORD *)v9;
    if ( (v10 & 2) != 0 )
    {
      v11 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v11 & 3) != 0 )
    {
      goto LABEL_14;
    }
    if ( v11 )
    {
      if ( (v10 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIoEx(v11, BugCheckParameter2, 0LL, 0LL);
        *(_DWORD *)(v9 + 8) &= ~1u;
        v12 = *(_DWORD *)(v9 + 8);
      }
      else
      {
        LOBYTE(v12) = v10;
      }
      if ( (v12 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v11 + 1364));
        *(_DWORD *)(v9 + 8) &= ~4u;
        v12 = *(_DWORD *)(v9 + 8);
        v4 = v85;
      }
      if ( (v12 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v11);
        *(_DWORD *)(v9 + 8) &= ~2u;
      }
    }
LABEL_14:
    *(_QWORD *)v9 = 0LL;
    v13 = 0LL;
    v84 = *(_DWORD *)(BugCheckParameter1 + 68);
    v77 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
    {
LABEL_17:
      v15 = 0;
      goto LABEL_18;
    }
    v14 = *(_DWORD *)(BugCheckParameter1 + 76);
    if ( !v14 )
    {
      if ( !*(_DWORD *)(BugCheckParameter1 + 72) )
        goto LABEL_17;
      v56 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v15 = *(_DWORD *)(BugCheckParameter1 + 72);
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      v85 = v56;
LABEL_18:
      v16 = v15 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v15 - 1;
      if ( v16 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v17 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v13 )
      {
        v45 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
        *(_QWORD *)(BugCheckParameter1 + 48) = v13;
        *(_DWORD *)(BugCheckParameter1 + 56) = v45 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
        goto LABEL_28;
      }
      _m_prefetchw(a3);
      v18 = *a3;
      if ( !*a3 )
      {
        if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        {
LABEL_28:
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v57 = SchedulerAssist[6] - 1;
              SchedulerAssist[6] = v57;
              if ( !v57 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v21 = *((unsigned __int8 *)a3 + 16);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
              {
                v59 = KeGetCurrentPrcb();
                v60 = v59->SchedulerAssist;
                v61 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
                v16 = (v61 & v60[5]) == 0;
                v60[5] &= v61;
                if ( v16 )
                  KiRemoveSystemWorkPriorityKick(v59);
              }
            }
          }
          __writecr8(v21);
          LOBYTE(v22) = v77 != 0;
          v23 = 1;
          if ( !v85 )
            goto LABEL_31;
          v37 = KeGetCurrentIrql();
          v81 = v37;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
          {
            v62 = KeGetCurrentPrcb();
            *((_DWORD *)v62->SchedulerAssist + 5) |= (-1 << (v37 + 1)) & 4;
          }
          v38 = KeGetCurrentPrcb();
          v39 = v85;
          while ( 1 )
          {
            v40 = v39;
            v83 = 0;
            v39 = (_QWORD *)*v39;
            v75 = v39;
            if ( _interlockedbittestandset((volatile signed __int32 *)v40 + 6, 7u) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v83);
                while ( (*((_DWORD *)v40 + 6) & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset((volatile signed __int32 *)v40 + 6, 7u) );
              v39 = v75;
            }
            *((_DWORD *)v40 + 7) = 1;
            v41 = (_QWORD *)v40[4];
            if ( v41 != v40 + 4 )
              break;
LABEL_78:
            _InterlockedAnd((volatile signed __int32 *)v40 + 6, 0xFFFFFF7F);
            if ( v39 == v85 )
            {
              v51 = KiRemoveBoostThread(v38, v38->CurrentThread);
              if ( v17 )
              {
                v23 = 2;
                if ( v51 > (char)v17 )
                  v17 = v51;
              }
              if ( ((2 * (v77 != 0) + 1) & 2) != 0 && v23 == 1 )
                v17 = 1;
              LOBYTE(v22) = KiExitDispatcher((__int64)v38, 0LL, v23, v17, v81);
LABEL_31:
              v24 = v84;
              v25 = 65602;
              v26 = 0;
              goto LABEL_32;
            }
          }
          while ( 1 )
          {
            v42 = (_QWORD *)*v41;
            v43 = (__int64)v41;
            v76 = v41;
            v44 = (_QWORD *)v41[1];
            v80 = v42;
            if ( v42[1] != v43 || *v44 != v43 )
              goto LABEL_64;
            *v44 = v42;
            v42[1] = v44;
            v50 = *(_BYTE *)(v43 + 16);
            if ( v50 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)v38, v43, *(unsigned __int16 *)(v43 + 18), 0LL) )
              {
                v16 = (*((_DWORD *)v40 + 7))-- == 1;
                if ( v16 )
                {
LABEL_77:
                  v39 = v75;
                  goto LABEL_78;
                }
              }
            }
            else
            {
              if ( v50 == 2 )
              {
                *(_BYTE *)(v43 + 17) = 5;
                v74 = *(_QWORD *)(v43 + 24);
                *(_QWORD *)v43 = 0LL;
                v63 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v63 <= 0xFu )
                {
                  v64 = KeGetCurrentPrcb()->SchedulerAssist;
                  v64[5] |= (-1LL << (v63 + 1)) & 4;
                }
                v78 = KeGetCurrentPrcb();
                CurrentThread = v78->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v78->CurrentThread);
                  EtwTraceEnqueueWork(v67, v66, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe(v74);
                v68 = (_QWORD *)(v74 + 8);
                v69 = v74;
                if ( (_QWORD *)*v68 == v68
                  || *(_DWORD *)(v74 + 40) >= *(_DWORD *)(v74 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v74 && CurrentThread->WaitReason == 15 )
                {
LABEL_138:
                  v71 = *(_DWORD *)(v69 + 4);
                  *(_DWORD *)(v69 + 4) = v71 + 1;
                  v72 = *(_QWORD **)(v69 + 32);
                  if ( *v72 != v69 + 24 )
                    goto LABEL_64;
                  *v76 = v69 + 24;
                  v76[1] = v72;
                  *v72 = v76;
                  *(_QWORD *)(v69 + 32) = v76;
                  if ( !v71 && (_QWORD *)*v68 != v68 )
                  {
                    KiWakeOtherQueueWaiters(v78, v69);
                    v69 = v74;
                  }
                }
                else
                {
                  v70 = KiWakeQueueWaiter(v78, v74, v76);
                  v69 = v74;
                  if ( !v70 )
                  {
                    v68 = (_QWORD *)(v74 + 8);
                    goto LABEL_138;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
                v16 = (*((_DWORD *)v40 + 7))-- == 1;
                if ( v16 )
                  goto LABEL_77;
                goto LABEL_145;
              }
              KiTryUnwaitThread((__int64)v38, v43, 256LL, 0LL);
            }
LABEL_145:
            v41 = v80;
            if ( v80 == v40 + 4 )
              goto LABEL_77;
          }
        }
        v18 = KxWaitForLockChainValid(a3);
      }
      *a3 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v18 + 8), 1uLL);
      goto LABEL_28;
    }
    v34 = *(_QWORD **)(BugCheckParameter1 + 40);
    if ( !v34 )
    {
LABEL_58:
      v77 = v13;
      *(_DWORD *)(BugCheckParameter1 + 76) = v14 - 1;
      v15 = 1;
      *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
      goto LABEL_18;
    }
    if ( (_QWORD *)*v34 == v34 )
    {
      *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter1 + 40) = *v34;
      v35 = *v34;
      v36 = (_QWORD *)v34[1];
      if ( *(_QWORD **)(*v34 + 8LL) != v34 || (_QWORD *)*v36 != v34 )
        goto LABEL_64;
      *v36 = v35;
      *(_QWORD *)(v35 + 8) = v36;
    }
    v13 = v34[2];
    if ( !v4 )
    {
      v34[1] = v34;
      *v34 = v34;
LABEL_57:
      v14 = *(_DWORD *)(BugCheckParameter1 + 76);
      v85 = v34;
      goto LABEL_58;
    }
    v55 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v55 == v4 )
    {
      *v34 = v4;
      v34[1] = v55;
      *v55 = v34;
      v4[1] = v34;
      goto LABEL_57;
    }
LABEL_64:
    __fastfail(3u);
  }
  v24 = *(_DWORD *)(BugCheckParameter1 + 68);
  v25 = 65618;
  v26 = v10 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v46 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_68;
      v46 = KxWaitForLockChainValid(a3);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v46 + 8), 1uLL);
  }
LABEL_68:
  v47 = KeGetCurrentPrcb();
  v48 = v47->SchedulerAssist;
  if ( v48 )
  {
    if ( v47->NestingLevel <= 1u )
    {
      v52 = v48[6] - 1;
      v48[6] = v52;
      if ( !v52 )
        KiRemoveSystemWorkPriorityKick(v47);
    }
  }
  LOBYTE(v22) = KiIrqlFlags;
  v49 = *((unsigned __int8 *)a3 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v22) = KeGetCurrentIrql();
      if ( (unsigned __int8)v22 <= 0xFu && (unsigned __int8)v49 <= 0xFu && (unsigned __int8)v22 >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v16 = (v22 & v54[5]) == 0;
        v54[5] &= v22;
        if ( v16 )
          LOBYTE(v22) = KiRemoveSystemWorkPriorityKick(v53);
      }
    }
  }
  __writecr8(v49);
LABEL_32:
  __incgsdword(0x8670u);
  if ( v6 )
    LOBYTE(v22) = PerfLogExecutiveResourceRelease(v25, BugCheckParameter1, v26, v24);
  return v22;
}
