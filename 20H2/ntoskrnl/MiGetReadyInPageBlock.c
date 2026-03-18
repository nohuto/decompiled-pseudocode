/*
 * XREFs of MiGetReadyInPageBlock @ 0x1408CADF4
 * Callers:
 *     MiSwitchToTransition @ 0x140538414 (MiSwitchToTransition.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x1402320A0 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140232150 (MiInitializeInPageSupport.c)
 *     MiLocateVadEvent @ 0x1402506D4 (MiLocateVadEvent.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 */

ULONG_PTR __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 VadEvent; // rsi
  ULONG_PTR v2; // rbx
  PSLIST_ENTRY v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8LL);
  v2 = *(_QWORD *)(VadEvent + 8);
  while ( *(_DWORD *)(v2 + 176) != 1 )
  {
    v3 = MiGetInPageSupportBlock(0);
    if ( v3 )
    {
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v2);
      *(_QWORD *)(VadEvent + 8) = v3;
      v2 = (ULONG_PTR)v3;
      break;
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  MiInitializeInPageSupport(v2, 0);
  return v2;
}
