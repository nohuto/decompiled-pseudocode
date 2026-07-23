/*
 * XREFs of HalDisableInterrupt @ 0x140376DD0
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x140376D44 (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14051944C (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140378A70 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140378AF8 (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDisableSecondaryInterrupt @ 0x1404D0DEC (HalpDisableSecondaryInterrupt.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned int v16; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v17; // [rsp+34h] [rbp+Ch]

  if ( *a1 != 1 )
  {
LABEL_11:
    HalpInterruptLastProblem = 19;
    return (unsigned int)-1073741811;
  }
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    goto LABEL_11;
  }
  v5 = a1[16];
  LinesForGsiRange = (_DWORD *)HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C00780[0])(0LL, v5) )
      return (unsigned int)HalpDisableSecondaryInterrupt(a1);
    HalpInterruptLastProblem = 18;
    return (unsigned int)-1073741811;
  }
  v16 = LinesForGsiRange[4];
  v17 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v16, 0LL, 0LL);
  v8 = HalpInterruptLookupController(v16);
  if ( !v8 )
    HalpInterruptLastProblem = 17;
  v9 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v17 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v3 = HalpInterruptSetLineStateInternal(v8, &v16);
  KxReleaseSpinLock(&HalpInterruptLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v3;
}
