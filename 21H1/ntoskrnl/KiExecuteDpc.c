/*
 * XREFs of KiExecuteDpc @ 0x1403ABB20
 * Callers:
 *     <none>
 * Callees:
 *     KiExecuteAllDpcs @ 0x140207510 (KiExecuteAllDpcs.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x14031BBD8 (KiTryToEndDpcProcessing.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403ABD84 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD v7[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v7[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 12584) = 1;
  while ( 1 )
  {
    v7[0] = 0;
    KeWaitForGate(a1 + 31616, 5);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 12590) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v7, 1u);
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 12590), a1 + 12520) );
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v4, v5, v6);
  }
}
