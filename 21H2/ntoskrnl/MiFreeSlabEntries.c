/*
 * XREFs of MiFreeSlabEntries @ 0x140238B20
 * Callers:
 *     MiDeleteSlabAllocator @ 0x140552DF0 (MiDeleteSlabAllocator.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140327620 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCompareSlabEntry @ 0x1403797A8 (MiCompareSlabEntry.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSlabEntry @ 0x140552E10 (MiFreeSlabEntry.c)
 *     MiIsFreeSlabPage @ 0x140553578 (MiIsFreeSlabPage.c)
 *     MiRemoveSlabEntry @ 0x1405535B0 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MiFreeSlabEntries(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r13
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  KIRQL v8; // al
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  _QWORD *v11; // rdi
  _QWORD *v12; // rax
  int v13; // ecx
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  __int64 *v17; // r15
  volatile LONG *v18; // r10
  unsigned __int64 v19; // r13
  __int64 v20; // r12
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v23; // rbx
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // rax
  _QWORD *v27; // rax
  unsigned __int64 v28; // rcx
  __int64 *v29; // rbx
  unsigned __int64 v30; // rdx
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  _DWORD *v33; // r9
  int v34; // eax
  bool v35; // zf
  unsigned __int8 v36; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v38; // r9
  int v39; // eax
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r9
  int v42; // eax
  _DWORD *v43; // r8
  __int64 v44; // [rsp+60h] [rbp+8h]
  int v45; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp+18h] BYREF

  v44 = a1;
  v4 = a1;
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
    return 0LL;
  v6 = 0LL;
  if ( !a3 )
  {
    LOBYTE(a1) = 1;
    if ( (unsigned __int64)(KiQueryUnbiasedInterruptTime(a1) - *(_QWORD *)(a2 + 104)) < 0x2FAF080 )
      return 0LL;
  }
  v46 = 0LL;
  if ( *(_QWORD *)(a2 + 64) )
  {
    v17 = 0LL;
    v18 = (volatile LONG *)(a2 + 16);
    v19 = 0LL;
    v20 = 0LL;
    while ( 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      ExAcquireSpinLockSharedAtDpcLevel(v18);
      v23 = *(_QWORD *)a2;
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
      {
        if ( v23 )
          v23 ^= a2;
        else
          v23 = 0LL;
      }
      v24 = *(_BYTE *)(a2 + 8) & 1;
      while ( v23 )
      {
        v25 = MiCompareSlabEntry(&v46, v23);
        if ( !v25 )
          goto LABEL_42;
        if ( v25 >= 0 )
        {
          v26 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v26 = *(_QWORD *)v23;
          v6 = v23;
        }
        if ( v24 && v26 )
          v23 ^= v26;
        else
          v23 = v26;
      }
      v23 = v6;
LABEL_42:
      v6 = 0LL;
      while ( v23 )
      {
        v20 = *(unsigned int *)(v23 + 136);
        if ( *(_DWORD *)(v23 + 136)
          && v20 + (unsigned __int64)*(unsigned int *)(v23 + 132) >= 0x200
          && (*(_DWORD *)(v23 + 140) & 1) == 0 )
        {
          v17 = (__int64 *)(48LL * *(_QWORD *)(v23 + 24) - 0x58000000000LL);
          v19 = 48LL * *(_QWORD *)(v23 + 32) - 0x58000000000LL;
          break;
        }
        v27 = *(_QWORD **)(v23 + 8);
        v28 = v23;
        if ( v27 )
        {
          do
          {
            v23 = (unsigned __int64)v27;
            v27 = (_QWORD *)*v27;
          }
          while ( v27 );
        }
        else
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !v23 || *(_QWORD *)v23 == v28 )
              break;
            v28 = v23;
          }
        }
      }
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
      if ( !v23 )
      {
LABEL_79:
        if ( CurrentIrql != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v36 = KeGetCurrentIrql();
              if ( v36 <= 0xFu && CurrentIrql <= 0xFu && v36 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v38 = CurrentPrcb->SchedulerAssist;
                v39 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v35 = (v39 & v38[5]) == 0;
                v38[5] &= v39;
                if ( v35 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        v4 = v44;
        goto LABEL_6;
      }
      if ( v20 )
        break;
LABEL_71:
      v46 = ((__int64)((unsigned __int128)((__int64)(v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
          + ((unsigned __int64)((unsigned __int128)((__int64)(v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
          + 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v31 = KeGetCurrentIrql();
          if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
          {
            v32 = KeGetCurrentPrcb();
            v33 = v32->SchedulerAssist;
            v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v35 = (v34 & v33[5]) == 0;
            v33[5] &= v34;
            if ( v35 )
              KiRemoveSystemWorkPriorityKick(v32);
          }
        }
      }
      __writecr8(CurrentIrql);
      v18 = (volatile LONG *)(a2 + 16);
      CurrentIrql = 17;
      if ( !*(_QWORD *)(a2 + 64) )
        goto LABEL_79;
    }
    v29 = v17 + 3;
    while ( 1 )
    {
      if ( (unsigned __int64)v17 > v19 )
        goto LABEL_71;
      v45 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v29, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v45);
        while ( *v29 < 0 );
      }
      v30 = (__int64)(v29 + 0xAFFFFFFFFDLL) / 48;
      if ( v30 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || !(unsigned int)MiIsPfnFromSlabAllocation(v17) )
      {
        break;
      }
      if ( (*((_BYTE *)v29 + 10) & 7) != 2 || *((_WORD *)v29 + 4) || *v17 >= 0 )
      {
        if ( !(unsigned int)MiIsFreeSlabPage(v17) )
          break;
      }
      else
      {
        MiUnlinkPageFromList((ULONG_PTR)v17);
        MiDiscardTransitionPteEx(v17, 0LL);
        --v20;
      }
LABEL_70:
      _InterlockedAnd64(v29, 0x7FFFFFFFFFFFFFFFuLL);
      v17 += 6;
      v29 += 6;
      if ( !v20 )
        goto LABEL_71;
    }
    v20 = 0LL;
    goto LABEL_70;
  }
LABEL_6:
  v7 = 0LL;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 16));
  *(_DWORD *)(a2 + 56) &= ~1u;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = v8;
  if ( (v9 & 1) == 0 )
  {
    v11 = *(_QWORD **)(a2 + 8);
    goto LABEL_13;
  }
  if ( v9 != 1 )
  {
    v11 = (_QWORD *)(v9 ^ (a2 | 1));
LABEL_13:
    while ( v11 )
    {
      v12 = (_QWORD *)v11[1];
      v14 = v11;
      v15 = v11;
      if ( v12 )
      {
        do
        {
          v11 = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      else
      {
        while ( 1 )
        {
          v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v11 || (_QWORD *)*v11 == v15 )
            break;
          v15 = v11;
        }
      }
      if ( (*((_DWORD *)v14 + 35) & 1) == 0 )
      {
        v13 = *((_DWORD *)v14 + 33);
        if ( v13 == 512 )
        {
          MiRemoveSlabEntry(v4, a2, v14);
          *v14 = v7;
          v7 = v14;
        }
        else if ( (unsigned int)(v13 + *((_DWORD *)v14 + 34)) >= 0x200 )
        {
          *(_DWORD *)(a2 + 56) |= 1u;
        }
      }
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v43 = v41->SchedulerAssist;
        v35 = (v42 & v43[5]) == 0;
        v43[5] &= v42;
        if ( v35 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(v10);
  while ( 1 )
  {
    v16 = v7;
    if ( !v7 )
      break;
    v7 = (_QWORD *)*v7;
    MiFreeSlabEntry(a2, v16);
  }
  return 0LL;
}
