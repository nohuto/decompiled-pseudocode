/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x140261630
 * Callers:
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402630E0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceForThreadLite @ 0x1402EEA80 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x140243980 (KiWakeQueueWaiter.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiWakeOtherQueueWaiters @ 0x1402462E0 (KiWakeOtherQueueWaiters.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14024C350 (KiTryUnwaitThread.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     KiRemoveBoostThread @ 0x1402677B0 (KiRemoveBoostThread.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeIsThreadRunning @ 0x14050D594 (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x1405A1C00 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x1405A53AC (PerfLogExecutiveResourceRelease.c)
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
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // eax
  int v16; // edx
  bool v17; // zf
  unsigned int v18; // r14d
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  unsigned __int64 v22; // rbx
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // r14d
  unsigned int v26; // ebx
  unsigned int v27; // esi
  ULONG_PTR v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rax
  ULONG_PTR v31; // rsi
  unsigned __int64 v32; // r10
  ULONG_PTR v33; // rbx
  ULONG_PTR v34; // r11
  _QWORD *v35; // rdx
  __int64 v36; // rcx
  _QWORD *v37; // rax
  unsigned __int8 v38; // cl
  __int64 v39; // r8
  struct _KPRCB *v40; // r12
  _QWORD *v41; // rax
  _QWORD *v42; // r15
  __int64 *v43; // rcx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 **v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  struct _KPRCB *v49; // rcx
  _DWORD *v50; // rdx
  unsigned __int64 v51; // r15
  char v52; // al
  char v53; // al
  int v54; // eax
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  int v59; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v61; // r10
  _DWORD *v62; // r9
  int v63; // eax
  struct _KPRCB *v64; // rax
  unsigned __int8 v65; // cl
  _DWORD *v66; // r9
  __int64 CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v69; // rdx
  __int64 v70; // r9
  _QWORD *v71; // r10
  __int64 v72; // rcx
  char v73; // al
  __int64 v74; // r9
  __int64 **v75; // r8
  __int64 v77; // [rsp+30h] [rbp-88h]
  _QWORD *v78; // [rsp+38h] [rbp-80h]
  __int64 *v79; // [rsp+40h] [rbp-78h]
  __int64 v80; // [rsp+48h] [rbp-70h]
  struct _KPRCB *v81; // [rsp+58h] [rbp-60h]
  __int64 v82; // [rsp+60h] [rbp-58h]
  __int64 *v83; // [rsp+68h] [rbp-50h]
  unsigned __int8 v84; // [rsp+70h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]
  int v86; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v87; // [rsp+C8h] [rbp+10h]
  _QWORD *v88; // [rsp+D8h] [rbp+20h]

  v4 = 0LL;
  v88 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v7 = 0;
  else
    v7 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v8 = *(_QWORD *)(BugCheckParameter1 + 48);
  v9 = BugCheckParameter1 + 48;
  if ( v8 != BugCheckParameter2 )
  {
    v28 = BugCheckParameter1 + 48;
    v29 = v8 != 0;
    if ( v8 )
      v28 = 0LL;
    if ( !v7
      || (v30 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v7 >= *(_DWORD *)(v30 + 8)
      || (v9 = v30 + 16LL * v7, *(_QWORD *)v9 != BugCheckParameter2) )
    {
      v31 = *(_QWORD *)(BugCheckParameter1 + 16);
      v32 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v31 || (v9 = v31 + 16, v29 >= v32) )
LABEL_97:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v31, 2uLL);
      while ( 1 )
      {
        v33 = v28;
        v34 = v28;
        if ( *(_QWORD *)v9 == BugCheckParameter2 )
          break;
        if ( *(_QWORD *)v9 )
        {
          if ( ++v29 == v32 )
            goto LABEL_97;
        }
        else
        {
          v28 = v9;
          if ( v34 )
            v28 = v33;
        }
        v9 += 16LL;
        if ( v9 == v31 + 16LL * *(unsigned int *)(v31 + 8) )
          goto LABEL_97;
      }
      v4 = v88;
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)(v9 - v31) >> 4;
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
        v4 = v88;
      }
      if ( (v12 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v11);
        *(_DWORD *)(v9 + 8) &= ~2u;
      }
    }
LABEL_14:
    v13 = 0LL;
    *(_QWORD *)v9 = 0LL;
    v14 = 0LL;
    v87 = *(_DWORD *)(BugCheckParameter1 + 68);
    v80 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
    {
LABEL_17:
      v16 = 0;
      goto LABEL_18;
    }
    v15 = *(_DWORD *)(BugCheckParameter1 + 76);
    if ( !v15 )
    {
      if ( !*(_DWORD *)(BugCheckParameter1 + 72) )
        goto LABEL_17;
      v58 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v16 = *(_DWORD *)(BugCheckParameter1 + 72);
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      v88 = v58;
LABEL_18:
      v17 = v16 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v16 - 1;
      if ( v17 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v14 )
      {
        v47 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
        *(_QWORD *)(BugCheckParameter1 + 48) = v14;
        *(_DWORD *)(BugCheckParameter1 + 56) = v47 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
        v13 = 0LL;
        goto LABEL_28;
      }
      _m_prefetchw(a3);
      v19 = *a3;
      if ( !*a3 )
      {
        if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        {
LABEL_28:
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
          if ( SchedulerAssist )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v59 = *(_DWORD *)(SchedulerAssist + 24) - 1;
              *(_DWORD *)(SchedulerAssist + 24) = v59;
              if ( !v59 )
              {
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                v13 = 0LL;
              }
            }
          }
          v22 = *((unsigned __int8 *)a3 + 16);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
              {
                v61 = KeGetCurrentPrcb();
                SchedulerAssist = -1LL << ((unsigned __int8)v22 + 1);
                v62 = v61->SchedulerAssist;
                v63 = ~(unsigned __int16)SchedulerAssist;
                v17 = (v63 & v62[5]) == 0;
                v62[5] &= v63;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(v61);
                v13 = 0LL;
              }
            }
          }
          __writecr8(v22);
          LOBYTE(v23) = v80 != 0;
          v24 = 1;
          if ( !v88 )
            goto LABEL_31;
          v38 = KeGetCurrentIrql();
          v84 = v38;
          v39 = 2LL;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v38 <= 0xFu )
          {
            v64 = KeGetCurrentPrcb();
            SchedulerAssist = (-1LL << (v38 + 1)) & 4;
            *((_DWORD *)v64->SchedulerAssist + 5) |= SchedulerAssist;
            v39 = 2LL;
            v13 = 0LL;
          }
          v40 = KeGetCurrentPrcb();
          v41 = v88;
          while ( 1 )
          {
            v42 = v41;
            v86 = 0;
            v41 = (_QWORD *)*v41;
            v78 = v41;
            if ( _interlockedbittestandset((volatile signed __int32 *)v42 + 6, 7u) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v86, SchedulerAssist, v39, v13);
                while ( (*((_DWORD *)v42 + 6) & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset((volatile signed __int32 *)v42 + 6, 7u) );
              v41 = v78;
              v39 = 2LL;
            }
            SchedulerAssist = (__int64)(v42 + 4);
            *((_DWORD *)v42 + 7) = 1;
            v43 = (__int64 *)v42[4];
            if ( v43 != v42 + 4 )
              break;
LABEL_78:
            _InterlockedAnd((volatile signed __int32 *)v42 + 6, 0xFFFFFF7F);
            if ( v41 == v88 )
            {
              v53 = KiRemoveBoostThread(v40, v40->CurrentThread);
              if ( v18 )
              {
                v24 = 2;
                if ( v53 > (char)v18 )
                  v18 = v53;
              }
              if ( ((2 * (v80 != 0) + 1) & 2) != 0 && v24 == 1 )
                v18 = 1;
              LOBYTE(v23) = KiExitDispatcher((__int64)v40, 0LL, v24, v18, v84);
LABEL_31:
              v25 = v87;
              v26 = 65602;
              v27 = 0;
              goto LABEL_32;
            }
            v39 = 2LL;
            v13 = 0LL;
          }
          while ( 1 )
          {
            v44 = (__int64 *)*v43;
            v45 = (__int64)v43;
            v79 = v43;
            v46 = (__int64 **)v43[1];
            v83 = v44;
            if ( v44[1] != v45 || *v46 != (__int64 *)v45 )
              goto LABEL_64;
            *v46 = v44;
            v44[1] = (__int64)v46;
            v52 = *(_BYTE *)(v45 + 16);
            if ( v52 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)v40, v45, *(unsigned __int16 *)(v45 + 18), 0LL) )
              {
                v17 = (*((_DWORD *)v42 + 7))-- == 1;
                if ( v17 )
                {
LABEL_77:
                  v41 = v78;
                  goto LABEL_78;
                }
              }
            }
            else
            {
              if ( v52 == 2 )
              {
                *(_BYTE *)(v45 + 17) = 5;
                v77 = *(_QWORD *)(v45 + 24);
                *(_QWORD *)v45 = 0LL;
                v65 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v65 <= 0xFu )
                {
                  v66 = KeGetCurrentPrcb()->SchedulerAssist;
                  v39 = (unsigned int)(-1LL << (v65 + 1)) & 4 | v66[5];
                  v45 = (__int64)v79;
                  v66[5] = v39;
                }
                v81 = KeGetCurrentPrcb();
                CurrentThread = (__int64)v81->CurrentThread;
                v82 = CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(CurrentThread, v45);
                  EtwTraceEnqueueWork(v70, v69, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe((volatile signed __int32 *)v77, v45, v39, CurrentThread);
                v71 = (_QWORD *)(v77 + 8);
                v72 = v77;
                if ( (_QWORD *)*v71 == v71
                  || *(_DWORD *)(v77 + 40) >= *(_DWORD *)(v77 + 44)
                  || *(_QWORD *)(v82 + 232) == v77 && *(_BYTE *)(v82 + 643) == 15 )
                {
LABEL_138:
                  v74 = *(unsigned int *)(v72 + 4);
                  SchedulerAssist = v72 + 24;
                  *(_DWORD *)(v72 + 4) = v74 + 1;
                  v75 = *(__int64 ***)(v72 + 32);
                  if ( *v75 != (__int64 *)(v72 + 24) )
                    goto LABEL_64;
                  *v79 = SchedulerAssist;
                  v79[1] = (__int64)v75;
                  *v75 = v79;
                  *(_QWORD *)(v72 + 32) = v79;
                  if ( !(_DWORD)v74 && (_QWORD *)*v71 != v71 )
                  {
                    KiWakeOtherQueueWaiters((__int64)v81, v72, (__int64)v75, v74);
                    v72 = v77;
                  }
                }
                else
                {
                  v73 = KiWakeQueueWaiter((__int64)v81, v77, (__int64)v79);
                  v72 = v77;
                  if ( !v73 )
                  {
                    v71 = (_QWORD *)(v77 + 8);
                    goto LABEL_138;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v72, 0xFFFFFF7F);
                v17 = (*((_DWORD *)v42 + 7))-- == 1;
                if ( v17 )
                  goto LABEL_77;
                goto LABEL_145;
              }
              KiTryUnwaitThread((__int64)v40, v45, 256LL, 0LL);
            }
LABEL_145:
            v43 = v83;
            v39 = 2LL;
            if ( v83 == v42 + 4 )
              goto LABEL_77;
          }
        }
        v19 = KxWaitForLockChainValid(a3, v16);
        v13 = 0LL;
      }
      *a3 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
      goto LABEL_28;
    }
    v35 = *(_QWORD **)(BugCheckParameter1 + 40);
    if ( !v35 )
    {
LABEL_58:
      v80 = v14;
      *(_DWORD *)(BugCheckParameter1 + 76) = v15 - 1;
      v16 = 1;
      *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
      goto LABEL_18;
    }
    if ( (_QWORD *)*v35 == v35 )
    {
      *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
    }
    else
    {
      *(_QWORD *)(BugCheckParameter1 + 40) = *v35;
      v36 = *v35;
      v37 = (_QWORD *)v35[1];
      if ( *(_QWORD **)(*v35 + 8LL) != v35 || (_QWORD *)*v37 != v35 )
        goto LABEL_64;
      *v37 = v36;
      *(_QWORD *)(v36 + 8) = v37;
    }
    v14 = v35[2];
    if ( !v4 )
    {
      v35[1] = v35;
      *v35 = v35;
LABEL_57:
      v15 = *(_DWORD *)(BugCheckParameter1 + 76);
      v88 = v35;
      goto LABEL_58;
    }
    v57 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v57 == v4 )
    {
      *v35 = v4;
      v35[1] = v57;
      *v57 = v35;
      v4[1] = v35;
      goto LABEL_57;
    }
LABEL_64:
    __fastfail(3u);
  }
  v25 = *(_DWORD *)(BugCheckParameter1 + 68);
  v26 = 65618;
  v27 = v10 >> 3;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw(a3);
    v48 = *a3;
    if ( !*a3 )
    {
      if ( a3 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)a3[1], 0LL, (signed __int64)a3) )
        goto LABEL_68;
      v48 = KxWaitForLockChainValid(a3, BugCheckParameter2);
    }
    *a3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v48 + 8), 1uLL);
  }
LABEL_68:
  v49 = KeGetCurrentPrcb();
  v50 = v49->SchedulerAssist;
  if ( v50 )
  {
    if ( v49->NestingLevel <= 1u )
    {
      v54 = v50[6] - 1;
      v50[6] = v54;
      if ( !v54 )
        KiRemoveSystemWorkPriorityKick(v49);
    }
  }
  LOBYTE(v23) = KiIrqlFlags;
  v51 = *((unsigned __int8 *)a3 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v23) = KeGetCurrentIrql();
      if ( (unsigned __int8)v23 <= 0xFu && (unsigned __int8)v51 <= 0xFu && (unsigned __int8)v23 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = v55->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v51 + 1));
        v17 = (v23 & v56[5]) == 0;
        v56[5] &= v23;
        if ( v17 )
          LOBYTE(v23) = KiRemoveSystemWorkPriorityKick(v55);
      }
    }
  }
  __writecr8(v51);
LABEL_32:
  __incgsdword(0x8670u);
  if ( v6 )
    LOBYTE(v23) = PerfLogExecutiveResourceRelease(v26, BugCheckParameter1, v27, v25);
  return v23;
}
