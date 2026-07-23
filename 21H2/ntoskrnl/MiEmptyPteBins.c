/*
 * XREFs of MiEmptyPteBins @ 0x140319FD0
 * Callers:
 *     MiAdjustPteBins @ 0x140260278 (MiAdjustPteBins.c)
 *     MiCheckProcessorPteCache @ 0x1402CA790 (MiCheckProcessorPteCache.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiInsertCachedPte @ 0x1402EA450 (MiInsertCachedPte.c)
 * Callees:
 *     MiReplenishBitMap @ 0x140205D50 (MiReplenishBitMap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseLargePteMappings @ 0x1405541FC (MiReleaseLargePteMappings.c)
 */

__int64 __fastcall MiEmptyPteBins(__int64 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v4; // esi
  int v5; // r13d
  __int64 v6; // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int i; // ebx
  volatile signed __int64 *v10; // r10
  signed __int64 v11; // rax
  int v13; // ecx
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v28; // r8
  signed __int32 v29[22]; // [rsp+0h] [rbp-58h] BYREF
  signed __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+68h] [rbp+10h]

  v31 = a2;
  v2 = 0LL;
  v4 = 0;
  _InterlockedOr(v29, 0);
  v5 = KiTbFlushTimeStamp;
  v6 = *(_QWORD *)(a1 + 80);
  v7 = 0;
  v8 = 2 * (unsigned __int16)KeNumberNodes;
  if ( (__int64 *)a1 != &qword_140C4EF80 )
    v8 = (unsigned __int16)KeNumberNodes;
  if ( v8 )
  {
    while ( 2 )
    {
      for ( i = 0; i < 8; ++i )
      {
        v10 = (volatile signed __int64 *)(v6 + 8LL * i);
        v11 = *v10;
        v30 = v11;
        if ( (_DWORD)v11 )
        {
          if ( (unsigned int)(v5 - v11) <= 2 )
          {
            if ( (v11 & 1) != 0 || (v13 = 0, (unsigned int)(v5 - v11) < 2) )
              v13 = 1;
          }
          else
          {
            v13 = 0;
          }
          if ( v13 != 1 || a2 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              v11 = v30;
              a2 = v31;
              SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & 4;
              v2 = 0LL;
            }
            if ( CurrentIrql == 2 && (__int64 *)a1 == &qword_140C4EF80 && v7 >= v8 >> 1 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v28 = CurrentPrcb->SchedulerAssist;
                  v22 = (v28[5] & 0xFFFF0007) == 0;
                  v28[5] &= 0xFFFF0007;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              __writecr8(2uLL);
              return v4;
            }
            if ( v11 == _InterlockedCompareExchange64(v10, 0LL, v11) )
            {
              _InterlockedOr(v29, 0);
              if ( (unsigned int)(KiTbFlushTimeStamp - v30) <= 2
                && ((v30 & 1) != 0 || (unsigned int)(KiTbFlushTimeStamp - v30) < 2) )
              {
                v2 = 1LL;
              }
              if ( (__int64 *)a1 == &qword_140C4EF80 && v7 >= v8 >> 1 )
              {
                v16 = MiReleaseLargePteMappings(a1, &v30, v2);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v18 = KeGetCurrentIrql();
                    if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
                    {
                      v19 = KeGetCurrentPrcb();
                      v20 = v19->SchedulerAssist;
                      v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v22 = (v21 & v20[5]) == 0;
                      v20[5] &= v21;
                      if ( v22 )
                        KiRemoveSystemWorkPriorityKick(v19);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
              else
              {
                v15 = MiReplenishBitMap(a1, HIDWORD(v30), v2);
                v16 = v15;
                _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), v15);
              }
              _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 64), -v16);
              a2 = v31;
              v4 = 1;
              v2 = 0LL;
            }
            else
            {
              --i;
            }
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v23 = KeGetCurrentIrql();
                if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
                {
                  v24 = KeGetCurrentPrcb();
                  v25 = v24->SchedulerAssist;
                  v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                  v22 = (v26 & v25[5]) == 0;
                  v25[5] &= v26;
                  if ( v22 )
                    KiRemoveSystemWorkPriorityKick(v24);
                  a2 = v31;
                  v2 = 0LL;
                }
              }
            }
            __writecr8(CurrentIrql);
          }
        }
      }
      v6 += 72LL;
      if ( ++v7 < v8 )
        continue;
      break;
    }
  }
  return v4;
}
