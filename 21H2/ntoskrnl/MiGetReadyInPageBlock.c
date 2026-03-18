/*
 * XREFs of MiGetReadyInPageBlock @ 0x14096D038
 * Callers:
 *     MiSwitchToTransition @ 0x1405954F4 (MiSwitchToTransition.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14033C4D0 (MiInitializeInPageSupport.c)
 */

__int64 __fastcall MiGetReadyInPageBlock(__int64 a1)
{
  __int64 VadEvent; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdi

  VadEvent = MiLocateVadEvent(a1, 8LL);
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
