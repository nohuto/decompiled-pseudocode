/*
 * XREFs of KiDispatchInterrupt @ 0x140403F40
 * Callers:
 *     KiDpcInterrupt @ 0x140403100 (KiDpcInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1404036E0 (KiDpcInterruptBypass.c)
 * Callees:
 *     KiDeferGroupSchedulingPreemption @ 0x1402D9090 (KiDeferGroupSchedulingPreemption.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiCheckForSListAddress @ 0x1402DF2E0 (KiCheckForSListAddress.c)
 */

// bad sp value at call has been detected, the output may be wrong!
void __fastcall KiDispatchInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  int v11; // r9d
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 CurrentThread; // rcx
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF

  KiCheckForSListAddress(v7 - 128);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  if ( (CurrentPrcb->DpcRequestSummary & 0x3F) != 0 )
  {
    KyRetireDpcList((_DWORD)CurrentPrcb, v8, v10, v11, a5, a6, a7, (__int64)&v14);
  }
  else
  {
    _enable();
    if ( CurrentPrcb->QuantumEnd )
    {
      CurrentPrcb->QuantumEnd = 0;
      KiQuantumEnd(v9, v8);
    }
    else if ( CurrentPrcb->NextThread )
    {
      CurrentThread = (__int64)CurrentPrcb->CurrentThread;
      if ( (*(_BYTE *)(CurrentThread + 2) & 4) == 0
        || !KiDeferGroupSchedulingPreemption(CurrentThread, (__int64)CurrentPrcb) )
      {
        KxDispatchInterrupt();
      }
    }
  }
}
