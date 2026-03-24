/*
 * XREFs of KiDispatchInterrupt @ 0x140406550
 * Callers:
 *     KiDpcInterrupt @ 0x140405690 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x140405CB0 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14024D5B0 (KiCheckForSListAddress.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KiDeferGroupSchedulingPreemption @ 0x14025A110 (KiDeferGroupSchedulingPreemption.c)
 */

// bad sp value at call has been detected, the output may be wrong!
char __fastcall KiDispatchInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  char result; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rcx
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF

  result = KiCheckForSListAddress(v7 - 128);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
    return KyRetireDpcList((_DWORD)CurrentPrcb, v9, v11, v12, a5, a6, a7, (__int64)&v15);
  _enable();
  if ( CurrentPrcb->QuantumEnd )
  {
    CurrentPrcb->QuantumEnd = 0;
    return KiQuantumEnd(v10, v9, v11, v12);
  }
  else if ( CurrentPrcb->NextThread )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0 )
      return KxDispatchInterrupt();
    result = KiDeferGroupSchedulingPreemption(CurrentThread, (__int64)CurrentPrcb);
    if ( !result )
      return KxDispatchInterrupt();
  }
  return result;
}
