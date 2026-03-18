/*
 * XREFs of MiAddWorkingSetEntries @ 0x1403234A0
 * Callers:
 *     MiEmptyDeferredWorkingSetEntries @ 0x14022FC80 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiAllocateWsle @ 0x140322F10 (MiAllocateWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x140333AC0 (MiMakeSystemCacheRangeValid.c)
 * Callees:
 *     MiIsDriverPage @ 0x1402189A0 (MiIsDriverPage.c)
 *     MiGetStandbyRepurposed @ 0x140266998 (MiGetStandbyRepurposed.c)
 *     MiCountWslesInPageTable @ 0x140274720 (MiCountWslesInPageTable.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1403119F0 (KxAcquireQueuedSpinLock.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

char __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  volatile signed __int32 *v11; // r12
  _DWORD *v12; // r14
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v15; // ett
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  char v19; // r8
  unsigned __int64 v20; // r11
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // r15d
  _QWORD *v24; // rbp
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r14
  int v27; // r15d
  unsigned __int8 v28; // bp
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  unsigned __int64 *v31; // rdx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // r9
  unsigned __int8 v34; // cl
  unsigned __int64 v35; // rax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  unsigned __int64 v38; // r8
  __int64 v39; // rax
  unsigned __int64 *v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rbp
  __int64 *v45; // r14
  __int64 *v46; // r15
  unsigned __int64 v47; // rtt
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rtt
  unsigned __int64 v56; // rtt
  unsigned __int8 v57; // cl
  int v58; // edx
  __int64 v59; // rax
  __int64 **v60; // rcx
  __int64 v61; // rax
  _DWORD *v62; // rcx
  int v63; // eax
  int v64; // eax
  __int64 v65; // r13
  __int64 v66; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v68; // rcx
  struct _LIST_ENTRY *v69; // rcx
  __int64 v70; // rcx
  int v73; // [rsp+20h] [rbp-98h]
  __int64 v74; // [rsp+30h] [rbp-88h] BYREF
  __int64 v75; // [rsp+38h] [rbp-80h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v77[2]; // [rsp+58h] [rbp-60h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v8 = a2;
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), a3);
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    _InterlockedExchangeAdd(&dword_140C53D80, a3);
  __addgsdword(0x2E90u, a3);
  v9 = 0xFFFFF68000000000uLL;
  if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
    v10 = a3;
  else
    v10 = 0LL;
  v11 = (volatile signed __int32 *)&unk_140C53D40;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v12 = &unk_140C53D40;
  else
    v12 = (_DWORD *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(v9) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v12, v9);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v63 = SchedulerAssist[6];
        SchedulerAssist[6] = v63 + 1;
        if ( v63 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v9 = 0xFFFFF68000000000uLL;
        }
      }
    }
    _m_prefetchw(v12);
    v15 = *v12 & 0x7FFFFFFF;
    if ( v15 != _InterlockedCompareExchange(v12, v15 + 1, v15) )
    {
      v62 = CurrentPrcb->SchedulerAssist;
      if ( v62 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v64 = v62[6] - 1;
          v62[6] = v64;
          if ( !v64 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v9) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v12, v9);
    }
    v4 = a4;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 144), v5);
  if ( v10 )
  {
    v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 128), v10);
    v17 = *(_QWORD *)(a1 + 160);
    v18 = v10 + v16;
    if ( v18 > v17 )
    {
      do
      {
        v47 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 160), v18, v17);
      }
      while ( v47 != v17 && v18 > v17 );
    }
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    _InterlockedExchangeAdd64(&qword_140C53D88, v5);
    if ( v10 )
    {
      v53 = qword_140C53D98;
      v54 = v10 + _InterlockedExchangeAdd64(&qword_140C53D90, v10);
      if ( v54 > qword_140C53D98 )
      {
        do
        {
          v55 = v53;
          v53 = _InterlockedCompareExchange64(&qword_140C53D98, v54, v53);
        }
        while ( v55 != v53 && v54 > v53 );
      }
    }
  }
  if ( (v4 & 2) != 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 152), v5);
    if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 136), v5);
  }
  v19 = *(_BYTE *)(a1 + 184);
  if ( (v19 & 7u) >= 2 )
  {
    v48 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v49 = (v19 & 7u) - 2;
    v50 = *(_QWORD *)(v48 + 6784) + *(_QWORD *)(a1 + 144);
    v51 = v48 + 8 * v49;
    v52 = *(_QWORD *)(v51 + 6792);
    if ( v50 > v52 )
    {
      do
      {
        *(_QWORD *)(v51 + 6792) = v50;
        v56 = v52;
        v52 = _InterlockedCompareExchange64((volatile signed __int64 *)(v51 + 6792), v50, v52);
      }
      while ( v56 != v52 && v50 > v52 );
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v6 < PsNtosImageEnd && v6 >= PsNtosImageBase || v6 < PsHalImageEnd && v6 >= PsHalImageBase) )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4F4F8, v5);
      }
      else if ( (unsigned int)MiGetSystemRegionType(v6) == 12
             && MiIsDriverPage(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 1) )
      {
        _InterlockedExchangeAdd((_DWORD *)&xmmword_140C4F4F8 + 1, v5);
      }
    }
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_28;
  v20 = *(_QWORD *)(a1 + 128);
  if ( v20 <= *(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 188) & 2) != 0 )
    goto LABEL_28;
  v21 = *(_QWORD *)(a1 + 144);
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v21 > v22 )
  {
    v23 = 0;
    v24 = *(_QWORD **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v25 = v24[2090];
    if ( !v5 || ((v21 ^ (v5 + v21)) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
    {
      v26 = v24[2112];
      if ( v26 < v25 >> 4 && v21 >= v25 >> 4 )
      {
        v4 = a4;
LABEL_83:
        _InterlockedOr((volatile signed __int32 *)(a1 + 188), 2u);
        goto LABEL_28;
      }
      v23 = 1;
    }
    else
    {
      v26 = -1LL;
    }
    if ( v21 - v22 < 3 * (v25 >> 2) )
      goto LABEL_26;
    v65 = v24[2075];
    if ( (unsigned int)MiGetStandbyRepurposed(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)), 1u) == *(_DWORD *)(v65 + 44) )
    {
      v8 = v6;
LABEL_26:
      v4 = a4;
      goto LABEL_27;
    }
    if ( !v23 )
      v26 = v24[2112];
    v66 = *(_QWORD *)(v65 + 2384);
    v4 = a4;
    v8 = v6;
    if ( v26 < 8 * v66 )
      goto LABEL_83;
  }
LABEL_27:
  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 && v20 > *(_QWORD *)(a1 + 120) )
    goto LABEL_83;
LABEL_28:
  v27 = v4 & 4;
  v73 = v27;
  if ( v27 && v5 )
  {
    do
    {
      if ( v6 < 0xFFFFF68000000000uLL || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = HIBYTE(*(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)) & 0xF;
        v29 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v30 = *(_QWORD *)v29;
        if ( v29 >= 0xFFFFF6FB7DBED000uLL
          && v29 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v30 & 1) != 0
          && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            v68 = *((_QWORD *)&Flink->Flink + ((v29 >> 3) & 0x1FF));
            if ( (v68 & 0x20) != 0 )
              v30 |= 0x20uLL;
            if ( (v68 & 0x42) != 0 )
              v30 |= 0x42uLL;
          }
        }
        v74 = v30;
        v31 = (unsigned __int64 *)(48
                                 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v74) >> 12) & 0xFFFFFFFFFFLL)
                                 - 0x220000000000LL);
        v32 = v28;
        v33 = *v31;
        v34 = (*v31 >> 14) & 7;
        if ( ((*v31 >> 4) & 0x3FF) != 0 )
        {
          if ( v28 == v34 )
          {
            *v31 = v33 ^ ((unsigned __int16)v33 ^ (unsigned __int16)(16 * (((*v31 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v28 > v34 )
          {
            *v31 = v33 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v28 & 7) << 14) | 0x10;
            v32 = v28;
          }
        }
      }
      else
      {
        v32 = (*(_BYTE *)(48
                        * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                        - 0x220000000000LL) >> 1) & 7;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8LL * v32 + 40), 1uLL);
      if ( v32 == 7 )
      {
        v41 = *(_QWORD *)(a1 + 96);
        v42 = *(unsigned __int16 *)(a1 + 174);
        memset(&LockHandle, 0, sizeof(LockHandle));
        v43 = *(_QWORD *)(qword_140C51F48 + 8 * v42);
        v44 = *(_QWORD *)(v43 + 16600);
        if ( v41 >= *(_QWORD *)(v44 + 56) )
        {
          v45 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v46 = (__int64 *)(v43 + 16608);
            if ( *(__int64 **)(v43 + 16608) != v45 )
            {
              LockHandle.LockQueue.Next = 0LL;
              LockHandle.LockQueue.Lock = &SpinLock;
              KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&SpinLock);
              if ( *(_BYTE *)(v44 + 53) || (v59 = *v45) == 0 )
              {
                *(_BYTE *)(v44 + 54) = 1;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              else
              {
                v60 = *(__int64 ***)(a1 + 32);
                if ( *(__int64 **)(v59 + 8) != v45
                  || *v60 != v45
                  || (*v60 = (__int64 *)v59, *(_QWORD *)(v59 + 8) = v60, v61 = *v46, *(__int64 **)(*v46 + 8) != v46) )
                {
                  __fastfail(3u);
                }
                *v45 = v61;
                *(_QWORD *)(a1 + 32) = v46;
                *(_QWORD *)(v61 + 8) = v45;
                *v46 = (__int64)v45;
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
            }
          }
        }
      }
      v6 += 4096LL;
      --v5;
    }
    while ( v5 );
    v27 = v73;
  }
  LOBYTE(v35) = *(_BYTE *)(a1 + 184) & 7;
  if ( (_BYTE)v35 != 2 )
    v11 = (volatile signed __int32 *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    LOBYTE(v35) = ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
  }
  else
  {
    _InterlockedAnd(v11, 0xBFFFFFFF);
    _InterlockedDecrement(v11);
  }
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      LODWORD(v35) = v37[6] - 1;
      v37[6] = v35;
      if ( !(_DWORD)v35 )
        LOBYTE(v35) = KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  if ( v27 )
  {
    if ( v8 < 0xFFFFF68000000000uLL || (LOBYTE(v35) = -1, v8 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v38 = ((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v39 = *(_QWORD *)v38;
      if ( v38 >= 0xFFFFF6FB7DBED000uLL
        && v38 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v39 & 1) != 0
        && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
      {
        v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v69 )
        {
          v70 = *((_QWORD *)&v69->Flink + ((v38 >> 3) & 0x1FF));
          if ( (v70 & 0x20) != 0 )
            v39 |= 0x20uLL;
          if ( (v70 & 0x42) != 0 )
            v39 |= 0x42uLL;
        }
      }
      v75 = v39;
      v40 = (unsigned __int64 *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75) >> 12) & 0xFFFFFFFFFFLL)
                               - 0x220000000000LL);
      v35 = (unsigned __int64)*(unsigned int *)v40 >> 4;
      if ( (v35 & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(0xFFFFFFFFFFLL, v8, v77);
        v57 = 8;
        while ( 1 )
        {
          LOBYTE(v35) = --v57;
          v58 = *((_DWORD *)v77 + v57);
          if ( v58 )
            break;
          if ( !v57 )
            return v35;
        }
        v35 = *v40 & 0xFFFFFFFFFFFE000FuLL;
        *v40 = v35 | (16 * (v58 & 0x3FF | ((unsigned __int64)(v57 & 7) << 10)));
      }
    }
  }
  return v35;
}
