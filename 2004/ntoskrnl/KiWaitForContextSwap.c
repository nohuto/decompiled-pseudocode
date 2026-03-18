/*
 * XREFs of KiWaitForContextSwap @ 0x140280C14
 * Callers:
 *     KiOutSwapKernelStacks @ 0x1402E51AC (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1402E55E8 (KeDeleteThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1, __int64 a2)
{
  char result; // al
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, a2) )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
  }
  return result;
}
