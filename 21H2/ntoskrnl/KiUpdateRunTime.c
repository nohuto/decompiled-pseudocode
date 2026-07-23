/*
 * XREFs of KiUpdateRunTime @ 0x1402CBED0
 * Callers:
 *     KiUpdateTime @ 0x1402CC030 (KiUpdateTime.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140211E00 (HalRequestSoftwareInterrupt.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14027A170 (KiCheckPreferredHeteroProcessor.c)
 *     KiShouldScanSharedReadyQueue @ 0x14027AF04 (KiShouldScanSharedReadyQueue.c)
 *     KeAccumulateTicks @ 0x1402C8D10 (KeAccumulateTicks.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x1402CCD50 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KeCheckAndApplyBamQos @ 0x14051E6E0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14051F0A0 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14056E79C (PoSetProcessorQoS.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // bp
  int v4; // esi
  __int64 CurrentThread; // rdi
  unsigned __int64 result; // rax
  __int64 v7; // rcx
  struct _KPRCB *v8; // r14
  _KPRCBFLAG v9; // eax
  unsigned int PrcbFlags; // ecx
  unsigned int v11; // edx
  char v12; // al
  __int16 v13; // [rsp+40h] [rbp-8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = v13;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  _disable();
  v4 = MEMORY[0xFFFFF78000000320];
  if ( (v3 & 0x200) != 0 )
    _enable();
  KeAccumulateTicks(CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    result = *(_QWORD *)(CurrentThread + 72);
    if ( result >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_7;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, (__int64)CurrentPrcb, 1);
    if ( (_DWORD)result )
      goto LABEL_7;
    v8 = KeGetCurrentPrcb();
    v9.PrcbFlags = (volatile int)v8->PrcbFlags;
    if ( (v9.PrcbFlags & 0x300) == 0 )
    {
      if ( *(_BYTE *)(CurrentThread + 512) != LOBYTE(v9.PrcbFlags) )
        KeCheckAndApplyBamQos(v8, CurrentThread);
      goto LABEL_4;
    }
    _disable();
    PrcbFlags = v8->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
    if ( (unsigned __int8)*(_DWORD *)(CurrentThread + 512) != LOBYTE(v8->PrcbFlags.PrcbFlags) )
    {
      v11 = PrcbFlags | ((*(_DWORD *)(CurrentThread + 512) & 3) << 8);
      v8->PrcbFlags.PrcbFlags = v11;
      v12 = PoSetProcessorQoS(v8, (v11 >> 8) & 3);
      PrcbFlags = v8->PrcbFlags.PrcbFlags;
      if ( !v12 )
      {
LABEL_23:
        if ( (PrcbFlags & 0x300) == 0 )
          KeUpdatePendingQosRequest(v8);
        if ( (v13 & 0x200) != 0 )
          _enable();
        goto LABEL_4;
      }
      PrcbFlags &= 0xFFFFFCFF;
    }
    v8->PrcbFlags.PrcbFlags = PrcbFlags;
    goto LABEL_23;
  }
LABEL_4:
  result = KiCheckGroupSchedulingQuantumEnd(CurrentPrcb, CurrentThread);
  if ( (_BYTE)result )
  {
LABEL_7:
    CurrentPrcb->QuantumEnd = 1;
    if ( !CurrentPrcb->NestingLevel )
      return HalRequestSoftwareInterrupt(2);
    CurrentPrcb->InterruptRequest = 1;
    return result;
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v4) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(v7);
    if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v4 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
