/*
 * XREFs of KiInterruptSubDispatchNoLockNoEtw @ 0x1403F8A80
 * Callers:
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403F90B0 (KiInterruptDispatchNoLockNoEtw.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140214760 (KiEndThreadAccountingPeriod.c)
 *     KiCallInterruptServiceRoutine @ 0x1402DE090 (KiCallInterruptServiceRoutine.c)
 *     KiEntropyQueueDpc @ 0x140352500 (KiEntropyQueueDpc.c)
 *     KzSetIrqlUnsafe @ 0x14050D7D0 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiInterruptSubDispatchNoLockNoEtw(__int64 a1, __int64 a2, __int64 CurrentThread)
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
  char result; // al

  v5 = *(unsigned __int8 *)(v4 + 93);
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
  *(_QWORD *)(v4 + 136) = v3 - 128;
  result = KiCallInterruptServiceRoutine(v4, 0, CurrentThread);
  _disable();
  return result;
}
