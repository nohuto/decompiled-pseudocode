/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x140279730
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x140279710 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1405AFF40 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14020A2F0 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405A5C90 (PerfLogExecutiveResourceSetOwnerPointer.c)
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
  __int64 v13; // rax
  _QWORD *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // r10
  __int64 v21; // r9
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r8
  __int64 v25; // rax
  int v26; // r12d
  ULONG_PTR v27; // rax
  volatile signed __int64 *v28; // rdi
  signed __int64 v29; // rsi
  unsigned int v30; // eax
  __int64 v31; // rax
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 result; // rax
  unsigned __int64 v35; // rbx
  int v36; // eax
  int v37; // edx
  __int64 v38; // r15
  unsigned __int64 v39; // r11
  _QWORD *v40; // r9
  _QWORD *v41; // rcx
  int v42; // eax
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  struct _KPRCB *v49; // r9
  _DWORD *v50; // r8
  bool v51; // zf
  __int64 v52; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v53; // [rsp+38h] [rbp-40h]
  __int64 v54; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v54 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v53 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v52 = 0LL;
  v9 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v54) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = CurrentPrcb->SchedulerAssist;
  if ( v12 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v44 = v12[6];
      v12[6] = v44 + 1;
      if ( v44 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v52, v8);
  }
  else if ( _InterlockedExchange64(v8, (__int64)&v52) )
  {
    KxWaitForLockOwnerShip(&v52);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v13 = *(_QWORD *)(BugCheckParameter1 + 48);
    v14 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( v13 == BugCheckParameter4 )
    {
      v19 = BugCheckParameter1 + 48;
    }
    else
    {
      v15 = *(_QWORD *)(BugCheckParameter1 + 16);
      v16 = BugCheckParameter1 + 48;
      v17 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      if ( v13 )
        v16 = 0LL;
      v18 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v15 && (v19 = *(_QWORD *)(BugCheckParameter1 + 16) + 16LL, v17 < v18) )
      {
        while ( 1 )
        {
          v20 = v16;
          v21 = v16;
          if ( *(_QWORD *)v19 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v19 )
          {
            if ( ++v17 == v18 )
              goto LABEL_16;
          }
          else
          {
            v16 = v19;
            if ( v21 )
              v16 = v20;
          }
          v19 += 16LL;
          if ( v19 == v15 + 16LL * *(unsigned int *)(v15 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v19 - v15) >> 4;
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
    if ( *v14 != CurrentThread )
    {
      v23 = *v14 != 0LL;
      if ( *v14 )
        v14 = 0LL;
      v24 = v14;
      if ( !v22
        || (v25 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v22 >= *(_DWORD *)(v25 + 8)
        || (v14 = (_QWORD *)(v25 + 16LL * v22), *v14 != CurrentThread) )
      {
        v38 = *(_QWORD *)(BugCheckParameter1 + 16);
        v39 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v38 || (v14 = (_QWORD *)(v38 + 16), v23 >= v39) )
LABEL_94:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( 1 )
        {
          v40 = v24;
          v41 = v24;
          if ( *v14 == CurrentThread )
            break;
          if ( *v14 )
          {
            if ( ++v23 == v39 )
              goto LABEL_94;
          }
          else
          {
            v24 = v14;
            if ( v41 )
              v24 = v40;
          }
          v14 += 2;
          if ( v14 == (_QWORD *)(v38 + 16LL * *(unsigned int *)(v38 + 8)) )
            goto LABEL_94;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v14 - v38) >> 4;
      }
    }
    v26 = a3 & 1;
    if ( !v19 )
    {
      if ( v26 )
      {
        v27 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v28 = (volatile signed __int64 *)(v27 - 48);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v27 - 48);
        v29 = _InterlockedIncrement64(v28);
        if ( v29 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v28 + 6), 0x10uLL, v29);
        *((_DWORD *)v14 + 2) |= 2u;
      }
      else
      {
        v42 = *((_DWORD *)v14 + 2);
        if ( (v42 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v14, 1, 0, 0LL);
          *((_DWORD *)v14 + 2) &= ~1u;
          v42 = *((_DWORD *)v14 + 2);
        }
        if ( (v42 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v14, 1LL);
          *((_DWORD *)v14 + 2) &= ~4u;
        }
      }
      *v14 = BugCheckParameter4;
      v30 = 34520;
      goto LABEL_34;
    }
    if ( v26 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v36 = *((_DWORD *)v14 + 2);
      if ( (v36 & 1) != 0 )
      {
        v46 = *(_DWORD *)(v19 + 8);
        if ( (v46 & 1) != 0 )
          PsBoostThreadIoEx(*v14, 1, 0, 0LL);
        else
          *(_DWORD *)(v19 + 8) = v46 | 1;
        *((_DWORD *)v14 + 2) &= ~1u;
        v36 = *((_DWORD *)v14 + 2);
      }
      if ( (v36 & 4) != 0 )
      {
        v47 = *(_DWORD *)(v19 + 8);
        if ( (v47 & 4) != 0 )
          PsBoostThreadIoQoS(*v14, 1LL);
        else
          *(_DWORD *)(v19 + 8) = v47 | 4;
        *((_DWORD *)v14 + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v19 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag((PVOID)*v14, 0x746C6644u);
        *(_DWORD *)(v19 + 8) |= 2u;
      }
    }
    else
    {
      v37 = *((_DWORD *)v14 + 2);
      if ( (v37 & 1) != 0 )
      {
        PsBoostThreadIoEx(*v14, 1, 0, 0LL);
        *((_DWORD *)v14 + 2) &= ~1u;
        v37 = *((_DWORD *)v14 + 2);
      }
      if ( (v37 & 4) == 0 )
        goto LABEL_50;
      PsBoostThreadIoQoS(*v14, 1LL);
      *((_DWORD *)v14 + 2) &= ~4u;
    }
    v37 = *((_DWORD *)v14 + 2);
LABEL_50:
    v30 = 34524;
    *(_DWORD *)(v19 + 8) = (v37 + (*(_DWORD *)(v19 + 8) & 0xFFFFFFF8)) ^ ((unsigned __int8)v37 ^ (unsigned __int8)*(_DWORD *)(v19 + 8)) & 7;
    *((_DWORD *)v14 + 2) &= 7u;
    *v14 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v30);
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
    v45 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v45 & 1) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v45 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v45 & 4) != 0 )
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
    KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v52);
  v31 = v52;
  if ( v52 )
    goto LABEL_65;
  if ( (__int64 *)_InterlockedCompareExchange64(v53, 0LL, (signed __int64)&v52) != &v52 )
  {
    v31 = KxWaitForLockChainValid(&v52);
LABEL_65:
    v52 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v31 + 8), 1uLL);
  }
LABEL_39:
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v48 = v33[6] - 1;
      v33[6] = v48;
      if ( !v48 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v35 = (unsigned __int8)v54;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v54 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v49 = KeGetCurrentPrcb();
        v50 = v49->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v51 = ((unsigned int)result & v50[5]) == 0;
        v50[5] &= result;
        if ( v51 )
          result = KiRemoveSystemWorkPriorityKick(v49);
      }
    }
  }
  __writecr8(v35);
  if ( v6 )
    return PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1);
  return result;
}
