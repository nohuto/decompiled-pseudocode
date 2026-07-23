/*
 * XREFs of KiWaitForContextSwap @ 0x1402EFA9C
 * Callers:
 *     KiOutSwapKernelStacks @ 0x140295A90 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x140295EC8 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
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
