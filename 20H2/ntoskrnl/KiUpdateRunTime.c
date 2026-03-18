/*
 * XREFs of KiUpdateRunTime @ 0x140286DE0
 * Callers:
 *     KiUpdateTime @ 0x14027DA20 (KiUpdateTime.c)
 * Callees:
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     KiCheckGroupSchedulingQuantumEnd @ 0x140286F40 (KiCheckGroupSchedulingQuantumEnd.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402DBC60 (KiCheckPreferredHeteroProcessor.c)
 *     KiShouldScanSharedReadyQueue @ 0x1402DCAB4 (KiShouldScanSharedReadyQueue.c)
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 *     KeCheckAndApplyBamQos @ 0x14051C9C0 (KeCheckAndApplyBamQos.c)
 *     KeUpdatePendingQosRequest @ 0x14051D380 (KeUpdatePendingQosRequest.c)
 *     PoSetProcessorQoS @ 0x14056CB4C (PoSetProcessorQoS.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(char a1, unsigned __int8 a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int16 v3; // bp
  int v4; // esi
  __int64 v5; // rcx
  _KTHREAD *CurrentThread; // rdi
  unsigned __int64 result; // rax
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
  KeAccumulateTicks((__int64)CurrentPrcb, CurrentPrcb->LastTick, MEMORY[0xFFFFF78000000320], a2, a1);
  CurrentThread = CurrentPrcb->CurrentThread;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    result = CurrentThread->CycleTime;
    if ( result >= CurrentThread->QuantumTarget )
      goto LABEL_7;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( (_DWORD)result )
      goto LABEL_7;
    v8 = KeGetCurrentPrcb();
    v9.PrcbFlags = (volatile int)v8->PrcbFlags;
    if ( (v9.PrcbFlags & 0x300) == 0 )
    {
      if ( LOBYTE(CurrentThread->ThreadFlags2) != LOBYTE(v9.PrcbFlags) )
        KeCheckAndApplyBamQos(v8, CurrentThread);
      goto LABEL_4;
    }
    _disable();
    PrcbFlags = v8->PrcbFlags.PrcbFlags & 0xFFFFFCFF;
    if ( (unsigned __int8)CurrentThread->ThreadFlags2 != LOBYTE(v8->PrcbFlags.PrcbFlags) )
    {
      v11 = PrcbFlags | ((CurrentThread->ThreadFlags2 & 3) << 8);
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
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      LOBYTE(v5) = 2;
      return HalRequestSoftwareInterrupt(v5);
    }
    return result;
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v4) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(v5);
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
