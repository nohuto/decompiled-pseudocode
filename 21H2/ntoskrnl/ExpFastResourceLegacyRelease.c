/*
 * XREFs of ExpFastResourceLegacyRelease @ 0x14038E60C
 * Callers:
 *     ExReleaseResourceForThreadLite @ 0x140212B30 (ExReleaseResourceForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140357DC0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     ExReleaseFastResource @ 0x14038EA40 (ExReleaseFastResource.c)
 *     ExpFindFastOwnerEntryForThread @ 0x14038F810 (ExpFindFastOwnerEntryForThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFastResourceLegacyRelease(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // di
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v8; // r9
  __int64 v9; // r11
  void *v10; // rbx
  _DWORD *SchedulerAssist; // r10
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a4 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = a4;
  }
  LOBYTE(a4) = 1;
  FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter1, 0LL, a4);
  v10 = (void *)FastOwnerEntryForThread;
  if ( !FastOwnerEntryForThread )
    KeBugCheckEx(0xE3u, BugCheckParameter1, (ULONG_PTR)CurrentThread, 0LL, 0LL);
  *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
  if ( KiIrqlFlags )
  {
    if ( ((unsigned __int8)KiIrqlFlags & v8) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(v9 << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  ExReleaseFastResource(BugCheckParameter1, (ULONG_PTR)v10);
  ExFreePoolWithTag(v10, 0);
}
