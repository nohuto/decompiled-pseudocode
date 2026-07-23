/*
 * XREFs of MiFreePageToSlabAllocator @ 0x140375280
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiFreePageToSlabEntry @ 0x1403753D0 (MiFreePageToSlabEntry.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140375478 (MiUpdateSlabPagePlaceholderState.c)
 *     MiReInitializeFreeSlabPfn @ 0x14037553C (MiReInitializeFreeSlabPfn.c)
 *     MiCompareSlabEntry @ 0x1403797A8 (MiCompareSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreePageToSlabAllocator(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  KIRQL v8; // al
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  int v11; // ebp
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = 0;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( !v3 )
      return 0LL;
    v3 ^= a2;
  }
  if ( !v3 )
    return 0LL;
  v19 = (a3 + 0x58000000000LL) / 48;
  v8 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a2 + 16));
  v9 = *(_QWORD *)a2;
  v10 = v8;
  if ( (*(_BYTE *)(a2 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= a2;
    else
      v9 = 0LL;
  }
  v11 = *(_BYTE *)(a2 + 8) & 1;
  if ( v9 )
  {
    do
    {
      v12 = MiCompareSlabEntry(&v19, v9);
      if ( v12 >= 0 )
      {
        if ( v12 <= 0 )
          break;
        v13 = *(_QWORD *)(v9 + 8);
      }
      else
      {
        v13 = *(_QWORD *)v9;
      }
      if ( v11 && v13 )
        v9 ^= v13;
      else
        v9 = v13;
    }
    while ( v9 );
    if ( v9 )
    {
      MiReInitializeFreeSlabPfn(a3, a2);
      MiUpdateSlabPagePlaceholderState(a2, v19, 1LL);
      MiFreePageToSlabEntry(a3, v9, a2);
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a2 + 16));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v10);
  LOBYTE(v4) = v9 != 0;
  return v4;
}
