/*
 * XREFs of MiDeleteSubsectionLargePages @ 0x1405AED7C
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiGetLeafPfnBuddy @ 0x14024A35C (MiGetLeafPfnBuddy.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiConvertSmallPageRangeToLarge @ 0x14028CF90 (MiConvertSmallPageRangeToLarge.c)
 *     MiUpdateLargePageBitMap @ 0x1402C38D0 (MiUpdateLargePageBitMap.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeLargePages @ 0x1405C1CE0 (MiFreeLargePages.c)
 *     MmUnlockPreChargedPagedPool @ 0x140800560 (MmUnlockPreChargedPagedPool.c)
 *     MmReturnChargesToLockPagedPool @ 0x14096CA90 (MmReturnChargesToLockPagedPool.c)
 */

__int64 __fastcall MiDeleteSubsectionLargePages(__int64 *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 *v7; // r15
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rsi
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdx
  bool v14; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct _KPRCB *v23; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v25; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 LeafPfnBuddy; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp+10h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+18h]
  __int64 v32; // [rsp+A8h] [rbp+20h]

  v31 = a3;
  v30 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v32 = 0LL;
  v5 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( a2 )
  {
    do
    {
      v9 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v6 + 0x44000000000LL) >> 4);
      LeafPfnBuddy = MiGetLeafPfnBuddy(v6);
      v10 = (_QWORD *)LeafPfnBuddy;
      if ( a3 )
      {
        MiUpdateLargePageBitMap(*(_QWORD *)(qword_140C51F48 + 8 * ((v6[5] >> 43) & 0x3FFLL)), v9, 0x200uLL, 0, 1);
        if ( v6 < v6 + 3072 )
        {
          v11 = v6 + 3;
          v4 += 512LL;
          do
          {
            v12 = (unsigned __int8)MiLockPageInline((__int64)(v11 - 3));
            v13 = *v11 & 0xC000000000000000uLL;
            v14 = *((_WORD *)v11 + 4) == 2;
            *((_WORD *)v11 + 4) -= 2;
            *v11 = v13;
            if ( v14 )
            {
              _InterlockedOr(v27, 0);
              MiSetPfnTbFlushStamp((__int64)(v11 - 3), KiTbFlushTimeStamp, 1);
              MiInsertPageInFreeOrZeroedList(v9, 2);
              ++v5;
            }
            else
            {
              if ( (v13 & 0x4000000000000000LL) == 0 )
                *v11 = v13 | 0x4000000000000000LL;
              *((_BYTE *)v11 + 10) |= 7u;
            }
            _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
                  v14 = (v18 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v18;
                  if ( v14 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v12);
            v11 += 6;
            ++v9;
          }
          while ( v11 - 3 < v6 + 3072 );
          v10 = (_QWORD *)LeafPfnBuddy;
          v3 = v32;
        }
      }
      else
      {
        MiConvertSmallPageRangeToLarge(v9, 1);
        v3 += MiFreeLargePages(
                *(_QWORD *)(qword_140C51F48 + 8 * ((v6[5] >> 43) & 0x3FFLL)),
                (_DWORD)v6,
                (unsigned int)&v30,
                (unsigned int)&v30,
                3);
        v32 = v3;
        v4 += 512LL;
      }
      v6 = v10;
    }
    while ( v10 );
    v7 = a1;
  }
  v19 = 8LL * *((unsigned int *)v7 + 11);
  MmUnlockPreChargedPagedPool(v7[1], v19);
  MmReturnChargesToLockPagedPool(v7[1], v19);
  v20 = *v7;
  v21 = *(_WORD *)(*v7 + 60) & 0x3FF;
  v22 = *(_QWORD *)(qword_140C51F48 + 8 * v21);
  if ( v5 )
  {
    MiReturnCommit(*(_QWORD *)(qword_140C51F48 + 8 * v21), v5);
    if ( (ULONG_PTR *)v22 != &MiSystemPartition )
      goto LABEL_34;
    v23 = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)v23->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_34;
    do
    {
      if ( v5 + CachedResidentAvailable > 0x100 || v5 >= 0x80000 )
        break;
      v25 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v23->CachedResidentAvailable,
              CachedResidentAvailable + v5,
              CachedResidentAvailable);
      v14 = (_DWORD)CachedResidentAvailable == v25;
      CachedResidentAvailable = v25;
      if ( v14 )
        goto LABEL_35;
    }
    while ( v25 != -1 );
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&v23->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 += (int)CachedResidentAvailable - 192;
    }
    if ( v5 )
LABEL_34:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 16960), v5);
  }
LABEL_35:
  *(_QWORD *)(v20 + 120) ^= (*(_QWORD *)(v20 + 120) ^ (*(_QWORD *)(v20 + 120) - v4)) & 0xFFFFFFFFFLL;
  _InterlockedExchangeAdd64(
    (volatile signed __int64 *)(*(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v20 + 60) & 0x3FF)) + 17528LL),
    -v4);
  return v3;
}
