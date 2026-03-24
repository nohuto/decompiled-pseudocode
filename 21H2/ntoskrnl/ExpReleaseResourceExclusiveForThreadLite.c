/*
 * XREFs of ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x14029B1A0 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
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

char __fastcall ExpReleaseResourceExclusiveForThreadLite(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
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
  unsigned int v14; // r13d
  __int64 v15; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int64 v18; // rdi
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // r13d
  unsigned int v22; // ebp
  __int64 v23; // rax
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int8 v27; // cl
  __int64 v28; // r9
  struct _KPRCB *v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  char v35; // al
  bool v36; // zf
  char v37; // al
  __int64 *v38; // rax
  __int64 *v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 **v42; // rcx
  __int64 *v43; // r13
  int v44; // eax
  struct _KPRCB *v45; // r9
  _DWORD *v46; // r8
  int v47; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v49; // r10
  _DWORD *v50; // r9
  int v51; // eax
  _DWORD *v52; // r9
  unsigned __int8 v53; // cl
  _DWORD *v54; // r9
  __int64 CurrentThread; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v57; // rdx
  __int64 v58; // r9
  __int64 v59; // r9
  _QWORD *v60; // r10
  __int64 v61; // rcx
  char v62; // al
  int v63; // r9d
  __int64 v65; // [rsp+30h] [rbp-A8h]
  __int64 *v66; // [rsp+38h] [rbp-A0h]
  __int64 *v67; // [rsp+40h] [rbp-98h]
  __int64 v68; // [rsp+48h] [rbp-90h]
  unsigned int v69; // [rsp+50h] [rbp-88h]
  _QWORD *v70; // [rsp+58h] [rbp-80h]
  __int64 *v71; // [rsp+60h] [rbp-78h]
  __int64 v72; // [rsp+68h] [rbp-70h]
  struct _KPRCB *v73; // [rsp+78h] [rbp-60h]
  __int64 v74; // [rsp+80h] [rbp-58h]
  __int64 v75; // [rsp+88h] [rbp-50h]
  unsigned __int8 v76; // [rsp+90h] [rbp-48h]
  void *retaddr; // [rsp+D8h] [rbp+0h]
  int v78; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v79; // [rsp+F8h] [rbp+20h]

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
    v69 = *(_DWORD *)(BugCheckParameter1 + 68);
    v72 = 0LL;
    if ( *(_DWORD *)(BugCheckParameter1 + 72) )
    {
      v38 = *(__int64 **)(BugCheckParameter1 + 32);
      *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
      a3 = *(unsigned int *)(BugCheckParameter1 + 72);
      v67 = v38;
      *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
      *(_DWORD *)(BugCheckParameter1 + 72) = 0;
      if ( !(_DWORD)a3 )
        goto LABEL_16;
    }
    else
    {
      v12 = *(_DWORD *)(BugCheckParameter1 + 76);
      v67 = 0LL;
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
        v79 = v14;
        if ( v11 )
        {
          v40 = *(_DWORD *)(BugCheckParameter1 + 56) & 7;
          *(_QWORD *)(BugCheckParameter1 + 48) = v11;
          *(_DWORD *)(BugCheckParameter1 + 56) = v40 | 8;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(v4, retaddr);
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
                v47 = SchedulerAssist[6] - 1;
                SchedulerAssist[6] = v47;
                if ( !v47 )
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
                  v49 = KeGetCurrentPrcb();
                  v50 = v49->SchedulerAssist;
                  v51 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                  v36 = (v51 & v50[5]) == 0;
                  a3 = (unsigned int)v51 & v50[5];
                  v50[5] = a3;
                  if ( v36 )
                    KiRemoveSystemWorkPriorityKick(v49);
                }
              }
            }
            __writecr8(v18);
            LOBYTE(v19) = v72 != 0;
            v20 = 1;
            if ( !v67 )
              goto LABEL_28;
            v27 = KeGetCurrentIrql();
            v76 = v27;
            v28 = 2LL;
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v27 <= 0xFu )
            {
              v52 = KeGetCurrentPrcb()->SchedulerAssist;
              a3 = (-1 << (v27 + 1)) & 4u | v52[5];
              v52[5] = a3;
              v28 = 2LL;
            }
            v29 = KeGetCurrentPrcb();
            v30 = v67;
            v71 = v67;
            v68 = (__int64)v29;
            while ( 1 )
            {
              v78 = 0;
              v66 = v30;
              v31 = *v71;
              v71 = (__int64 *)*v71;
              if ( _interlockedbittestandset((volatile signed __int32 *)v30 + 6, 7u) )
              {
                v43 = v30;
                do
                {
                  do
                    KeYieldProcessorEx(&v78, v31, a3, v28);
                  while ( (*((_DWORD *)v43 + 6) & 0x80u) != 0 );
                }
                while ( _interlockedbittestandset((volatile signed __int32 *)v43 + 6, 7u) );
                v14 = v79;
                v30 = v66;
                v29 = (struct _KPRCB *)v68;
              }
              *((_DWORD *)v30 + 7) = 1;
              a3 = v30[4];
              if ( (__int64 *)a3 != v30 + 4 )
                break;
LABEL_48:
              _InterlockedAnd((volatile signed __int32 *)v30 + 6, 0xFFFFFF7F);
              v30 = v71;
              if ( v71 == v67 )
              {
                v37 = KiRemoveBoostThread(v68, *(_QWORD *)(v68 + 8));
                if ( v14 )
                {
                  v20 = 2;
                  if ( v37 > (char)v14 )
                    v14 = v37;
                }
                if ( ((2 * (v72 != 0) + 1) & 2) != 0 && v20 == 1 )
                  v14 = 1;
                LOBYTE(v19) = KiExitDispatcher(v68, 0LL, v20, v14, v76);
LABEL_28:
                v21 = v69;
                v22 = 65570;
                v8 = 0;
                goto LABEL_29;
              }
              v29 = (struct _KPRCB *)v68;
              v28 = 2LL;
            }
            while ( 1 )
            {
              v32 = *(_QWORD *)a3;
              v33 = a3;
              v34 = *(_QWORD *)(a3 + 8);
              v70 = (_QWORD *)v33;
              v75 = v32;
              if ( *(_QWORD *)(v32 + 8) != v33 || *(_QWORD *)v34 != v33 )
                goto LABEL_43;
              *(_QWORD *)v34 = v32;
              *(_QWORD *)(v32 + 8) = v34;
              v35 = *(_BYTE *)(v33 + 16);
              if ( v35 != 1 )
                break;
              v36 = (unsigned __int8)KiTryUnwaitThread((__int64)v29, v33, *(unsigned __int16 *)(v33 + 18), 0LL) == 0;
              v30 = v66;
              if ( !v36 )
              {
                v36 = (*((_DWORD *)v66 + 7))-- == 1;
                if ( v36 )
                  goto LABEL_48;
              }
LABEL_76:
              a3 = v75;
              v29 = (struct _KPRCB *)v68;
              if ( (__int64 *)v75 == v30 + 4 )
                goto LABEL_48;
            }
            if ( v35 != 2 )
            {
              KiTryUnwaitThread((__int64)v29, v33, 256LL, 0LL);
              v30 = v66;
              goto LABEL_76;
            }
            *(_BYTE *)(v33 + 17) = 5;
            v65 = *(_QWORD *)(v33 + 24);
            *(_QWORD *)v33 = 0LL;
            v53 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v53 <= 0xFu )
            {
              v54 = KeGetCurrentPrcb()->SchedulerAssist;
              v34 = (unsigned int)(-1LL << (v53 + 1)) & 4 | v54[5];
              v54[5] = v34;
            }
            v73 = KeGetCurrentPrcb();
            CurrentThread = (__int64)v73->CurrentThread;
            v74 = CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(CurrentThread);
              EtwTraceEnqueueWork(v58, v57, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v65, v33, v34, CurrentThread);
            v60 = (_QWORD *)(v65 + 8);
            v61 = v65;
            if ( (_QWORD *)*v60 != v60
              && *(_DWORD *)(v65 + 40) < *(_DWORD *)(v65 + 44)
              && (*(_QWORD *)(v74 + 232) != v65 || *(_BYTE *)(v74 + 643) != 15) )
            {
              v62 = KiWakeQueueWaiter((__int64)v73, v65, (__int64)v70, v59);
              v61 = v65;
              if ( v62 )
                goto LABEL_121;
              v60 = (_QWORD *)(v65 + 8);
            }
            v63 = *(_DWORD *)(v61 + 4);
            *(_DWORD *)(v61 + 4) = v63 + 1;
            a3 = *(_QWORD *)(v61 + 32);
            if ( *(_QWORD *)a3 != v61 + 24 )
              goto LABEL_43;
            *v70 = v61 + 24;
            v70[1] = a3;
            *(_QWORD *)a3 = v70;
            *(_QWORD *)(v61 + 32) = v70;
            if ( !v63 && (_QWORD *)*v60 != v60 )
            {
              KiWakeOtherQueueWaiters((__int64)v73, v61);
              v61 = v65;
            }
LABEL_121:
            _InterlockedAnd((volatile signed __int32 *)v61, 0xFFFFFF7F);
            v30 = v66;
            v36 = (*((_DWORD *)v66 + 7))-- == 1;
            if ( v36 )
              goto LABEL_48;
            goto LABEL_76;
          }
          v15 = KxWaitForLockChainValid(v4, v13, a3, a4);
        }
        *v4 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v15 + 8), 1uLL);
        goto LABEL_25;
      }
      v39 = *(__int64 **)(BugCheckParameter1 + 40);
      if ( v39 )
      {
        if ( (__int64 *)*v39 == v39 )
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = 0LL;
        }
        else
        {
          *(_QWORD *)(BugCheckParameter1 + 40) = *v39;
          v41 = *v39;
          v42 = (__int64 **)v39[1];
          if ( *(__int64 **)(*v39 + 8) != v39 || *v42 != v39 )
LABEL_43:
            __fastfail(3u);
          *v42 = (__int64 *)v41;
          *(_QWORD *)(v41 + 8) = v42;
        }
        v11 = v39[2];
        v39[1] = (__int64)v39;
        *v39 = (__int64)v39;
        v12 = *(_DWORD *)(BugCheckParameter1 + 76);
        v67 = v39;
      }
      v72 = v11;
      *(_DWORD *)(BugCheckParameter1 + 76) = v12 - 1;
      a3 = 1LL;
    }
    v13 = (unsigned int)(a3 + *(_DWORD *)(BugCheckParameter1 + 64) - 1);
    goto LABEL_17;
  }
  v22 = 65586;
  v21 = *(_DWORD *)(BugCheckParameter1 + 68);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(a3, retaddr);
  }
  else
  {
    _m_prefetchw((const void *)a3);
    v23 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3 )
    {
      if ( a3 == _InterlockedCompareExchange64(*(volatile signed __int64 **)(a3 + 8), 0LL, a3) )
        goto LABEL_35;
      v23 = KxWaitForLockChainValid((__int64 *)a3, BugCheckParameter2, a3, a4);
    }
    *v4 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v23 + 8), 1uLL);
  }
LABEL_35:
  v24 = KeGetCurrentPrcb();
  v25 = v24->SchedulerAssist;
  if ( v25 )
  {
    if ( v24->NestingLevel <= 1u )
    {
      v44 = v25[6] - 1;
      v25[6] = v44;
      if ( !v44 )
        KiRemoveSystemWorkPriorityKick(v24);
    }
  }
  LOBYTE(v19) = KiIrqlFlags;
  v26 = *((unsigned __int8 *)v4 + 16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v19) = KeGetCurrentIrql();
      if ( (unsigned __int8)v19 <= 0xFu && (unsigned __int8)v26 <= 0xFu && (unsigned __int8)v19 >= 2u )
      {
        v45 = KeGetCurrentPrcb();
        v46 = v45->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
        v36 = (v19 & v46[5]) == 0;
        v46[5] &= v19;
        if ( v36 )
          LOBYTE(v19) = KiRemoveSystemWorkPriorityKick(v45);
      }
    }
  }
  __writecr8(v26);
LABEL_29:
  __incgsdword(0x866Cu);
  if ( v6 )
    LOBYTE(v19) = PerfLogExecutiveResourceRelease(v22, BugCheckParameter1, v8, v21);
  return v19;
}
