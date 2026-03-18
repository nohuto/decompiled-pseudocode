/*
 * XREFs of KiExecuteDpc @ 0x1403CB9F0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForGate @ 0x140217454 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x140255E00 (KiTryToEndDpcProcessing.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x1403CBB10 (KiSetSystemAffinityThreadToProcessor.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  struct _KTHREAD *v4; // rax
  _DWORD v6[68]; // [rsp+20h] [rbp-138h] BYREF

  memset(&v6[1], 0, 0x10CuLL);
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 8u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 13240) = 1;
  while ( 1 )
  {
    v6[0] = 0;
    KeWaitForGate(a1 + 32320, 5u);
    v3 = KeGetCurrentThread();
    --v3->SpecialApcDisable;
    do
    {
      *(_WORD *)(a1 + 13246) = 1;
      if ( KeSmapEnabled )
        __asm { clac }
      _disable();
      KiExecuteAllDpcs(a1, (unsigned __int64)CurrentThread, v6, 1u);
      _enable();
      if ( KeSmapEnabled )
        __asm { stac }
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 13246), a1 + 13168) );
    v4 = KeGetCurrentThread();
    if ( v4->SpecialApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
