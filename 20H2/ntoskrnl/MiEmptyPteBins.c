/*
 * XREFs of MiEmptyPteBins @ 0x14023E170
 * Callers:
 *     MiAdjustPteBins @ 0x14023E040 (MiAdjustPteBins.c)
 *     MiCheckProcessorPteCache @ 0x1402856A0 (MiCheckProcessorPteCache.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiInsertCachedPte @ 0x140294850 (MiInsertCachedPte.c)
 * Callees:
 *     MiReplenishBitMap @ 0x14023E340 (MiReplenishBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1405524EC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  unsigned int v3; // esi
  int v4; // r13d
  __int64 v5; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r12d
  unsigned int i; // ebx
  volatile signed __int64 *v9; // r10
  signed __int64 v10; // rax
  int v12; // ecx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  bool v21; // zf
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v27; // r8
  signed __int32 v28[22]; // [rsp+0h] [rbp-58h] BYREF
  signed __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+10h]

  v30 = a2;
  v3 = 0;
  _InterlockedOr(v28, 0);
  v4 = KiTbFlushTimeStamp;
  v5 = *(_QWORD *)(a1 + 80);
  v6 = 0;
  v7 = 2 * (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 != &qword_140C4EDC0 )
    v7 = (unsigned __int16)KeNumberNodes;
  if ( v7 )
  {
    while ( 2 )
    {
      for ( i = 0; i < 8; ++i )
      {
        v9 = (volatile signed __int64 *)(v5 + 8LL * i);
        v10 = *v9;
        v29 = v10;
        if ( (_DWORD)v10 )
        {
          if ( (unsigned int)(v4 - v10) <= 2 )
          {
            if ( (v10 & 1) != 0 || (v12 = 0, (unsigned int)(v4 - v10) < 2) )
              v12 = 1;
          }
          else
          {
            v12 = 0;
          }
          if ( v12 != 1 || a2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              v10 = v29;
              a2 = v30;
              SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
            }
            if ( CurrentIrql == 2 && (__int64 *)a1 == &qword_140C4EDC0 && v6 >= v7 >> 1 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v27 = CurrentPrcb->SchedulerAssist;
                  v21 = (v27[5] & 0xFFFF0007) == 0;
                  v27[5] &= 0xFFFF0007;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(2uLL);
              return v3;
            }
            if ( v10 == _InterlockedCompareExchange64(v9, 0LL, v10) )
            {
              _InterlockedOr(v28, 0);
              if ( (__int64 *)a1 == &qword_140C4EDC0 && v6 >= v7 >> 1 )
              {
                v15 = MiReleaseLargePteMappings(a1, &v29);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v17 = KeGetCurrentIrql();
                    if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
                    {
                      v18 = KeGetCurrentPrcb();
                      v19 = v18->SchedulerAssist;
                      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v21 = (v20 & v19[5]) == 0;
                      v19[5] &= v20;
                      if ( v21 )
                        KiRemoveSystemWorkPriorityKick(v18);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
              else
              {
                v14 = MiReplenishBitMap(a1, HIDWORD(v29));
                v15 = v14;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v14);
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 64), -v15);
              a2 = v30;
              v3 = 1;
            }
            else
            {
              --i;
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v22 = KeGetCurrentIrql();
                if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
                {
                  v23 = KeGetCurrentPrcb();
                  v24 = v23->SchedulerAssist;
                  v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v21 = (v25 & v24[5]) == 0;
                  v24[5] &= v25;
                  if ( v21 )
                    KiRemoveSystemWorkPriorityKick(v23);
                  a2 = v30;
                }
              }
            }
            __writecr8(CurrentIrql);
          }
        }
      }
      v5 += 72LL;
      if ( ++v6 < v7 )
        continue;
      break;
    }
  }
  return v3;
}
