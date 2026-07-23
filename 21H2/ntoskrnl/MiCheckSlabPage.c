/*
 * XREFs of MiCheckSlabPage @ 0x14037CB20
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiFinalizeImageHeaderPage @ 0x140298F3C (MiFinalizeImageHeaderPage.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 * Callees:
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiCompareSlabEntry @ 0x1403797A8 (MiCompareSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCheckSlabPage(__int64 a1, int a2, char a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 SlabAllocator; // rsi
  volatile LONG *v7; // r14
  KIRQL v8; // al
  __int64 v9; // rbx
  unsigned int v10; // edi
  unsigned __int64 v11; // rbp
  int v12; // esi
  int v13; // eax
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // edx
  bool v20; // zf
  __int64 v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = (unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v21 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  SlabAllocator = MiGetSlabAllocator(v5, a2, a3);
  v7 = (volatile LONG *)(SlabAllocator + 16);
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(SlabAllocator + 16));
  v9 = *(_QWORD *)SlabAllocator;
  v10 = 0;
  v11 = v8;
  if ( (*(_BYTE *)(SlabAllocator + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= SlabAllocator;
    else
      v9 = 0LL;
  }
  v12 = *(_BYTE *)(SlabAllocator + 8) & 1;
  while ( v9 )
  {
    v13 = MiCompareSlabEntry(&v21, v9);
    if ( v13 >= 0 )
    {
      if ( v13 <= 0 )
        break;
      v14 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v14 = *(_QWORD *)v9;
    }
    if ( v12 && v14 )
      v9 ^= v14;
    else
      v9 = v14;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  LOBYTE(v10) = v9 != 0;
  return v10;
}
