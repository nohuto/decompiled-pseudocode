/*
 * XREFs of HalpUnmaskInterrupt @ 0x14038CD20
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

__int64 __fastcall HalpUnmaskInterrupt(unsigned int a1, unsigned int a2)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v18 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, a1) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(a1, a2, 0LL);
    HalpInterruptLastProblem = 19;
    return (unsigned int)-1073741811;
  }
  LODWORD(v18) = LinesForGsiRange[4];
  HIDWORD(v18) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v18);
  if ( !v6 )
  {
    HalpInterruptLastProblem = 17;
    return (unsigned int)-1073741811;
  }
  v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  v9 = *(_DWORD *)(v8 + 12);
  if ( (a2 & 2) != 0 )
    v10 = v9 & 0xFFFFFFDF;
  else
    v10 = v9 | 0x10;
  *(_DWORD *)(v8 + 12) = v10;
  v11 = HalpInterruptSetLineStateInternal((__int64)v6, (__int64)&v18, v8);
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
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v11;
}
