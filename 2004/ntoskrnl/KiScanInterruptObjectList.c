/*
 * XREFs of KiScanInterruptObjectList @ 0x1403F8600
 * Callers:
 *     KiChainedDispatch @ 0x1403F8370 (KiChainedDispatch.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140214760 (KiEndThreadAccountingPeriod.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     EtwGetKernelTraceTimestamp @ 0x140328270 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x140328800 (PerfInfoLogInterrupt.c)
 *     KiEntropyQueueDpc @ 0x140352500 (KiEntropyQueueDpc.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 *     KiDispatchPassiveInterrupts @ 0x14051BEE0 (KiDispatchPassiveInterrupts.c)
 */

void __fastcall KiScanInterruptObjectList(__int64 a1, __int64 a2, __int64 CurrentThread)
{
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v8; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v10; // r10
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // r12
  bool v16; // zf
  int v17; // edi
  __int64 v18; // r12
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  int v21; // edx
  unsigned __int8 v22; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v23[8]; // [rsp+28h] [rbp-40h] BYREF

  v5 = *(unsigned __int8 *)(v4 + 92);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v5);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v5);
  }
  *(_BYTE *)(v3 - 87) = CurrentIrql;
  *(_DWORD *)(v3 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v8 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v10 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v10 = v8 ^ __ROR4__(*v10, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v3 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v11 = v8 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v11;
    v12 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v11;
    v13 = v11 + v12;
    v14 = v13;
    if ( HIDWORD(v13) )
      v14 = -1;
    *(_DWORD *)(CurrentThread + 80) = v14;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v11);
  }
  _enable();
  if ( *(_DWORD *)(v3 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v15 = v4 + 8;
  v16 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v3 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v16 )
    EtwGetKernelTraceTimestamp(v23, 0x20004000u);
  while ( 2 )
  {
    v17 = 0;
    do
    {
      v18 = v15 - 8;
      if ( (*(_DWORD *)(v18 + 104) & 1) != 0 )
      {
        v22 = 0;
      }
      else
      {
        v19 = *(unsigned __int8 *)(v18 + 93);
        if ( !(_BYTE)v19 )
        {
          KiDispatchPassiveInterrupts(v18);
          goto LABEL_29;
        }
        if ( (_BYTE)v19 != *(_BYTE *)(v4 + 92) )
          __writecr8(v19);
        v22 = KiCallInterruptServiceRoutine(v18, 1, CurrentThread);
        v20 = *(unsigned __int8 *)(v4 + 92);
        if ( (_BYTE)v20 != *(_BYTE *)(v18 + 93) )
          __writecr8(v20);
      }
      if ( *(_BYTE *)(v3 + 243) )
      {
        v21 = v22;
        BYTE1(v21) = *(_BYTE *)(v18 + 88);
        PerfInfoLogInterrupt(v18, v21, (__int64)v23);
        EtwGetKernelTraceTimestamp(v23, 0x20004000u);
      }
      if ( v22 )
      {
        if ( *(_WORD *)(v18 + 108) != 1 )
          goto LABEL_29;
        ++v17;
      }
      v15 = *(_QWORD *)(v18 + 8);
    }
    while ( v15 != v4 + 8 );
    if ( v17 )
      continue;
    break;
  }
LABEL_29:
  _disable();
}
