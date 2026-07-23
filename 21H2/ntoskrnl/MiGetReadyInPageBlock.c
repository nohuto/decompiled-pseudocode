/*
 * XREFs of MiGetReadyInPageBlock @ 0x1408C8714
 * Callers:
 *     MiSwitchToTransition @ 0x14053A154 (MiSwitchToTransition.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 VadEvent; // rsi
  ULONG_PTR v2; // rbx
  ULONG_PTR v3; // rdi

  VadEvent = MiLocateVadEvent(a1);
  v2 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v2);
      *(_QWORD *)(VadEvent + 8) = v3;
      v2 = v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
