/*
 * XREFs of MiPurgeSlabEntries @ 0x1405B1568
 * Callers:
 *     MiFreeSlabEntries @ 0x14023A710 (MiFreeSlabEntries.c)
 * Callees:
 *     MiCompareSlabEntry @ 0x140248F48 (MiCompareSlabEntry.c)
 *     MiIsPfnFromSlabAllocation @ 0x140277C50 (MiIsPfnFromSlabAllocation.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUnlinkPageFromListEx @ 0x140326870 (MiUnlinkPageFromListEx.c)
 *     MiDiscardTransitionPteEx @ 0x1403941B0 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiIsFreeSlabPage @ 0x1405B1530 (MiIsFreeSlabPage.c)
 */

void __fastcall MiPurgeSlabEntries(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  volatile LONG *v6; // r10
  unsigned __int8 CurrentIrql; // r14
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v9; // rbx
  int v10; // esi
  int v11; // eax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v29; // [rsp+68h] [rbp+10h]
  unsigned __int64 v30; // [rsp+70h] [rbp+18h] BYREF

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 64);
    v4 = 0LL;
    v30 = 0LL;
    v5 = 0LL;
    v29 = 0LL;
    if ( v3 )
    {
      v6 = (volatile LONG *)(a1 + 16);
      do
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        ExAcquireSpinLockSharedAtDpcLevel(v6);
        v9 = *(_QWORD *)a1;
        if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
        {
          if ( v9 )
            v9 ^= a1;
          else
            v9 = 0LL;
        }
        v10 = *(_BYTE *)(a1 + 8) & 1;
        while ( v9 )
        {
          v11 = MiCompareSlabEntry(&v30, v9);
          if ( !v11 )
            goto LABEL_23;
          if ( v11 >= 0 )
          {
            v12 = *(_QWORD *)(v9 + 8);
          }
          else
          {
            v12 = *(_QWORD *)v9;
            v1 = v9;
          }
          if ( v10 && v12 )
            v9 ^= v12;
          else
            v9 = v12;
        }
        v9 = v1;
LABEL_23:
        v1 = 0LL;
        while ( 1 )
        {
          if ( !v9 )
          {
            v15 = v29;
            goto LABEL_35;
          }
          v5 = *(unsigned int *)(v9 + 136);
          if ( *(_DWORD *)(v9 + 136) )
          {
            if ( v5 + (unsigned __int64)*(unsigned int *)(v9 + 132) >= 0x200 && (*(_DWORD *)(v9 + 140) & 1) == 0 )
              break;
          }
          v13 = *(_QWORD **)(v9 + 8);
          v14 = v9;
          if ( v13 )
          {
            do
            {
              v9 = (unsigned __int64)v13;
              v13 = (_QWORD *)*v13;
            }
            while ( v13 );
          }
          else
          {
            while ( 1 )
            {
              v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( !v9 || *(_QWORD *)v9 == v14 )
                break;
              v14 = v9;
            }
          }
        }
        v4 = 48LL * *(_QWORD *)(v9 + 24) - 0x220000000000LL;
        v15 = 48LL * *(_QWORD *)(v9 + 32) - 0x220000000000LL;
        v29 = v15;
LABEL_35:
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
        if ( !v9 )
          break;
        if ( v5 )
        {
          while ( 1 )
          {
            if ( v4 > v15 )
              goto LABEL_52;
            v28 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v28, v16, v17, v18);
              while ( *(__int64 *)(v4 + 24) < 0 );
            }
            if ( 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x220000000000LL) >> 4) > qword_140C50840
              || (*(_QWORD *)(16 * ((__int64)(v4 + 0x220000000000LL) >> 4) - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0
              || !MiIsPfnFromSlabAllocation(v4) )
            {
              break;
            }
            if ( (*(_BYTE *)(v4 + 34) & 7) == 2
              && !*(_WORD *)(v4 + 32)
              && ((*(_QWORD *)(v4 + 40) >> 20) & 0x8000000000LL) != 0 )
            {
              MiUnlinkPageFromListEx(v4, 0);
              MiDiscardTransitionPteEx(v4, 0);
              --v5;
            }
            else if ( !MiIsFreeSlabPage(v4) )
            {
              break;
            }
LABEL_51:
            _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v4 += 48LL;
            if ( !v5 )
              goto LABEL_52;
          }
          v5 = 0LL;
          goto LABEL_51;
        }
LABEL_52:
        v30 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x220000000000LL) >> 4) + 1;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v22 & v21[5]) == 0;
              v21[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v6 = (volatile LONG *)(a1 + 16);
        CurrentIrql = 17;
      }
      while ( *(_QWORD *)(a1 + 64) );
      if ( CurrentIrql != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = v25->SchedulerAssist;
              v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v27 & v26[5]) == 0;
              v26[5] &= v27;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick((__int64)v25);
            }
          }
        }
        __writecr8(CurrentIrql);
      }
    }
  }
}
