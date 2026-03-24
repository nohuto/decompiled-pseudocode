/*
 * XREFs of MiAdjustModifiedPageLoad @ 0x140272ACC
 * Callers:
 *     MiWorkingSetManager @ 0x140272C60 (MiWorkingSetManager.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402712E4 (MiStoreUpdateMemoryConditions.c)
 *     MiUseLowIoPriorityForModifiedPages @ 0x1402719AC (MiUseLowIoPriorityForModifiedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiWakeModifiedPageWriter @ 0x14035BB54 (MiWakeModifiedPageWriter.c)
 *     MiUpdateReserveClusterInfo @ 0x1403BFA7C (MiUpdateReserveClusterInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiAdjustModifiedPageLoad(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int128 v13; // rax
  int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  signed __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  char v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v25; // zf
  signed __int32 v27[14]; // [rsp+0h] [rbp-38h] BYREF

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
  if ( v9 > v12 )
  {
    v13 = v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v3 < *((_QWORD *)&v13 + 1) >> 3 )
      goto LABEL_9;
  }
  if ( v3 >= v8 )
  {
    v11 = v8 >> 1;
LABEL_37:
    if ( !MiUseLowIoPriorityForModifiedPages(a1) )
      v11 = -1LL;
    *(_QWORD *)&v13 = MiWakeModifiedPageWriter(a1, v11);
    *(_QWORD *)(a1 + 816) = 0LL;
    *(_QWORD *)(a1 + 824) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v13 = *(_QWORD *)(a1 + 824) >> 4;
  *((_QWORD *)&v13 + 1) = 15 * v13 + (v3 >> 4);
  *(_QWORD *)(a1 + 824) = *((_QWORD *)&v13 + 1);
  if ( (unsigned __int64)(15 * v13) > *((_QWORD *)&v13 + 1) )
    goto LABEL_37;
  if ( v3 < 0x320 )
  {
    *(_QWORD *)(a1 + 816) = 0LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v13 = *(_QWORD *)(a1 + 816);
  v19 = *((_QWORD *)&v13 + 1) <= v3 ? *((_QWORD *)&v13 + 1) - v3 + v13 : v3 + v13 - *((_QWORD *)&v13 + 1);
  v20 = v19 + v3;
  *(_QWORD *)(a1 + 816) = v19 + v3;
  if ( v19 > (__int64)(v19 + v3) )
    goto LABEL_37;
  v21 = v8 >> 1;
  *(_QWORD *)&v13 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v21 < 0x369D0369D0369DLL )
    *(_QWORD *)&v13 = 600 * v21;
  if ( v20 >= (__int64)v13 )
    goto LABEL_37;
LABEL_9:
  *(_QWORD *)(a1 + 832) = a2;
  if ( (a3 & 7) == 0 )
  {
    v14 = 0;
    if ( (*(_BYTE *)(a1 + 876) & 1) != 0 )
    {
      _InterlockedOr(v27, 0);
      if ( a2 > 0x4000 || (unsigned __int64)(KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 864)) >= 0x47868C00 )
      {
        v14 = 1;
        *(_WORD *)(a1 + 876) &= ~1u;
      }
    }
    *(_QWORD *)&v13 = *(unsigned int *)(a1 + 6936);
    if ( (_DWORD)v13 )
    {
      v15 = a1 + 6944;
      v16 = (unsigned int)v13;
      do
      {
        v17 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(*(_QWORD *)v15 + 204LL) & 0x40) == 0 )
        {
          v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v17 + 232));
          if ( *(_DWORD *)(v17 + 132) != *(_DWORD *)(v17 + 128) )
            *(_DWORD *)(v17 + 124) = dword_140CFB18C;
          *(_DWORD *)(v17 + 136) = 4 * dword_140CFB18C;
          if ( v14 )
          {
            v22 = *(_BYTE *)(v17 + 207);
            if ( (v22 & 1) != 0 )
              *(_BYTE *)(v17 + 207) = v22 & 0xFE;
          }
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 232));
          *(_QWORD *)&v13 = (unsigned int)KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              *(_QWORD *)&v13 = KeGetCurrentIrql();
              if ( (unsigned __int8)v13 <= 0xFu && (unsigned __int8)v18 <= 0xFu && (unsigned __int8)v13 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                *(_QWORD *)&v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
                v25 = ((unsigned int)v13 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v13;
                if ( v25 )
                  *(_QWORD *)&v13 = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
    if ( v14 )
      *(_QWORD *)&v13 = MiUpdateReserveClusterInfo(a1, 0LL, 0LL);
  }
  if ( *(_DWORD *)(a1 + 1160) )
    *(_QWORD *)&v13 = MiStoreUpdateMemoryConditions(a1);
  return v13;
}
