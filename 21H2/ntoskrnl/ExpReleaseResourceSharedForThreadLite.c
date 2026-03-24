/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14029B1A0 (ExReleaseResourceForThreadLite.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14034D070 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     KiWakeOtherQueueWaiters @ 0x140243310 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x14024AED0 (KiRemoveBoostThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14024C4F0 (KiWakeQueueWaiter.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KiTryUnwaitThread @ 0x140342820 (KiTryUnwaitThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x140343540 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     PsBoostThreadIoEx @ 0x14034D800 (PsBoostThreadIoEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x140513054 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A77C0 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405AAF48 (PerfLogExecutiveResourceRelease.c)
 */

char __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  bool v7; // r13
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // esi
  unsigned __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  bool v18; // zf
  unsigned int v19; // r14d
  __int64 v20; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  unsigned __int64 v23; // rbx
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  unsigned int v28; // esi
  __int64 v29; // rax
  ULONG_PTR v30; // rsi
  unsigned __int64 v31; // r10
  __int64 v32; // rbx
  __int64 v33; // r11
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  __int64 v38; // r8
  struct _KPRCB *v39; // r12
  _QWORD *v40; // rax
  _QWORD *v41; // r15
  __int64 *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rdx
  __int64 **v45; // rcx
  int v46; // eax
  __int64 v47; // rax
  struct _KPRCB *v48; // rcx
  _DWORD *v49; // rdx
  unsigned __int64 v50; // r15
  char v51; // al
  char v52; // al
  int v53; // eax
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  int v58; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v60; // r10
  _DWORD *v61; // r9
  int v62; // eax
  struct _KPRCB *v63; // rax
  unsigned __int8 v64; // cl
  _DWORD *v65; // r9
  __int64 CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v68; // rdx
  __int64 v69; // r9
  __int64 v70; // r9
  _QWORD *v71; // r10
  __int64 v72; // rcx
  char v73; // al
  int v74; // r9d
  __int64 **v75; // r8
  __int64 v77; // [rsp+30h] [rbp-88h]
  _QWORD *v78; // [rsp+38h] [rbp-80h]
  __int64 *v79; // [rsp+40h] [rbp-78h]
  __int64 v80; // [rsp+48h] [rbp-70h]
  struct _KPRCB *v81; // [rsp+58h] [rbp-60h]
  __int64 v82; // [rsp+60h] [rbp-58h]
  __int64 *v83; // [rsp+68h] [rbp-50h]
  unsigned __int8 v84; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v86; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v87; // [rsp+C8h] [rbp+10h]
  _QWORD *v88; // [rsp+D8h] [rbp+20h]

  v4 = (_QWORD *)a3;
  v5 = 0LL;
  v88 = 0LL;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v8 = 0;
  else
    v8 = *(unsigned __int8 *)(BugCheckParameter2 + 1032);
  v9 = *(_QWORD *)(BugCheckParameter1 + 48);
  v10 = BugCheckParameter1 + 48;
  if ( v9 != BugCheckParameter2 )
  {
    a3 = BugCheckParameter1 + 48;
    a4 = v9 != 0;
    if ( v9 )
      a3 = 0LL;
    if ( !v8
      || (v29 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v8 >= *(_DWORD *)(v29 + 8)
      || (v10 = v29 + 16LL * v8, *(_QWORD *)v10 != BugCheckParameter2) )
    {
      v30 = *(_QWORD *)(BugCheckParameter1 + 16);
      v31 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v30 || (v10 = v30 + 16, a4 >= v31) )
LABEL_97:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v30, 2uLL);
      while ( 1 )
      {
        v32 = a3;
        v33 = a3;
        if ( *(_QWORD *)v10 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v10 )
        {
          if ( ++a4 == v31 )
            goto LABEL_97;
        }
        else
        {
          a3 = v10;
          if ( v33 )
            a3 = v32;
        }
        v10 += 16LL;
        if ( v10 == v30 + 16LL * *(unsigned int *)(v30 + 8) )
          goto LABEL_97;
      }
      v5 = v88;
      KeGetCurrentThread()->ResourceIndex = (__int64)(v10 - v30) >> 4;
    }
  }
  v11 = *(_DWORD *)(v10 + 8) & 7 | (8 * (*(_DWORD *)(v10 + 8) >> 3) - 8);
  *(_DWORD *)(v10 + 8) = v11;
  if ( v11 < 8 )
  {
    v12 = *(_QWORD *)v10;
    if ( (v11 & 2) != 0 )
    {
      v12 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    else if ( (v12 & 3) != 0 )
    {
      goto LABEL_14;
    }
    if ( v12 )
    {
      if ( (v11 & 1) != 0 )
      {
        LOBYTE(BugCheckParameter2) = 1;
        PsBoostThreadIoEx(v12, BugCheckParameter2, 0LL, 0LL);
        *(_DWORD *)(v10 + 8) &= ~1u;
        v13 = *(_DWORD *)(v10 + 8);
      }
      else
      {
        LOBYTE(v13) = v11;
      }
      if ( (v13 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 1364));
        *(_DWORD *)(v10 + 8) &= ~4u;
        v13 = *(_DWORD *)(v10 + 8);
        v5 = v88;
      }
      if ( (v13 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v12);
        *(_DWORD *)(v10 + 8) &= ~2u;
      }
    }
LABEL_14:
    v14 = 0LL;
    *(_QWORD *)v10 = 0LL;
    v15 = 0LL;
    v87 = *(_DWORD *)(BugCheckParameter1 + 68);
    v80 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
    {
LABEL_17:
      v17 = 0LL;
      goto LABEL_18;
    }
    v16 = *(_DWORD *)(BugCheckParameter1 + 76);
    if ( !v16 )
    {
      if ( !*(_DWORD *)(BugCheckParameter1 + 72) )
        goto LABEL_17;
      v57 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v17 = *(unsigned int *)(BugCheckParameter1 + 72);
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      v88 = v57;
LABEL_18:
      v18 = (_DWORD)v17 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v17 - 1;
      if ( v18 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v19 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v15 )
      {
        v46 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
        *(_QWORD *)(BugCheckParameter1 + 48) = v15;
        *(_DWORD *)(BugCheckParameter1 + 56) = v46 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
        v14 = 0LL;
        goto LABEL_28;
      }
      _m_prefetchw(v4);
      v20 = *v4;
      if ( !*v4 )
      {
        if ( v4 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)v4[1], 0LL, (signed __int64)v4) )
        {
LABEL_28:
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v58 = *(_DWORD *)(SchedulerAssist + 24) - 1;
              *(_DWORD *)(SchedulerAssist + 24) = v58;
              if ( !v58 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v14 = 0LL;
              }
            }
          }
          v23 = *((unsigned __int8 *)v4 + 16);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v23 <= 0xFu && CurrentIrql >= 2u )
              {
                v60 = KeGetCurrentPrcb();
                SchedulerAssist = -1LL << ((unsigned __int8)v23 + 1);
                v61 = v60->SchedulerAssist;
                v62 = ~(unsigned __int16)SchedulerAssist;
                v18 = (v62 & v61[5]) == 0;
                v61[5] &= v62;
                if ( v18 )
                  KiRemoveSystemWorkPriorityKick(v60);
                v14 = 0LL;
              }
            }
          }
          __writecr8(v23);
          LOBYTE(v24) = v80 != 0;
          v25 = 1;
          if ( !v88 )
            goto LABEL_31;
          v37 = KeGetCurrentIrql();
          v84 = v37;
          v38 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
          {
            v63 = KeGetCurrentPrcb();
            SchedulerAssist = (-1LL << (v37 + 1)) & 4;
            *((_DWORD *)v63->SchedulerAssist + 5) |= SchedulerAssist;
            v38 = 2LL;
            v14 = 0LL;
          }
          v39 = KeGetCurrentPrcb();
          v40 = v88;
          while ( 1 )
          {
            v41 = v40;
            v86 = 0;
            v40 = (_QWORD *)*v40;
            v78 = v40;
            if ( _interlockedbittestandset((volatile signed __int32 *)v41 + 6, 7u) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v86, SchedulerAssist, v38, v14);
                while ( (*((_DWORD *)v41 + 6) & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset((volatile signed __int32 *)v41 + 6, 7u) );
              v40 = v78;
              v38 = 2LL;
            }
            SchedulerAssist = (__int64)(v41 + 4);
            *((_DWORD *)v41 + 7) = 1;
            v42 = (__int64 *)v41[4];
            if ( v42 != v41 + 4 )
              break;
LABEL_78:
            _InterlockedAnd((volatile signed __int32 *)v41 + 6, 0xFFFFFF7F);
            if ( v40 == v88 )
            {
              v52 = KiRemoveBoostThread((__int64)v39, (__int64)v39->CurrentThread);
              if ( v19 )
              {
                v25 = 2;
                if ( v52 > (char)v19 )
                  v19 = v52;
              }
              if ( ((2 * (v80 != 0) + 1) & 2) != 0 && v25 == 1 )
                v19 = 1;
              LOBYTE(v24) = KiExitDispatcher((__int64)v39, 0LL, v25, v19, v84);
LABEL_31:
              v26 = v87;
              v27 = 65602;
              v28 = 0;
              goto LABEL_32;
            }
            v38 = 2LL;
            v14 = 0LL;
          }
          while ( 1 )
          {
            v43 = (__int64 *)*v42;
            v44 = (__int64)v42;
            v79 = v42;
            v45 = (__int64 **)v42[1];
            v83 = v43;
            if ( v43[1] != v44 || *v45 != (__int64 *)v44 )
              goto LABEL_64;
            *v45 = v43;
            v43[1] = (__int64)v45;
            v51 = *(_BYTE *)(v44 + 16);
            if ( v51 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)v39, v44, *(unsigned __int16 *)(v44 + 18), 0LL) )
              {
                v18 = (*((_DWORD *)v41 + 7))-- == 1;
                if ( v18 )
                {
LABEL_77:
                  v40 = v78;
                  goto LABEL_78;
                }
              }
            }
            else
            {
              if ( v51 == 2 )
              {
                *(_BYTE *)(v44 + 17) = 5;
                v77 = *(_QWORD *)(v44 + 24);
                *(_QWORD *)v44 = 0LL;
                v64 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v64 <= 0xFu )
                {
                  v65 = KeGetCurrentPrcb()->SchedulerAssist;
                  v38 = (unsigned int)(-1LL << (v64 + 1)) & 4 | v65[5];
                  v44 = (__int64)v79;
                  v65[5] = v38;
                }
                v81 = KeGetCurrentPrcb();
                CurrentThread = (__int64)v81->CurrentThread;
                v82 = CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(CurrentThread);
                  EtwTraceEnqueueWork(v69, v68, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v77, v44, v38, CurrentThread);
                v71 = (_QWORD *)(v77 + 8);
                v72 = v77;
                if ( (_QWORD *)*v71 == v71
                  || *(_DWORD *)(v77 + 40) >= *(_DWORD *)(v77 + 44)
                  || *(_QWORD *)(v82 + 232) == v77 && *(_BYTE *)(v82 + 643) == 15 )
                {
LABEL_138:
                  v74 = *(_DWORD *)(v72 + 4);
                  SchedulerAssist = v72 + 24;
                  *(_DWORD *)(v72 + 4) = v74 + 1;
                  v75 = *(__int64 ***)(v72 + 32);
                  if ( *v75 != (__int64 *)(v72 + 24) )
                    goto LABEL_64;
                  *v79 = SchedulerAssist;
                  v79[1] = (__int64)v75;
                  *v75 = v79;
                  *(_QWORD *)(v72 + 32) = v79;
                  if ( !v74 && (_QWORD *)*v71 != v71 )
                  {
                    KiWakeOtherQueueWaiters((__int64)v81, v72);
                    v72 = v77;
                  }
                }
                else
                {
                  v73 = KiWakeQueueWaiter((__int64)v81, v77, (__int64)v79, v70);
                  v72 = v77;
                  if ( !v73 )
                  {
                    v71 = (_QWORD *)(v77 + 8);
                    goto LABEL_138;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v72, 0xFFFFFF7F);
                v18 = (*((_DWORD *)v41 + 7))-- == 1;
                if ( v18 )
                  goto LABEL_77;
                goto LABEL_145;
              }
              KiTryUnwaitThread((__int64)v39, v44, 256LL, 0LL);
            }
LABEL_145:
            v42 = v83;
            v38 = 2LL;
            if ( v83 == v41 + 4 )
              goto LABEL_77;
          }
        }
        v20 = KxWaitForLockChainValid(v4, v17, 1LL, 0LL);
        v14 = 0LL;
      }
      *v4 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v20 + 8), 1uLL);
      goto LABEL_28;
    }
    v34 = *(_QWORD **)(BugCheckParameter1 + 40);
    if ( !v34 )
    {
LABEL_58:
      v80 = v15;
      *(_DWORD *)(BugCheckParameter1 + 76) = v16 - 1;
      v17 = 1LL;
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
    v15 = v34[2];
    if ( !v5 )
    {
      v34[1] = v34;
      *v34 = v34;
LABEL_57:
      v16 = *(_DWORD *)(BugCheckParameter1 + 76);
      v88 = v34;
      goto LABEL_58;
    }
    v56 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v56 == v5 )
    {
      *v34 = v5;
      v34[1] = v56;
      *v56 = v34;
      v5[1] = v34;
      goto LABEL_57;
    }
LABEL_64:
    __fastfail(3u);
  }
  v26 = *(_DWORD *)(BugCheckParameter1 + 68);
  v27 = 65618;
  v28 = v11 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
  }
  else
  {
    _m_prefetchw(v4);
    v47 = *v4;
    if ( !*v4 )
    {
      if ( v4 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)v4[1], 0LL, (signed __int64)v4) )
        goto LABEL_68;
      v47 = KxWaitForLockChainValid(v4, BugCheckParameter2, a3, a4);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v47 + 8), 1uLL);
  }
LABEL_68:
  v48 = KeGetCurrentPrcb();
  v49 = v48->SchedulerAssist;
  if ( v49 )
  {
    if ( v48->NestingLevel <= 1u )
    {
      v53 = v49[6] - 1;
      v49[6] = v53;
      if ( !v53 )
        KiRemoveSystemWorkPriorityKick(v48);
    }
  }
  LOBYTE(v24) = KiIrqlFlags;
  v50 = *((unsigned __int8 *)v4 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v24) = KeGetCurrentIrql();
      if ( (unsigned __int8)v24 <= 0xFu && (unsigned __int8)v50 <= 0xFu && (unsigned __int8)v24 >= 2u )
      {
        v54 = KeGetCurrentPrcb();
        v55 = v54->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
        v18 = (v24 & v55[5]) == 0;
        v55[5] &= v24;
        if ( v18 )
          LOBYTE(v24) = KiRemoveSystemWorkPriorityKick(v54);
      }
    }
  }
  __writecr8(v50);
LABEL_32:
  __incgsdword(0x8670u);
  if ( v7 )
    LOBYTE(v24) = PerfLogExecutiveResourceRelease(v27, BugCheckParameter1, v28, v26);
  return v24;
}
