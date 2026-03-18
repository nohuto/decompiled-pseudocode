/*
 * XREFs of ExpReleaseResourceSharedForThreadLite @ 0x140208710
 * Callers:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x14020A1C0 (ExReleaseResourceAndLeaveCriticalRegion.c)
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

__int64 __fastcall ExpReleaseResourceSharedForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        _QWORD *a3,
        unsigned __int64 a4)
{
  _QWORD *v4; // r15
  _QWORD *v5; // rbx
  bool v7; // r13
  unsigned int v8; // ecx
  __int64 v9; // rax
  _QWORD *v10; // r14
  unsigned int v11; // esi
  unsigned __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  bool v17; // zf
  int v18; // r14d
  __int64 v19; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 SchedulerAssist; // rdx
  unsigned __int64 v22; // rbx
  int v23; // ebx
  __int64 result; // rax
  char v25; // si
  unsigned int v26; // r14d
  unsigned int v27; // ebx
  unsigned int v28; // esi
  __int64 v29; // rax
  ULONG_PTR v30; // rsi
  unsigned __int64 v31; // r10
  _QWORD *v32; // rbx
  _QWORD *v33; // r11
  _QWORD *v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  struct _KPRCB *v38; // r12
  _QWORD *v39; // rax
  _QWORD *v40; // r15
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // rdx
  __int64 **v44; // rcx
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
  __int64 **v72; // r8
  __int64 v73; // [rsp+30h] [rbp-88h]
  _QWORD *v74; // [rsp+38h] [rbp-80h]
  __int64 *v75; // [rsp+40h] [rbp-78h]
  __int64 v76; // [rsp+48h] [rbp-70h]
  struct _KPRCB *v77; // [rsp+58h] [rbp-60h]
  _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  __int64 *v79; // [rsp+68h] [rbp-50h]
  char v80; // [rsp+70h] [rbp-48h]
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v82; // [rsp+C0h] [rbp+8h] BYREF
  unsigned int v83; // [rsp+C8h] [rbp+10h]
  _QWORD *v84; // [rsp+D8h] [rbp+20h]

  v4 = a3;
  v5 = 0LL;
  v84 = 0LL;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  if ( (BugCheckParameter2 & 3) != 0 )
    v8 = 0;
  else
    v8 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
  v9 = *(_QWORD *)(BugCheckParameter1 + 48);
  v10 = (_QWORD *)(BugCheckParameter1 + 48);
  if ( v9 != BugCheckParameter2 )
  {
    a3 = (_QWORD *)(BugCheckParameter1 + 48);
    a4 = v9 != 0;
    if ( v9 )
      a3 = 0LL;
    if ( !v8
      || (v29 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
      || v8 >= *(_DWORD *)(v29 + 8)
      || (v10 = (_QWORD *)(v29 + 16LL * v8), *v10 != BugCheckParameter2) )
    {
      v30 = *(_QWORD *)(BugCheckParameter1 + 16);
      v31 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( !v30 || (v10 = (_QWORD *)(v30 + 16), a4 >= v31) )
LABEL_97:
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v30, 2uLL);
      while ( 1 )
      {
        v32 = a3;
        v33 = a3;
        if ( *v10 == BugCheckParameter2 )
          break;
        if ( *v10 )
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
        v10 += 2;
        if ( v10 == (_QWORD *)(v30 + 16LL * *(unsigned int *)(v30 + 8)) )
          goto LABEL_97;
      }
      v5 = v84;
      KeGetCurrentThread()->SchedulerApc.SpareByte0 = (__int64)((__int64)v10 - v30) >> 4;
    }
  }
  v11 = v10[1] & 7 | (8 * (*((_DWORD *)v10 + 2) >> 3) - 8);
  *((_DWORD *)v10 + 2) = v11;
  if ( v11 < 8 )
  {
    v12 = *v10;
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
        *((_DWORD *)v10 + 2) &= ~1u;
        v13 = *((_DWORD *)v10 + 2);
      }
      else
      {
        LOBYTE(v13) = v11;
      }
      if ( (v13 & 4) != 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(v12 + 1364));
        *((_DWORD *)v10 + 2) &= ~4u;
        v13 = *((_DWORD *)v10 + 2);
        v5 = v84;
      }
      if ( (v13 & 2) != 0 )
      {
        ObDereferenceObjectDeferDelete((PVOID)v12);
        *((_DWORD *)v10 + 2) &= ~2u;
      }
    }
LABEL_14:
    *v10 = 0LL;
    v14 = 0LL;
    v83 = *(_DWORD *)(BugCheckParameter1 + 68);
    v76 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 64) > 1u )
    {
LABEL_17:
      v16 = 0LL;
      goto LABEL_18;
    }
    v15 = *(_DWORD *)(BugCheckParameter1 + 76);
    if ( !v15 )
    {
      if ( !*(_DWORD *)(BugCheckParameter1 + 72) )
        goto LABEL_17;
      v56 = *(_QWORD **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      v16 = *(unsigned int *)(BugCheckParameter1 + 72);
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      v84 = v56;
LABEL_18:
      v17 = (_DWORD)v16 - 1 + *(_DWORD *)(BugCheckParameter1 + 64) == 0;
      *(_DWORD *)(BugCheckParameter1 + 64) += v16 - 1;
      if ( v17 )
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      if ( !*(_DWORD *)(BugCheckParameter1 + 76) && !*(_DWORD *)(BugCheckParameter1 + 72) )
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xF9u;
      v18 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
      if ( v14 )
      {
        v45 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
        *(_QWORD *)(BugCheckParameter1 + 48) = v14;
        *(_DWORD *)(BugCheckParameter1 + 56) = v45 | 8;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(v4, retaddr, 1LL, 0LL);
        goto LABEL_28;
      }
      _m_prefetchw(v4);
      v19 = *v4;
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
              v57 = *(_DWORD *)(SchedulerAssist + 24) - 1;
              *(_DWORD *)(SchedulerAssist + 24) = v57;
              if ( !v57 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v22 = *((unsigned __int8 *)v4 + 16);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v22 <= 0xFu && CurrentIrql >= 2u )
              {
                v59 = KeGetCurrentPrcb();
                SchedulerAssist = -1LL << ((unsigned __int8)v22 + 1);
                v60 = v59->SchedulerAssist;
                v61 = ~(unsigned __int16)SchedulerAssist;
                v17 = (v61 & v60[5]) == 0;
                v60[5] &= v61;
                if ( v17 )
                  KiRemoveSystemWorkPriorityKick(v59);
              }
            }
          }
          __writecr8(v22);
          v23 = 1;
          result = v76 != 0;
          v25 = 2 * result + 1;
          if ( !v84 )
            goto LABEL_31;
          v37 = KeGetCurrentIrql();
          v80 = v37;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 <= 0xFu )
          {
            v62 = KeGetCurrentPrcb();
            SchedulerAssist = (-1LL << (v37 + 1)) & 4;
            *((_DWORD *)v62->SchedulerAssist + 5) |= SchedulerAssist;
          }
          v38 = KeGetCurrentPrcb();
          v39 = v84;
          while ( 1 )
          {
            v40 = v39;
            v82 = 0;
            v39 = (_QWORD *)*v39;
            v74 = v39;
            if ( _interlockedbittestandset((volatile signed __int32 *)v40 + 6, 7u) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v82, SchedulerAssist);
                while ( (*((_DWORD *)v40 + 6) & 0x80u) != 0 );
              }
              while ( _interlockedbittestandset((volatile signed __int32 *)v40 + 6, 7u) );
              v39 = v74;
            }
            SchedulerAssist = (__int64)(v40 + 4);
            *((_DWORD *)v40 + 7) = 1;
            v41 = (__int64 *)v40[4];
            if ( v41 != v40 + 4 )
              break;
LABEL_78:
            _InterlockedAnd((volatile signed __int32 *)v40 + 6, 0xFFFFFF7F);
            if ( v39 == v84 )
            {
              v51 = KiRemoveBoostThread(v38, v38->CurrentThread);
              if ( v18 )
              {
                v23 = 2;
                if ( v51 > (char)v18 )
                  v18 = v51;
              }
              if ( (v25 & 2) != 0 && v23 == 1 )
                v18 = 1;
              result = KiExitDispatcher((_DWORD)v38, 0, v23, v18, v80);
LABEL_31:
              v26 = v83;
              v27 = 65602;
              v28 = 0;
              goto LABEL_32;
            }
          }
          while ( 1 )
          {
            v42 = *v41;
            v43 = v41;
            v75 = v41;
            v44 = (__int64 **)v41[1];
            v79 = (__int64 *)v42;
            if ( *(__int64 **)(v42 + 8) != v43 || *v44 != v43 )
              goto LABEL_64;
            *v44 = (__int64 *)v42;
            *(_QWORD *)(v42 + 8) = v44;
            v50 = *((_BYTE *)v43 + 16);
            if ( v50 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(v38, v43, *((unsigned __int16 *)v43 + 9), 0LL) )
              {
                v17 = (*((_DWORD *)v40 + 7))-- == 1;
                if ( v17 )
                {
LABEL_77:
                  v39 = v74;
                  goto LABEL_78;
                }
              }
            }
            else
            {
              if ( v50 == 2 )
              {
                *((_BYTE *)v43 + 17) = 5;
                v73 = v43[3];
                *v43 = 0LL;
                v63 = KeGetCurrentIrql();
                __writecr8(2uLL);
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v63 <= 0xFu )
                {
                  v64 = KeGetCurrentPrcb()->SchedulerAssist;
                  v43 = v75;
                  v64[5] |= (-1LL << (v63 + 1)) & 4;
                }
                v77 = KeGetCurrentPrcb();
                CurrentThread = v77->CurrentThread;
                if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
                {
                  IsThreadRunning = KeIsThreadRunning(v77->CurrentThread, v43);
                  EtwTraceEnqueueWork(v67, v66, IsThreadRunning);
                }
                KiAcquireKobjectLockSafe(v73);
                v68 = (_QWORD *)(v73 + 8);
                v69 = v73;
                if ( (_QWORD *)*v68 == v68
                  || *(_DWORD *)(v73 + 40) >= *(_DWORD *)(v73 + 44)
                  || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v73 && CurrentThread->WaitReason == 15 )
                {
LABEL_138:
                  v71 = *(_DWORD *)(v69 + 4);
                  SchedulerAssist = v69 + 24;
                  *(_DWORD *)(v69 + 4) = v71 + 1;
                  v72 = *(__int64 ***)(v69 + 32);
                  if ( *v72 != (__int64 *)(v69 + 24) )
                    goto LABEL_64;
                  *v75 = SchedulerAssist;
                  v75[1] = (__int64)v72;
                  *v72 = v75;
                  *(_QWORD *)(v69 + 32) = v75;
                  if ( !v71 && (_QWORD *)*v68 != v68 )
                  {
                    KiWakeOtherQueueWaiters(v77, v69);
                    v69 = v73;
                  }
                }
                else
                {
                  v70 = KiWakeQueueWaiter(v77, v73, v75);
                  v69 = v73;
                  if ( !v70 )
                  {
                    v68 = (_QWORD *)(v73 + 8);
                    goto LABEL_138;
                  }
                }
                _InterlockedAnd((volatile signed __int32 *)v69, 0xFFFFFF7F);
                v17 = (*((_DWORD *)v40 + 7))-- == 1;
                if ( v17 )
                  goto LABEL_77;
                goto LABEL_145;
              }
              KiTryUnwaitThread(v38, v43, 256LL, 0LL);
            }
LABEL_145:
            v41 = v79;
            if ( v79 == v40 + 4 )
              goto LABEL_77;
          }
        }
        v19 = KxWaitForLockChainValid(v4, v16, 1LL, 0LL);
      }
      *v4 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v19 + 8), 1uLL);
      goto LABEL_28;
    }
    v34 = *(_QWORD **)(BugCheckParameter1 + 40);
    if ( !v34 )
    {
LABEL_58:
      v76 = v14;
      *(_DWORD *)(BugCheckParameter1 + 76) = v15 - 1;
      v16 = 1LL;
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
    v14 = v34[2];
    if ( !v5 )
    {
      v34[1] = v34;
      *v34 = v34;
LABEL_57:
      v15 = *(_DWORD *)(BugCheckParameter1 + 76);
      v84 = v34;
      goto LABEL_58;
    }
    v55 = (_QWORD *)v5[1];
    if ( (_QWORD *)*v55 == v5 )
    {
      *v34 = v5;
      v34[1] = v55;
      *v55 = v34;
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
    KiReleaseQueuedSpinLockInstrumented(v4, retaddr, a3, a4);
  }
  else
  {
    _m_prefetchw(v4);
    v46 = *v4;
    if ( !*v4 )
    {
      if ( v4 == (_QWORD *)_InterlockedCompareExchange64((volatile signed __int64 *)v4[1], 0LL, (signed __int64)v4) )
        goto LABEL_68;
      v46 = KxWaitForLockChainValid(v4, BugCheckParameter2, a3, a4);
    }
    *v4 = 0LL;
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
  result = (unsigned int)KiIrqlFlags;
  v49 = *((unsigned __int8 *)v4 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v49 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v53 = KeGetCurrentPrcb();
        v54 = v53->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
        v17 = ((unsigned int)result & v54[5]) == 0;
        v54[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(v53);
      }
    }
  }
  __writecr8(v49);
LABEL_32:
  __incgsdword(0x8670u);
  if ( v7 )
    return PerfLogExecutiveResourceRelease(v27, BugCheckParameter1, v28, v26);
  return result;
}
