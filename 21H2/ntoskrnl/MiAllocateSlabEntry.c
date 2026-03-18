/*
 * XREFs of MiAllocateSlabEntry @ 0x1405B0B24
 * Callers:
 *     MiReplenishSlabAllocator @ 0x1405B1974 (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiReInitializeFreeSlabPfn @ 0x14023C030 (MiReInitializeFreeSlabPfn.c)
 *     MiAbortCombineScan @ 0x140268998 (MiAbortCombineScan.c)
 *     RtlInterlockedSetClearRunEx @ 0x14026CCC0 (RtlInterlockedSetClearRunEx.c)
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x1402EB8BC (MiUpdateSlabPagePlaceholderState.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiGetSlabCurrentTime @ 0x1404192EC (MiGetSlabCurrentTime.c)
 *     MiSlabAllocatorRecentFailure @ 0x1405B19C8 (MiSlabAllocatorRecentFailure.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateSlabEntry(__int64 a1, __int64 a2, int a3)
{
  _QWORD *Pool; // rax
  _QWORD *v7; // rdi
  ULONG_PTR *v8; // r12
  int v9; // r14d
  unsigned int v10; // ebp
  unsigned __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int8 CurrentIrql; // bp
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v21; // r11
  int v22; // eax
  bool v23; // zf
  signed __int32 v24[8]; // [rsp+0h] [rbp-98h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

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
        if ( (int)MiFindContiguousPagesEx(
                    a2,
                    0LL,
                    qword_140C50840,
                    512LL,
                    0,
                    0x200uLL,
                    1u,
                    *(_DWORD *)(a1 + 52),
                    0x80000000,
                    a3 | 0x40000001u,
                    0,
                    0LL,
                    (__int64 *)v8) >= 0 )
        {
          v12 = *v8 >> 9;
          v7[4] = *v8 + 511;
          RtlInterlockedSetClearRunEx((__int64)&unk_140C58DD8, v12, 1uLL);
          v16 = 48 * *v8 - 0x220000000000LL;
          v17 = 48LL * v7[4] - 0x220000000000LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
          {
            SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
            v13 = (-1LL << (CurrentIrql + 1)) & 4;
            v14 = (unsigned int)v13 | SchedulerAssist[5];
            SchedulerAssist[5] = v14;
          }
          for ( ; v16 <= v17; v16 += 48LL )
          {
            v25 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v25, v13, v14, (__int64)SchedulerAssist);
              while ( *(__int64 *)(v16 + 24) < 0 );
            }
            _InterlockedOr(v24, 0);
            MiSetPfnTbFlushStamp(v16, KiTbFlushTimeStamp, 1);
            *(_WORD *)(v16 + 32) = 0;
            MiReInitializeFreeSlabPfn(v16, a1);
            if ( *(_DWORD *)(a1 + 48) <= 3u )
            {
              MiSetPfnIdentity(v16, 3);
              MiAbortCombineScan(v16);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
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
    *(_QWORD *)(a1 + 160) = MiGetSlabCurrentTime();
  }
  return 0LL;
}
