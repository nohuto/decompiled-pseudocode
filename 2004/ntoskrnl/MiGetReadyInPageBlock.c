/*
 * XREFs of MiGetReadyInPageBlock @ 0x1408C4FB4
 * Callers:
 *     MiSwitchToTransition @ 0x140534A44 (MiSwitchToTransition.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x140251084 (MiLocateVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1402B79F0 (MiInitializeInPageSupport.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
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
