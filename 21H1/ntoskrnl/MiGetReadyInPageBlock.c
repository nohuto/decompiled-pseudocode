/*
 * XREFs of MiGetReadyInPageBlock @ 0x1408C3C64
 * Callers:
 *     MiSwitchToTransition @ 0x1405343F4 (MiSwitchToTransition.c)
 * Callees:
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x140224D70 (MiInitializeInPageSupport.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
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
