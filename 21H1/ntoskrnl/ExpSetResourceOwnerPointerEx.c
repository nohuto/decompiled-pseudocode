/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x1402DA540
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x1402DA520 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1405AF820 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140263210 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140263860 (PsBoostThreadIoEx.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x1402DB77C (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405A55A0 (PerfLogExecutiveResourceSetOwnerPointer.c)
 */

__int64 __fastcall ExpSetResourceOwnerPointerEx(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter4, char a3)
{
  bool v6; // r13
  ULONG_PTR CurrentThread; // rsi
  volatile __int64 *v8; // rbx
  unsigned int v9; // r15d
  unsigned __int8 CurrentIrql; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r15
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdi
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // r9
  unsigned int v22; // ecx
  _QWORD *v23; // r8
  __int64 v24; // rax
  int v25; // r12d
  ULONG_PTR v26; // rax
  volatile signed __int64 *v27; // rdi
  signed __int64 v28; // rsi
  unsigned int v29; // eax
  __int64 v30; // rax
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  __int64 result; // rax
  unsigned __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r15
  unsigned __int64 v37; // r11
  _QWORD *v38; // r9
  _QWORD *v39; // rcx
  int v40; // eax
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  bool v49; // zf
  __int64 v50; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v51; // [rsp+38h] [rbp-40h]
  __int64 v52; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v52 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v51 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v50 = 0LL;
  v9 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v52) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = CurrentPrcb->SchedulerAssist;
  if ( v12 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v42 = v12[6];
      v12[6] = v42 + 1;
      if ( v42 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v50, v8);
  }
  else
  {
    v13 = _InterlockedExchange64(v8, (__int64)&v50);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&v50, (_QWORD *)v13);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 48);
    v15 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( v14 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v16 = *(_QWORD *)(BugCheckParameter1 + 16);
      v13 = BugCheckParameter1 + 48;
      v17 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      if ( v14 )
        v13 = 0LL;
      v18 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v16 && (v19 = *(_QWORD *)(BugCheckParameter1 + 16) + 16LL, v17 < v18) )
      {
        while ( 1 )
        {
          v20 = v13;
          v21 = v13;
          if ( *(_QWORD *)v19 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v19 )
          {
            if ( ++v17 == v18 )
              goto LABEL_16;
          }
          else
          {
            v13 = v19;
            if ( v21 )
              v13 = v20;
          }
          v19 += 16LL;
          if ( v19 == v16 + 16LL * *(unsigned int *)(v16 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v19 - v16) >> 4;
      }
      else
      {
LABEL_16:
        v19 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v22 = 0;
    else
      v22 = *(unsigned __int8 *)(CurrentThread + 649);
    if ( *v15 != CurrentThread )
    {
      v13 = *v15 != 0LL;
      if ( *v15 )
        v15 = 0LL;
      v23 = v15;
      if ( !v22
        || (v24 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v22 >= *(_DWORD *)(v24 + 8)
        || (v15 = (_QWORD *)(v24 + 16LL * v22), *v15 != CurrentThread) )
      {
        v36 = *(_QWORD *)(BugCheckParameter1 + 16);
        v37 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v36 || (v15 = (_QWORD *)(v36 + 16), v13 >= v37) )
LABEL_94:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( 1 )
        {
          v38 = v23;
          v39 = v23;
          if ( *v15 == CurrentThread )
            break;
          if ( *v15 )
          {
            if ( ++v13 == v37 )
              goto LABEL_94;
          }
          else
          {
            v23 = v15;
            if ( v39 )
              v23 = v38;
          }
          v15 += 2;
          if ( v15 == (_QWORD *)(v36 + 16LL * *(unsigned int *)(v36 + 8)) )
            goto LABEL_94;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v15 - v36) >> 4;
      }
    }
    v25 = a3 & 1;
    if ( !v19 )
    {
      if ( v25 )
      {
        v26 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v27 = (volatile signed __int64 *)(v26 - 48);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v26 - 48);
        v28 = _InterlockedIncrement64(v27);
        if ( v28 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v27 + 6), 0x10uLL, v28);
        *((_DWORD *)v15 + 2) |= 2u;
      }
      else
      {
        v40 = *((_DWORD *)v15 + 2);
        if ( (v40 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          *((_DWORD *)v15 + 2) &= ~1u;
          v40 = *((_DWORD *)v15 + 2);
        }
        if ( (v40 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v15, 1LL);
          *((_DWORD *)v15 + 2) &= ~4u;
        }
      }
      *v15 = BugCheckParameter4;
      v29 = 34520;
      goto LABEL_34;
    }
    if ( v25 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v35 = *((_DWORD *)v15 + 2);
      if ( (v35 & 1) != 0 )
      {
        v44 = *(_DWORD *)(v19 + 8);
        if ( (v44 & 1) != 0 )
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        else
          *(_DWORD *)(v19 + 8) = v44 | 1;
        *((_DWORD *)v15 + 2) &= ~1u;
        v35 = *((_DWORD *)v15 + 2);
      }
      if ( (v35 & 4) != 0 )
      {
        v45 = *(_DWORD *)(v19 + 8);
        if ( (v45 & 4) != 0 )
          PsBoostThreadIoQoS(*v15, 1LL);
        else
          *(_DWORD *)(v19 + 8) = v45 | 4;
        *((_DWORD *)v15 + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag((PVOID)*v15, 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
    }
    else
    {
      LODWORD(v13) = *((_DWORD *)v15 + 2);
      if ( (v13 & 1) != 0 )
      {
        PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        *((_DWORD *)v15 + 2) &= ~1u;
        LODWORD(v13) = *((_DWORD *)v15 + 2);
      }
      if ( (v13 & 4) == 0 )
        goto LABEL_50;
      PsBoostThreadIoQoS(*v15, 1LL);
      *((_DWORD *)v15 + 2) &= ~4u;
    }
    LODWORD(v13) = *((_DWORD *)v15 + 2);
LABEL_50:
    v29 = 34524;
    *(_DWORD *)(v19 + 8) = (v13 + (*(_DWORD *)(v19 + 8) & 0xFFFFFFF8)) ^ ((unsigned __int8)v13 ^ (unsigned __int8)*(_DWORD *)(v19 + 8)) & 7;
    *((_DWORD *)v15 + 2) &= 7u;
    *v15 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v29);
    if ( v6 )
      v9 = 65856;
    else
      v9 = 65792;
    goto LABEL_36;
  }
  if ( ExpResourceEnforcesOwnershipTransfer(BugCheckParameter1) && *(_QWORD *)(BugCheckParameter1 + 48) != CurrentThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 5uLL);
  if ( (a3 & 1) != 0 )
  {
    if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
      KeBugCheckEx(0x132u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 16), CurrentThread, BugCheckParameter4);
    ObfReferenceObjectWithTag((PVOID)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) |= 2u;
  }
  else
  {
    v43 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v43 & 1) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v43 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v43 & 4) != 0 )
    {
      PsBoostThreadIoQoS(*(_QWORD *)(BugCheckParameter1 + 48), 1LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~4u;
    }
  }
  *(_QWORD *)(BugCheckParameter1 + 48) = BugCheckParameter4;
  __incgsdword(0x86D4u);
  if ( v6 )
    v9 = 65824;
LABEL_36:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v50, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v50);
  v30 = v50;
  if ( v50 )
    goto LABEL_65;
  if ( (__int64 *)_InterlockedCompareExchange64(v51, 0LL, (signed __int64)&v50) != &v50 )
  {
    v30 = KxWaitForLockChainValid(&v50, v13);
LABEL_65:
    v50 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v30 + 8), 1uLL);
  }
LABEL_39:
  v31 = KeGetCurrentPrcb();
  v32 = v31->SchedulerAssist;
  if ( v32 )
  {
    if ( v31->NestingLevel <= 1u )
    {
      v46 = v32[6] - 1;
      v32[6] = v46;
      if ( !v46 )
        KiRemoveSystemWorkPriorityKick(v31);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v34 = (unsigned __int8)v52;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v52 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v49 = ((unsigned int)result & v48[5]) == 0;
        v48[5] &= result;
        if ( v49 )
          result = KiRemoveSystemWorkPriorityKick(v47);
      }
    }
  }
  __writecr8(v34);
  if ( v6 )
    return PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1);
  return result;
}
