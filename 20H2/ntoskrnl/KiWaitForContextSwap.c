/*
 * XREFs of KiWaitForContextSwap @ 0x1402DE34C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140335620 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x140335A58 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
