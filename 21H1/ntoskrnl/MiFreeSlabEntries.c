/*
 * XREFs of MiFreeSlabEntries @ 0x140308F00
 * Callers:
 *     MiDeleteSlabAllocator @ 0x14054D0C0 (MiDeleteSlabAllocator.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiCompareSlabEntry @ 0x140376CB8 (MiCompareSlabEntry.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeSlabEntry @ 0x14054D0E0 (MiFreeSlabEntry.c)
 *     MiIsFreeSlabPage @ 0x14054D848 (MiIsFreeSlabPage.c)
 *     MiRemoveSlabEntry @ 0x14054D880 (MiRemoveSlabEntry.c)
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
  unsigned __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rbx
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v40; // r9
  int v41; // eax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  int v44; // eax
  _DWORD *v45; // r8
  int v47; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp+18h] BYREF

  v4 = a1;
  if ( (*(_DWORD *)(a2 + 56) & 1) == 0 )
    return 0LL;
  v6 = 0LL;
  if ( !a3 && (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a2 + 104)) < 0x2FAF080 )
    return 0LL;
  v48 = 0LL;
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
        v25 = MiCompareSlabEntry(&v48, v23);
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
              v38 = KeGetCurrentIrql();
              if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v40 = CurrentPrcb->SchedulerAssist;
                v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v37 = (v41 & v40[5]) == 0;
                v40[5] &= v41;
                if ( v37 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        v4 = a1;
        goto LABEL_6;
      }
      if ( v20 )
        break;
LABEL_71:
      v48 = ((__int64)((unsigned __int128)((__int64)(v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
          + ((unsigned __int64)((unsigned __int128)((__int64)(v19 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
          + 1;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v33 = KeGetCurrentIrql();
          if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
          {
            v34 = KeGetCurrentPrcb();
            v35 = v34->SchedulerAssist;
            v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v37 = (v36 & v35[5]) == 0;
            v35[5] &= v36;
            if ( v37 )
              KiRemoveSystemWorkPriorityKick(v34);
          }
        }
      }
      __writecr8(CurrentIrql);
      v18 = (volatile LONG *)(a2 + 16);
      CurrentIrql = 17;
      if ( !*(_QWORD *)(a2 + 64) )
        goto LABEL_79;
    }
    v32 = v17 + 3;
    while ( 1 )
    {
      if ( (unsigned __int64)v17 > v19 )
        goto LABEL_71;
      v47 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v32, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v47, v29, v30, v31);
        while ( *v32 < 0 );
      }
      v29 = (__int64)(v32 + 0xAFFFFFFFFDLL) / 48;
      if ( v29 > 0xFFFFFFFFFLL
        || (*(_QWORD *)(48 * v29 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0
        || !MiIsPfnFromSlabAllocation((__int64)v17) )
      {
        break;
      }
      if ( (*((_BYTE *)v32 + 10) & 7) != 2 || *((_WORD *)v32 + 4) || *v17 >= 0 )
      {
        if ( !(unsigned int)MiIsFreeSlabPage(v17) )
          break;
      }
      else
      {
        MiUnlinkPageFromList((ULONG_PTR)v17, 0);
        MiDiscardTransitionPteEx(v17, 0LL);
        --v20;
      }
LABEL_70:
      _InterlockedAnd64(v32, 0x7FFFFFFFFFFFFFFFuLL);
      v17 += 6;
      v32 += 6;
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
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v45 = v43->SchedulerAssist;
        v37 = (v44 & v45[5]) == 0;
        v45[5] &= v44;
        if ( v37 )
          KiRemoveSystemWorkPriorityKick(v43);
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
