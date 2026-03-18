/*
 * XREFs of MiInsertVadEvent @ 0x14030BA20
 * Callers:
 *     MiWaitForVadDeletion @ 0x140202010 (MiWaitForVadDeletion.c)
 *     MiCreateVadEventBitmap @ 0x1406BFC4C (MiCreateVadEventBitmap.c)
 *     MiCreateRotateView @ 0x1406E97B4 (MiCreateRotateView.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiAddSecureEntry @ 0x1407B9190 (MiAddSecureEntry.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiCreateLargePageVad @ 0x140982DE4 (MiCreateLargePageVad.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14030F870 (ExpAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140461A66 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertVadEvent(__int64 a1, unsigned __int64 *a2, int a3)
{
  _KPROCESS *Process; // rbx
  unsigned __int16 *v6; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9

  if ( a3 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (Process[1].IdealProcessor[30] & 7) == 2 )
      v6 = (unsigned __int16 *)&unk_140C53D00;
    else
      v6 = &Process[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v6, CurrentIrql);
    *((_DWORD *)v6 + 1) = 0;
    *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
    *(_QWORD *)(a1 + 56) = result;
    if ( CurrentIrql != 17 )
      return MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessors.StaticBitmap[26], CurrentIrql);
  }
  else
  {
    *a2 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF0uLL;
    result = (unsigned __int64)a2 | *(_DWORD *)(a1 + 56) & 0xF;
    *(_QWORD *)(a1 + 56) = result;
  }
  return result;
}
