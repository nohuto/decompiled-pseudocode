/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x14021E86C
 * Callers:
 *     MmExtendSection @ 0x1405E894C (MmExtendSection.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x1402FDE10 (KeAbPreWait.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r13
  _RTL_BALANCED_NODE *v6; // r15
  KIRQL v7; // al
  __int64 **v8; // rdi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockExclusive(v5);
    v8 = *(__int64 ***)(BugCheckParameter2 + 80);
    v9 = v7;
    if ( v8 )
    {
      do
      {
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v8[1]) != 0 )
          break;
        v8 = (__int64 **)*v8;
      }
      while ( v8 );
      if ( v8 )
      {
        v12 = KeAbPreAcquire(BugCheckParameter2, 0LL);
        v6 = (_RTL_BALANCED_NODE *)v12;
        if ( v12 )
          KeAbPreWait(v12);
      }
    }
    *(_DWORD *)(a2 + 20) = 0;
    *(_QWORD *)(a2 + 32) = a2 + 24;
    *(_QWORD *)(a2 + 24) = a2 + 24;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v8 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    KeWaitForGate(a2 + 16, 18LL);
    if ( v6 )
    {
      KeAbPreAcquire(BugCheckParameter2, v6);
      KeAbPostReleaseEx(BugCheckParameter2, (ULONG_PTR)v6);
    }
  }
  v10 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = v18->SchedulerAssist;
        v17 = ((unsigned int)result & v19[5]) == 0;
        v19[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v9);
  return result;
}
