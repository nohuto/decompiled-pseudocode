/*
 * XREFs of KiExecuteDpc @ 0x1403B4110
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     KiExecuteAllDpcs @ 0x14028B270 (KiExecuteAllDpcs.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x1402F5308 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x14032A0A8 (KiTryToEndDpcProcessing.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403B4374 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x140411300 (memset.c)
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
    KeWaitForGate(a1 + 31616, 5);
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
