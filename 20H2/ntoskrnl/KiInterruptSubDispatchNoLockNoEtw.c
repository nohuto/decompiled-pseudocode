/*
 * XREFs of KiInterruptSubDispatchNoLockNoEtw @ 0x1403FDB40
 * Callers:
 *     KiInterruptDispatchNoLockNoEtw @ 0x1403FE3D0 (KiInterruptDispatchNoLockNoEtw.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x1402BEDE0 (KiEndThreadAccountingPeriod.c)
 *     KiEntropyQueueDpc @ 0x140322F90 (KiEntropyQueueDpc.c)
 *     KiCallInterruptServiceRoutine @ 0x14033E8C0 (KiCallInterruptServiceRoutine.c)
 *     KzSetIrqlUnsafe @ 0x140511100 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiInterruptSubDispatchNoLockNoEtw(__int64 a1, __int64 a2, __int64 CurrentThread, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v9; // rax
  unsigned int EntropyCount; // r11d
  unsigned int *v11; // r10
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  int v15; // ecx
  char result; // al

  v6 = *(unsigned __int8 *)(v5 + 93);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(v6);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(v6);
  }
  *(_BYTE *)(v4 - 87) = CurrentIrql;
  *(_DWORD *)(v4 - 96) = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    v9 = __rdtsc();
    EntropyCount = CurrentPrcb->EntropyTimingState.EntropyCount;
    v11 = &CurrentPrcb->EntropyTimingState.Buffer[(unsigned __int16)(EntropyCount & 0x7FF) >> 5];
    *v11 = v9 ^ __ROR4__(*v11, 5);
    CurrentPrcb->EntropyTimingState.EntropyCount = ++EntropyCount;
    if ( (EntropyCount & 0x3FF) == 0 )
      *(_DWORD *)(v4 - 96) = 1;
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v12 = v9 - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v12;
    v13 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v12;
    v14 = v12 + v13;
    v15 = v14;
    if ( HIDWORD(v14) )
      v15 = -1;
    *(_DWORD *)(CurrentThread + 80) = v15;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0x3E) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v12);
  }
  _enable();
  if ( *(_DWORD *)(v4 - 96) )
    KiEntropyQueueDpc((__int64)KeGetCurrentPrcb());
  *(_QWORD *)(v5 + 136) = v4 - 128;
  result = KiCallInterruptServiceRoutine(v5, 0LL, CurrentThread, a4);
  _disable();
  return result;
}
