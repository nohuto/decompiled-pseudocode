/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140260A6C
 * Callers:
 *     MiWorkingSetManager @ 0x140260C00 (MiWorkingSetManager.c)
 * Callees:
 *     MiStoreUpdateMemoryConditions @ 0x14025F284 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x14025F94C (MiUseLowIoPriorityForModifiedPages.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiWakeModifiedPageWriter @ 0x1402A0A84 (MiWakeModifiedPageWriter.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateReserveClusterInfo @ 0x1403BFEA8 (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // ebp
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  signed __int64 v21; // rax
  unsigned __int64 v22; // r11
  __int64 v23; // rax
  char v24; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  signed __int32 v30[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 7600);
  v5 = 0x4000LL;
  if ( *(_QWORD *)(a1 + 7104) >> 5 > 0x4000uLL )
    v5 = *(_QWORD *)(a1 + 7104) >> 5;
  v8 = *(_QWORD *)(a1 + 7104) >> 4;
  if ( v8 >= v5 )
    v8 = v5;
  v9 = *(_QWORD *)(a1 + 2240) + *(_QWORD *)(a1 + 2304);
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 6848) + 2384LL);
  v11 = 0LL;
  v12 = 20000LL;
  if ( v10 > 0x4E20 )
    v12 = v10;
  if ( v9 > v12 && v3 < v9 / 0xA )
    goto LABEL_9;
  if ( v3 >= v8 )
  {
    v11 = v8 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v11 = -1LL;
    MiWakeModifiedPageWriter(a1, v11);
    *(_QWORD *)(a1 + 816) = 0LL;
    *(_QWORD *)(a1 + 824) = 0LL;
    goto LABEL_9;
  }
  v10 = 15LL * (*(_QWORD *)(a1 + 824) >> 4);
  v19 = v10 + (v3 >> 4);
  *(_QWORD *)(a1 + 824) = v19;
  if ( v10 > v19 )
    goto LABEL_37;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 816) = 0LL;
    goto LABEL_9;
  }
  v20 = *(_QWORD *)(a1 + 816);
  v21 = v19 <= v3 ? v19 - v3 + v20 : v3 + v20 - v19;
  v10 = v21 + v3;
  *(_QWORD *)(a1 + 816) = v21 + v3;
  if ( v21 > (__int64)(v21 + v3) )
    goto LABEL_37;
  v22 = v8 >> 1;
  v23 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v22 < 0x369D0369D0369DLL )
    v23 = 600 * v22;
  if ( (__int64)v10 >= v23 )
    goto LABEL_37;
LABEL_9:
  *(_QWORD *)(a1 + 832) = a2;
  if ( (a3 & 7) == 0 )
  {
    v13 = 0;
    if ( (*(_BYTE *)(a1 + 876) & 1) != 0 )
    {
      _InterlockedOr(v30, 0);
      if ( a2 > 0x4000
        || (LOBYTE(v10) = 1, (unsigned __int64)(KiQueryUnbiasedInterruptTime(v10) - *(_QWORD *)(a1 + 864)) >= 0x47868C00) )
      {
        v13 = 1;
        *(_WORD *)(a1 + 876) &= ~1u;
      }
    }
    v14 = *(_DWORD *)(a1 + 6936);
    if ( v14 )
    {
      v15 = a1 + 6944;
      v16 = v14;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140CFB18C;
          *(_DWORD *)(v17 + 136) = 4 * dword_140CFB18C;
          if ( v13 )
          {
            v24 = *(_BYTE *)(v17 + 207);
            if ( (v24 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v24 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v29 = (v28 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v28;
                if ( v29 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v18);
        }
        v15 += 8LL;
        --v16;
      }
      while ( v16 );
    }
    if ( v13 )
      MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1160) )
    MiStoreUpdateMemoryConditions(a1);
}
