/*
 * XREFs of KiScanInterruptObjectList @ 0x1403FFB90
 * Callers:
 *     KiChainedDispatch @ 0x1403FF7A0 (KiChainedDispatch.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x1402129F0 (EtwGetKernelTraceTimestamp.c)
 *     PerfInfoLogInterrupt @ 0x140213730 (PerfInfoLogInterrupt.c)
 *     KiEntropyQueueDpc @ 0x1402426B0 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x140268950 (KiCallInterruptServiceRoutine.c)
 *     KiEndThreadAccountingPeriod @ 0x1402D5BD0 (KiEndThreadAccountingPeriod.c)
 *     KzSetIrqlUnsafe @ 0x140512E80 (KzSetIrqlUnsafe.c)
 *     KiDispatchPassiveInterrupts @ 0x1405215D0 (KiDispatchPassiveInterrupts.c)
 */

void __fastcall KiScanInterruptObjectList()
{
  __int64 v0; // rbp
  __int64 v1; // rsi
  unsigned __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v5; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v7; // r10
  __int64 CurrentThread; // r8
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // r12
  bool v14; // zf
  int v15; // edi
  __int64 v16; // r12
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  int v19; // edx
  unsigned __int8 v20; // [rsp+20h] [rbp-48h]
  LARGE_INTEGER v21[8]; // [rsp+28h] [rbp-40h] BYREF

  v2 = *(unsigned __int8 *)(v1 + 92);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v2);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v2);
  }
  *(_BYTE *)(v0 - 87) = CurrentIrql;
  *(_DWORD *)(v0 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v5 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v7 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v7 = v5 ^ __ROR4__(*v7, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v0 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v9 = v5 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v9;
    v10 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v9;
    v11 = v9 + v10;
    v12 = v11;
    if ( HIDWORD(v11) )
      v12 = -1;
    *(_DWORD *)(CurrentThread + 80) = v12;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v9);
  }
  _enable();
  if ( *(_DWORD *)(v0 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  v13 = v1 + 8;
  v14 = (WORD2(PerfGlobalGroupMask) & 0x4000) == 0;
  *(_BYTE *)(v0 + 243) = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
  if ( !v14 )
    EtwGetKernelTraceTimestamp(v21, 0x20004000u);
  while ( 2 )
  {
    v15 = 0;
    do
    {
      v16 = v13 - 8;
      if ( (*(_DWORD *)(v16 + 104) & 1) != 0 )
      {
        v20 = 0;
      }
      else
      {
        v17 = *(unsigned __int8 *)(v16 + 93);
        if ( !(_BYTE)v17 )
        {
          KiDispatchPassiveInterrupts(v16);
          goto LABEL_29;
        }
        if ( (_BYTE)v17 != *(_BYTE *)(v1 + 92) )
          __writecr8(v17);
        v20 = KiCallInterruptServiceRoutine(v16, 1);
        v18 = *(unsigned __int8 *)(v1 + 92);
        if ( (_BYTE)v18 != *(_BYTE *)(v16 + 93) )
          __writecr8(v18);
      }
      if ( *(_BYTE *)(v0 + 243) )
      {
        v19 = v20;
        BYTE1(v19) = *(_BYTE *)(v16 + 88);
        PerfInfoLogInterrupt(v16, v19, (__int64)v21);
        EtwGetKernelTraceTimestamp(v21, 0x20004000u);
      }
      if ( v20 )
      {
        if ( *(_WORD *)(v16 + 108) != 1 )
          goto LABEL_29;
        ++v15;
      }
      v13 = *(_QWORD *)(v16 + 8);
    }
    while ( v13 != v1 + 8 );
    if ( v15 )
      continue;
    break;
  }
LABEL_29:
  _disable();
}
