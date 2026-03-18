/*
 * XREFs of KiWaitForContextSwap @ 0x140244514
 * Callers:
 *     KiOutSwapKernelStacks @ 0x14032A2DC (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x14032A718 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
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
