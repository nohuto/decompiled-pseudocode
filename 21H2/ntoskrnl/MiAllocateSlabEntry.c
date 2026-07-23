/*
 * XREFs of MiAllocateSlabEntry @ 0x1403929B8
 * Callers:
 *     MiReplenishSlabAllocator @ 0x140392964 (MiReplenishSlabAllocator.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     RtlInterlockedSetClearRunEx @ 0x1402CD590 (RtlInterlockedSetClearRunEx.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375478 (MiUpdateSlabPagePlaceholderState.c)
 *     MiReInitializeFreeSlabPfn @ 0x14037553C (MiReInitializeFreeSlabPfn.c)
 *     MiSlabAllocatorRecentFailure @ 0x140392C14 (MiSlabAllocatorRecentFailure.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *Pool; // rax
  _QWORD *v7; // rdi
  ULONG_PTR *v8; // r13
  int v9; // r14d
  unsigned int v10; // esi
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v23; // r11
  int v24; // eax
  bool v25; // zf
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  int v27; // [rsp+A8h] [rbp+20h] BYREF

  if ( !(unsigned int)MiSlabAllocatorRecentFailure(a1) )
  {
    Pool = MiAllocatePool(64, 0x90uLL, 0x6553694Du);
    v7 = Pool;
    if ( Pool )
    {
      Pool[5] = a1;
      Pool[7] = Pool + 8;
      v8 = Pool + 3;
      *((_DWORD *)Pool + 12) = 512;
      v9 = a3 & 0x40;
      *((_DWORD *)Pool + 33) = 512;
      v10 = v9 != 0;
      if ( (a3 & 0x40) == 0 )
        a3 |= 0x40u;
      do
      {
        if ( (int)MiFindContiguousPages(
                    a2,
                    0LL,
                    0xFFFFFFFFFuLL,
                    0x200uLL,
                    0x200uLL,
                    1u,
                    0x80000000,
                    0x80000000,
                    a3 | 0x40000001u,
                    0LL,
                    (__int64 *)v8) >= 0 )
        {
          v11 = *v8 >> 9;
          v7[4] = *v8 + 511;
          RtlInterlockedSetClearRunEx((__int64)&unk_140C525C0, v11, 1uLL);
          v15 = 48 * *v8 - 0x58000000000LL;
          v16 = 48LL * v7[4] - 0x58000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v12 = (-1LL << (CurrentIrql + 1)) & 4;
            v13 = (unsigned int)v12 | SchedulerAssist[5];
            SchedulerAssist[5] = v13;
          }
          if ( v15 <= v16 )
          {
            v18 = v15 + 24;
            do
            {
              v27 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v27, v12, v13, (__int64)SchedulerAssist);
                while ( *(__int64 *)v18 < 0 );
              }
              _InterlockedOr(v26, 0);
              v19 = (*(_QWORD *)v18 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
              *(_WORD *)(v18 + 8) = 0;
              *(_QWORD *)v18 ^= v19;
              MiReInitializeFreeSlabPfn(v18 - 24, a1);
              if ( !*(_DWORD *)(a1 + 48) )
              {
                *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0x8FFFFFFFFFFFFFFFuLL | 0x3000000000000000LL;
                MiAbortCombineScan(v18 - 24, v12, v13);
              }
              _InterlockedAnd64((volatile signed __int64 *)v18, 0x7FFFFFFFFFFFFFFFuLL);
              v18 += 48LL;
            }
            while ( v18 - 24 <= v16 );
          }
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v23 = CurrentPrcb->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v25 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          MiUpdateSlabPagePlaceholderState(a1, *v8, 512LL, 1);
          return v7;
        }
        a3 &= ~0x40u;
        ++v10;
      }
      while ( v10 < 2 );
      ExFreePoolWithTag(v7, 0);
      if ( v9 )
        return 0LL;
    }
    *(_QWORD *)(a1 + 112) = KiQueryUnbiasedInterruptTime();
  }
  return 0LL;
}
