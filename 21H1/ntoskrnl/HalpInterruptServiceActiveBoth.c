/*
 * XREFs of HalpInterruptServiceActiveBoth @ 0x1404B85DC
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x1402EC5B0 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     HalpInterruptSetLineStateInternal @ 0x14037597C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptLookupController @ 0x140375AD0 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140375CF0 (HalpAcquireHighLevelLock.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140375D78 (HalpInterruptFindLinesForGsiRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptServiceActiveBoth(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *LinesForGsiRange; // rax
  _DWORD *v4; // rbx
  ULONG_PTR *v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v11 = 0LL;
  v2 = *(_DWORD *)(v1 + 64);
  LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v2, v2 + 1);
  LODWORD(v11) = LinesForGsiRange[4];
  HIDWORD(v11) = v2 + LinesForGsiRange[5] - LinesForGsiRange[7];
  v4 = (_DWORD *)(*((_QWORD *)LinesForGsiRange + 5) + 56LL * (v2 - LinesForGsiRange[7]));
  v5 = HalpInterruptLookupController(v11);
  v6 = HalpAcquireHighLevelLock(&HalpInterruptLock);
  if ( *v4 == 1 )
  {
    *v4 = 2;
  }
  else if ( *v4 == 2 )
  {
    *v4 = 1;
  }
  if ( (int)HalpInterruptSetLineStateInternal((__int64)v5, (__int64)&v11, (__int64)v4) < 0 )
    KeBugCheckEx(0x5Cu, 0x205uLL, *((int *)v5 + 54), (ULONG_PTR)v5, SHIDWORD(v11));
  KxReleaseSpinLock(&HalpInterruptLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v6 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v6);
  return result;
}
