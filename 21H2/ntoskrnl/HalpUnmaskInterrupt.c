/*
 * XREFs of HalpUnmaskInterrupt @ 0x1403B6180
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1402523CC (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpHandleMaskUnmaskSecondaryInterrupt @ 0x14051D410 (HalpHandleMaskUnmaskSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpUnmaskInterrupt(unsigned int a1, unsigned int a2)
{
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v5; // rdi
  ULONG_PTR *v6; // r14
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  unsigned int v9; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(a1, a1 + 1);
  v5 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01DD0[0])(0LL, a1) )
      return (unsigned int)HalpHandleMaskUnmaskSecondaryInterrupt(a1, a2, 0LL);
    HalpInterruptSetProblemEx(0, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1832);
    return (unsigned int)-1073741811;
  }
  LODWORD(v16) = LinesForGsiRange[4];
  HIDWORD(v16) = a1 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v6 = HalpInterruptLookupController(v16);
  if ( !v6 )
  {
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1852);
    return (unsigned int)-1073741811;
  }
  v7 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v8 = *((_QWORD *)v5 + 5) + 56LL * (a1 - v5[7]);
  if ( (a2 & 2) != 0 )
    *(_DWORD *)(v8 + 12) &= ~0x20u;
  else
    *(_DWORD *)(v8 + 12) |= 0x10u;
  v9 = HalpInterruptSetLineStateInternal((__int64)v6, (__int64)&v16, v8);
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
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return v9;
}
