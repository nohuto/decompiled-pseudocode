/*
 * XREFs of HalDisableInterrupt @ 0x140396C30
 * Callers:
 *     KiDisconnectInterruptInternal @ 0x1403AF4FC (KiDisconnectInterruptInternal.c)
 *     KiDisconnectSecondaryInterrupt @ 0x14056EE94 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x140251FD8 (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptLookupController @ 0x140252134 (HalpInterruptLookupController.c)
 *     HalpInterruptApplyOverrides @ 0x140252258 (HalpInterruptApplyOverrides.c)
 *     HalpAcquireHighLevelLock @ 0x140252344 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x1402523CC (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDisableSecondaryInterrupt @ 0x14051D1A0 (HalpDisableSecondaryInterrupt.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalDisableInterrupt(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebx
  unsigned int v5; // esi
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v7; // rbp
  ULONG_PTR *v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  int v11; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int v17; // [rsp+20h] [rbp-18h]
  int v18; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+44h] [rbp+Ch]

  if ( *a1 != 1 )
  {
    v17 = 371;
LABEL_13:
    v11 = 19;
LABEL_15:
    HalpInterruptSetProblemEx(0, v11, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", v17);
    return (unsigned int)-1073741811;
  }
  v2 = a1[2];
  if ( v2 )
  {
    if ( v2 == 3 )
      return 0;
    v17 = 432;
    goto LABEL_13;
  }
  v5 = a1[16];
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v5, v5 + 1);
  v7 = LinesForGsiRange;
  if ( !LinesForGsiRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01DD0[0])(0LL, v5) )
      return (unsigned int)HalpDisableSecondaryInterrupt(a1);
    v17 = 417;
    v11 = 18;
    goto LABEL_15;
  }
  v18 = LinesForGsiRange[4];
  v19 = v5 + LinesForGsiRange[5] - LinesForGsiRange[7];
  HalpInterruptApplyOverrides(&v18, 0LL, 0LL);
  v8 = HalpInterruptLookupController(v18);
  if ( !v8 )
    HalpInterruptSetProblemEx(0, 17, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 456);
  v9 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  v10 = *((_QWORD *)v7 + 5) + 56LL * (int)(v19 - v7[5]);
  *(_DWORD *)(v10 + 12) &= ~0x10u;
  v3 = HalpInterruptSetLineStateInternal((__int64)v8, (__int64)&v18, v10);
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
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return v3;
}
