/*
 * XREFs of MiReferenceInPageFile @ 0x14027A818
 * Callers:
 *     MiIssueHardFault @ 0x14027A1F0 (MiIssueHardFault.c)
 *     MiPfExecuteReadList @ 0x1406F4E78 (MiPfExecuteReadList.c)
 * Callees:
 *     MiCanPageMove @ 0x140277C9C (MiCanPageMove.c)
 *     ObFastReferenceObject @ 0x14027A950 (ObFastReferenceObject.c)
 *     MiComputeImagePteIndex @ 0x14027B194 (MiComputeImagePteIndex.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v2 = *(__int64 **)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v5 = *v2;
  v6 = ObFastReferenceObject(v5 + 64, 1666411853LL);
  if ( !v6 )
  {
    v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 72));
    v6 = *(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 )
      ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v16 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
    v7 = *(_QWORD *)(a1 + 256);
    v8 = *(_QWORD *)(v5 + 96);
    if ( !v7 )
      v7 = a1 + 272;
    v9 = 48LL * *(_QWORD *)(v7 + 48) - 0x220000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v9, a2);
    if ( *(_QWORD *)(v8 + 32) )
    {
      *(_DWORD *)(a1 + 192) |= 0x10000u;
      if ( (MiFlags & 0x20000) != 0
        && (!MiCanPageMove(v9)
         || (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && (((unsigned __int8)*(_DWORD *)(v9 + 16) >> 5) & 2) != 0) )
      {
        *(_DWORD *)(a1 + 192) &= ~0x10000u;
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v6;
}
