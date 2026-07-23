/*
 * XREFs of HalpMaskInterrupt @ 0x1403A70E0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140378AF8 (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x1404D105C (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 */

__int64 __fastcall HalpMaskInterrupt(unsigned int a1, unsigned int a2)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v19 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, a1) )
    {
      LOBYTE(v13) = 1;
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(a1, a2, v13);
    }
    HalpInterruptLastProblem = 19;
    return (unsigned int)-1073741811;
  }
  LODWORD(v19) = LinesForGsiRange[4];
  HIDWORD(v19) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v19);
  if ( !v6 )
    return (unsigned int)-1073741811;
  v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  v9 = *(_DWORD *)(v8 + 12);
  if ( (a2 & 1) != 0 )
    v10 = v9 | 0x20;
  else
    v10 = v9 & 0xFFFFFFEF;
  *(_DWORD *)(v8 + 12) = v10;
  v11 = HalpInterruptSetLineStateInternal((__int64)v6, (__int64)&v19, v8);
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v11;
}
