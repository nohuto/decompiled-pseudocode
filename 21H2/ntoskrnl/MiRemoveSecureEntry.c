/*
 * XREFs of MiRemoveSecureEntry @ 0x140281480
 * Callers:
 *     MiUnmapLockedPagesInUserSpace @ 0x1406E2C14 (MiUnmapLockedPagesInUserSpace.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVadCore @ 0x1403106E0 (MiLockVadCore.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406F608C (MiUnsecureVirtualMemoryAgainstWrites.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  unsigned int v2; // edi
  int v3; // r13d
  _QWORD *v4; // r15
  _KPROCESS *Process; // r14
  unsigned __int16 *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 i; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf

  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].IdealProcessor[30] & 7) == 2 )
    v8 = (unsigned __int16 *)&unk_140C53D00;
  else
    v8 = &Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v8, CurrentIrql);
  *((_DWORD *)v8 + 1) = 0;
  for ( i = *(_QWORD *)(BugCheckParameter2 + 56) & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( v2 <= 1 && *(_DWORD *)(i + 64) == 2 )
      ++v2;
    if ( (_QWORD *)i == BugCheckParameter3 )
    {
      v3 = 1;
      if ( v4 )
        *v4 = *(_QWORD *)i;
      else
        *(_QWORD *)(BugCheckParameter2 + 56) = *(_QWORD *)i | *(_DWORD *)(BugCheckParameter2 + 56) & 0xF;
    }
    if ( v2 > 1 && v3 )
      break;
    v4 = (_QWORD *)i;
  }
  MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], CurrentIrql);
  if ( !v3 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v2 == 1 )
  {
    v12 = (unsigned __int8)MiLockVadCore(BugCheckParameter2, v11);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFF7);
    _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter2 + 48), 0xFFFFFFFC);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
  }
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
