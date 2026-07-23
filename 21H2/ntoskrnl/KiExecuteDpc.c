/*
 * XREFs of KiExecuteDpc @ 0x1403B5900
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x140249F78 (KiTryToEndDpcProcessing.c)
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x1402EBB00 (KiExecuteAllDpcs.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B5B64 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  _DWORD v4[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v4[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 12584) = 1;
  while ( 1 )
  {
    v4[0] = 0;
    KeWaitForGate(a1 + 31616, 5u);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 12590) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v4, 1u);
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 12590), a1 + 12520) );
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
