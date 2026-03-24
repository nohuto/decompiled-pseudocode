/*
 * XREFs of MiGetReadyInPageBlock @ 0x1408C85B4
 * Callers:
 *     MiSwitchToTransition @ 0x140539F14 (MiSwitchToTransition.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x14023EF24 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14023EFE0 (MiInitializeInPageSupport.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x1402FE3B4 (MiLocateVadEvent.c)
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
