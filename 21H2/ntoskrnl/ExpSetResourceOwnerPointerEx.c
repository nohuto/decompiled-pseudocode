/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x14021A7D0
 * Callers:
 *     ExSetResourceOwnerPointer @ 0x14021A780 (ExSetResourceOwnerPointer.c)
 *     ExSetResourceOwnerPointerEx @ 0x14021A7B0 (ExSetResourceOwnerPointerEx.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsBoostThreadIoEx @ 0x1402ACD80 (PsBoostThreadIoEx.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x1402AF060 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1406329AC (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter4,
        unsigned __int64 a3,
        struct _KPRCB *SchedulerAssist)
{
  char v4; // si
  bool v7; // r12
  ULONG_PTR CurrentThread; // rbp
  volatile __int64 *v9; // rbx
  unsigned int v10; // edi
  unsigned __int8 CurrentIrql; // r10
  __int64 v12; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  char *p_NextThread; // rbx
  __int64 v18; // r10
  __int64 v19; // rdi
  unsigned int v20; // ecx
  char *v21; // r10
  __int64 v22; // rax
  int v23; // esi
  ULONG_PTR v24; // rsi
  signed __int64 v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  __int64 result; // rax
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  bool v41; // zf
  __int64 v42; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v4 = a3;
  v44 = 0LL;
  v7 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v9 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v43 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v42 = 0LL;
  v10 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v12 = (unsigned __int8)v42 - 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (struct _KPRCB *)KeGetCurrentPrcb()->SchedulerAssist;
    a3 = ((_DWORD)v12 << (CurrentIrql + 1)) & 4u | HIDWORD(SchedulerAssist->NextThread);
    HIDWORD(SchedulerAssist->NextThread) = a3;
  }
  LOBYTE(v44) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = CurrentPrcb->SchedulerAssist;
  if ( v14 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v37 = v14[6];
      v14[6] = v37 + 1;
      if ( v37 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v42, v9);
  }
  else
  {
    v15 = _InterlockedExchange64(v9, (__int64)&v42);
    if ( v15 )
      KxWaitForLockOwnerShip(&v42);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v16 = *(_QWORD *)(BugCheckParameter1 + 48);
    p_NextThread = (char *)(BugCheckParameter1 + 48);
    if ( v16 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v18 = *(_QWORD *)(BugCheckParameter1 + 16);
      v15 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      SchedulerAssist = (struct _KPRCB *)(BugCheckParameter1 + 48);
      if ( v16 )
        SchedulerAssist = 0LL;
      a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v18 && (v19 = *(_QWORD *)(BugCheckParameter1 + 16) + 16LL, v15 < a3) )
      {
        while ( *(_QWORD *)v19 != BugCheckParameter4 )
        {
          if ( *(_QWORD *)v19 )
          {
            if ( ++v15 == a3 )
              goto LABEL_16;
          }
          else if ( !SchedulerAssist )
          {
            SchedulerAssist = (struct _KPRCB *)v19;
          }
          v19 += 16LL;
          if ( v19 == v18 + 16LL * *(unsigned int *)(v18 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->ResourceIndex = (v19 - v18) >> 4;
      }
      else
      {
LABEL_16:
        v19 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v20 = 0;
    else
      v20 = *(unsigned __int8 *)(CurrentThread + 1120);
    if ( *(_QWORD *)p_NextThread != CurrentThread )
    {
      v15 = *(_QWORD *)p_NextThread != 0LL;
      if ( *(_QWORD *)p_NextThread )
        p_NextThread = 0LL;
      v21 = p_NextThread;
      if ( !v20
        || (v22 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v20 >= *(_DWORD *)(v22 + 8)
        || (p_NextThread = (char *)(v22 + 16LL * v20), *(_QWORD *)p_NextThread != CurrentThread) )
      {
        SchedulerAssist = *(struct _KPRCB **)(BugCheckParameter1 + 16);
        a3 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !SchedulerAssist || (p_NextThread = (char *)&SchedulerAssist->NextThread, v15 >= a3) )
LABEL_96:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, (ULONG_PTR)SchedulerAssist, 4uLL);
        while ( *(_QWORD *)p_NextThread != CurrentThread )
        {
          if ( *(_QWORD *)p_NextThread )
          {
            if ( ++v15 == a3 )
              goto LABEL_96;
          }
          else if ( !v21 )
          {
            v21 = p_NextThread;
          }
          p_NextThread += 16;
          if ( p_NextThread == (char *)SchedulerAssist + 16 * LODWORD(SchedulerAssist->CurrentThread) )
            goto LABEL_96;
        }
        KeGetCurrentThread()->ResourceIndex = (p_NextThread - (char *)SchedulerAssist) >> 4;
      }
    }
    v23 = v4 & 1;
    if ( !v19 )
    {
      if ( v23 )
      {
        v24 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v24 - 48);
        v25 = _InterlockedIncrement64((volatile signed __int64 *)(v24 - 48));
        if ( v25 <= 1 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL, 0x10uLL, v25);
        *((_DWORD *)p_NextThread + 2) |= 2u;
      }
      else
      {
        v34 = *((_DWORD *)p_NextThread + 2);
        if ( (v34 & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          PsBoostThreadIoEx(*(_QWORD *)p_NextThread, v15, 0LL, 0LL);
          *((_DWORD *)p_NextThread + 2) &= ~1u;
          v34 = *((_DWORD *)p_NextThread + 2);
        }
        if ( (v34 & 4) != 0 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)p_NextThread + 1444LL));
          *((_DWORD *)p_NextThread + 2) &= ~4u;
        }
      }
      *(_QWORD *)p_NextThread = BugCheckParameter4;
      v26 = 35544;
      goto LABEL_34;
    }
    if ( v23 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v33 = *((_DWORD *)p_NextThread + 2);
      if ( (v33 & 1) != 0 )
      {
        v38 = *(_DWORD *)(v19 + 8);
        if ( (v38 & 1) != 0 )
        {
          LOBYTE(v15) = 1;
          PsBoostThreadIoEx(*(_QWORD *)p_NextThread, v15, 0LL, 0LL);
        }
        else
        {
          *(_DWORD *)(v19 + 8) = v38 | 1;
        }
        *((_DWORD *)p_NextThread + 2) &= ~1u;
        v33 = *((_DWORD *)p_NextThread + 2);
      }
      if ( (v33 & 4) != 0 )
      {
        v39 = *(_DWORD *)(v19 + 8);
        if ( (v39 & 4) != 0 )
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)p_NextThread + 1444LL));
        else
          *(_DWORD *)(v19 + 8) = v39 | 4;
        *((_DWORD *)p_NextThread + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)p_NextThread, 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
    }
    else
    {
      v32 = *((unsigned int *)p_NextThread + 2);
      if ( (v32 & 1) != 0 )
      {
        LOBYTE(v32) = 1;
        PsBoostThreadIoEx(*(_QWORD *)p_NextThread, v32, 0LL, 0LL);
        *((_DWORD *)p_NextThread + 2) &= ~1u;
        LODWORD(v32) = *((_DWORD *)p_NextThread + 2);
      }
      if ( (v32 & 4) == 0 )
        goto LABEL_50;
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)p_NextThread + 1444LL));
      *((_DWORD *)p_NextThread + 2) &= ~4u;
    }
    LODWORD(v32) = *((_DWORD *)p_NextThread + 2);
LABEL_50:
    v26 = 35548;
    *(_DWORD *)(v19 + 8) = (v32 + (*(_DWORD *)(v19 + 8) & 0xFFFFFFF8)) ^ ((unsigned __int8)v32 ^ (unsigned __int8)*(_DWORD *)(v19 + 8)) & 7;
    *((_DWORD *)p_NextThread + 2) &= 7u;
    *(_QWORD *)p_NextThread = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v26);
    if ( v7 )
      v10 = 65856;
    else
      v10 = 65792;
    goto LABEL_36;
  }
  if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1)
    && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
  {
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  }
  if ( (v4 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v36 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v36 & 1) != 0 )
    {
      LOBYTE(v35) = 1;
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), v35, 0LL, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v36 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v36 & 4) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(BugCheckParameter1 + 48) + 1444LL));
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x8AD4u);
  if ( v7 )
    v10 = 65824;
LABEL_36:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v42, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v42);
  v27 = v42;
  if ( v42 )
    goto LABEL_70;
  if ( (__int64 *)_InterlockedCompareExchange64(v43, 0LL, (signed __int64)&v42) != &v42 )
  {
    v27 = KxWaitForLockChainValid(&v42);
LABEL_70:
    v42 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v27 + 8), 1uLL);
  }
LABEL_39:
  v28 = KeGetCurrentPrcb();
  v29 = v28->SchedulerAssist;
  if ( v29 )
  {
    if ( v28->NestingLevel <= 1u )
    {
      v40 = v29[6] - 1;
      v29[6] = v40;
      if ( !v40 )
        KiRemoveSystemWorkPriorityKick(v28);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v31 = (unsigned __int8)v44;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v44 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        SchedulerAssist = KeGetCurrentPrcb();
        a3 = (unsigned __int64)SchedulerAssist->SchedulerAssist;
        result = ~(unsigned __int16)(v12 << ((unsigned __int8)v44 + 1));
        v41 = ((unsigned int)result & *(_DWORD *)(a3 + 20)) == 0;
        *(_DWORD *)(a3 + 20) &= result;
        if ( v41 )
          result = KiRemoveSystemWorkPriorityKick(SchedulerAssist);
      }
    }
  }
  __writecr8(v31);
  if ( v7 )
    return PerfLogExecutiveResourceSetOwnerPointer(v10, BugCheckParameter1, a3, SchedulerAssist);
  return result;
}
