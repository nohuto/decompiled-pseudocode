/*
 * XREFs of ExpSetResourceOwnerPointerEx @ 0x14035CC50
 * Callers:
 *     ExSetResourceOwnerPointerEx @ 0x14035CC30 (ExSetResourceOwnerPointerEx.c)
 *     ExSetResourceOwnerPointer @ 0x1405B3AA0 (ExSetResourceOwnerPointer.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x140223270 (ExpResourceEnforcesOwnershipTransfer.c)
 *     PsBoostThreadIoEx @ 0x140223950 (PsBoostThreadIoEx.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     PsBoostThreadIoQoS @ 0x14035D3B8 (PsBoostThreadIoQoS.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     PerfLogExecutiveResourceSetOwnerPointer @ 0x1405A9730 (PerfLogExecutiveResourceSetOwnerPointer.c)
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
  _QWORD *v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // r9
  unsigned int v23; // ecx
  unsigned __int64 v24; // rdx
  _QWORD *v25; // r8
  __int64 v26; // rax
  int v27; // r12d
  ULONG_PTR v28; // rax
  volatile signed __int64 *v29; // rdi
  signed __int64 v30; // rsi
  unsigned int v31; // eax
  __int64 v32; // rax
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  __int64 result; // rax
  unsigned __int64 v36; // rbx
  int v37; // eax
  int v38; // edx
  __int64 v39; // r15
  unsigned __int64 v40; // r11
  _QWORD *v41; // r9
  _QWORD *v42; // rcx
  int v43; // eax
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  bool v52; // zf
  __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v54; // [rsp+38h] [rbp-40h]
  __int64 v55; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  v55 = 0LL;
  v6 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  CurrentThread = (ULONG_PTR)KeGetCurrentThread();
  v8 = (volatile __int64 *)(BugCheckParameter1 + 96);
  v54 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v53 = 0LL;
  v9 = 65792;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LOBYTE(v55) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = CurrentPrcb->SchedulerAssist;
  if ( v12 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v45 = v12[6];
      v12[6] = v45 + 1;
      if ( v45 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v53, v8);
  }
  else
  {
    v13 = (_QWORD *)_InterlockedExchange64(v8, (__int64)&v53);
    if ( v13 )
      KxWaitForLockOwnerShip((__int64)&v53, v13);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v14 = *(_QWORD *)(BugCheckParameter1 + 48);
    v15 = (_QWORD *)(BugCheckParameter1 + 48);
    if ( v14 == BugCheckParameter4 )
    {
      v20 = BugCheckParameter1 + 48;
    }
    else
    {
      v16 = *(_QWORD *)(BugCheckParameter1 + 16);
      v17 = BugCheckParameter1 + 48;
      v18 = *(_QWORD *)(BugCheckParameter1 + 48) != 0LL;
      if ( v14 )
        v17 = 0LL;
      v19 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
      if ( v16 && (v20 = *(_QWORD *)(BugCheckParameter1 + 16) + 16LL, v18 < v19) )
      {
        while ( 1 )
        {
          v21 = v17;
          v22 = v17;
          if ( *(_QWORD *)v20 == BugCheckParameter4 )
            break;
          if ( *(_QWORD *)v20 )
          {
            if ( ++v18 == v19 )
              goto LABEL_16;
          }
          else
          {
            v17 = v20;
            if ( v22 )
              v17 = v21;
          }
          v20 += 16LL;
          if ( v20 == v16 + 16LL * *(unsigned int *)(v16 + 8) )
            goto LABEL_16;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = (v20 - v16) >> 4;
      }
      else
      {
LABEL_16:
        v20 = 0LL;
      }
    }
    if ( (CurrentThread & 3) != 0 )
      v23 = 0;
    else
      v23 = *(unsigned __int8 *)(CurrentThread + 649);
    if ( *v15 != CurrentThread )
    {
      v24 = *v15 != 0LL;
      if ( *v15 )
        v15 = 0LL;
      v25 = v15;
      if ( !v23
        || (v26 = *(_QWORD *)(BugCheckParameter1 + 16)) == 0
        || v23 >= *(_DWORD *)(v26 + 8)
        || (v15 = (_QWORD *)(v26 + 16LL * v23), *v15 != CurrentThread) )
      {
        v39 = *(_QWORD *)(BugCheckParameter1 + 16);
        v40 = *(unsigned int *)(BugCheckParameter1 + 64) + (unsigned __int64)*(unsigned int *)(BugCheckParameter1 + 72);
        if ( !v39 || (v15 = (_QWORD *)(v39 + 16), v24 >= v40) )
LABEL_94:
          KeBugCheckEx(0xE3u, BugCheckParameter1, CurrentThread, *(_QWORD *)(BugCheckParameter1 + 16), 4uLL);
        while ( 1 )
        {
          v41 = v25;
          v42 = v25;
          if ( *v15 == CurrentThread )
            break;
          if ( *v15 )
          {
            if ( ++v24 == v40 )
              goto LABEL_94;
          }
          else
          {
            v25 = v15;
            if ( v42 )
              v25 = v41;
          }
          v15 += 2;
          if ( v15 == (_QWORD *)(v39 + 16LL * *(unsigned int *)(v39 + 8)) )
            goto LABEL_94;
        }
        KeGetCurrentThread()->SchedulerApc.SpareByte0 = ((__int64)v15 - v39) >> 4;
      }
    }
    v27 = a3 & 1;
    if ( !v20 )
    {
      if ( v27 )
      {
        v28 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
          KeBugCheckEx(
            0x132u,
            BugCheckParameter1,
            *(_QWORD *)(BugCheckParameter1 + 16),
            CurrentThread,
            BugCheckParameter4);
        v29 = (volatile signed __int64 *)(v28 - 48);
        if ( ObpTraceFlags )
          ObpPushStackInfo(v28 - 48);
        v30 = _InterlockedIncrement64(v29);
        if ( v30 <= 1 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v29 + 6), 0x10uLL, v30);
        *((_DWORD *)v15 + 2) |= 2u;
      }
      else
      {
        v43 = *((_DWORD *)v15 + 2);
        if ( (v43 & 1) != 0 )
        {
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
          *((_DWORD *)v15 + 2) &= ~1u;
          v43 = *((_DWORD *)v15 + 2);
        }
        if ( (v43 & 4) != 0 )
        {
          PsBoostThreadIoQoS(*v15, 1LL);
          *((_DWORD *)v15 + 2) &= ~4u;
        }
      }
      *v15 = BugCheckParameter4;
      v31 = 34520;
      goto LABEL_34;
    }
    if ( v27 )
    {
      if ( (BugCheckParameter4 & 0xFFFFFFFFFFFFFFFCuLL) != CurrentThread )
        KeBugCheckEx(
          0x132u,
          BugCheckParameter1,
          *(_QWORD *)(BugCheckParameter1 + 16),
          CurrentThread,
          BugCheckParameter4);
      v37 = *((_DWORD *)v15 + 2);
      if ( (v37 & 1) != 0 )
      {
        v47 = *(_DWORD *)(v20 + 8);
        if ( (v47 & 1) != 0 )
          PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        else
          *(_DWORD *)(v20 + 8) = v47 | 1;
        *((_DWORD *)v15 + 2) &= ~1u;
        v37 = *((_DWORD *)v15 + 2);
      }
      if ( (v37 & 4) != 0 )
      {
        v48 = *(_DWORD *)(v20 + 8);
        if ( (v48 & 4) != 0 )
          PsBoostThreadIoQoS(*v15, 1LL);
        else
          *(_DWORD *)(v20 + 8) = v48 | 4;
        *((_DWORD *)v15 + 2) &= ~4u;
      }
      if ( (*(_DWORD *)(v20 + 8) & 2) == 0 )
      {
        ObfReferenceObjectWithTag((PVOID)*v15, 0x746C6644u);
        *(_DWORD *)(v20 + 8) |= 2u;
      }
    }
    else
    {
      v38 = *((_DWORD *)v15 + 2);
      if ( (v38 & 1) != 0 )
      {
        PsBoostThreadIoEx(*v15, 1, 0, 0LL);
        *((_DWORD *)v15 + 2) &= ~1u;
        v38 = *((_DWORD *)v15 + 2);
      }
      if ( (v38 & 4) == 0 )
        goto LABEL_50;
      PsBoostThreadIoQoS(*v15, 1LL);
      *((_DWORD *)v15 + 2) &= ~4u;
    }
    v38 = *((_DWORD *)v15 + 2);
LABEL_50:
    v31 = 34524;
    *(_DWORD *)(v20 + 8) = (v38 + (*(_DWORD *)(v20 + 8) & 0xFFFFFFF8)) ^ ((unsigned __int8)v38 ^ (unsigned __int8)*(_DWORD *)(v20 + 8)) & 7;
    *((_DWORD *)v15 + 2) &= 7u;
    *v15 = 0LL;
    --*(_DWORD *)(BugCheckParameter1 + 64);
LABEL_34:
    __incgsdword(v31);
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
    v46 = *(_DWORD *)(BugCheckParameter1 + 56);
    if ( (v46 & 1) != 0 )
    {
      PsBoostThreadIoEx(*(_QWORD *)(BugCheckParameter1 + 48), 1, 0, 0LL);
      *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
      v46 = *(_DWORD *)(BugCheckParameter1 + 56);
    }
    if ( (v46 & 4) != 0 )
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
    KiReleaseQueuedSpinLockInstrumented(&v53, retaddr);
    goto LABEL_39;
  }
  _m_prefetchw(&v53);
  v32 = v53;
  if ( v53 )
    goto LABEL_65;
  if ( (__int64 *)_InterlockedCompareExchange64(v54, 0LL, (signed __int64)&v53) != &v53 )
  {
    v32 = KxWaitForLockChainValid(&v53);
LABEL_65:
    v53 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v32 + 8), 1uLL);
  }
LABEL_39:
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v49 = v34[6] - 1;
      v34[6] = v49;
      if ( !v49 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  result = (unsigned int)KiIrqlFlags;
  v36 = (unsigned __int8)v55;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v55 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v50 = KeGetCurrentPrcb();
        v51 = v50->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
        v52 = ((unsigned int)result & v51[5]) == 0;
        v51[5] &= result;
        if ( v52 )
          result = KiRemoveSystemWorkPriorityKick(v50);
      }
    }
  }
  __writecr8(v36);
  if ( v6 )
    return PerfLogExecutiveResourceSetOwnerPointer(v9, BugCheckParameter1);
  return result;
}
