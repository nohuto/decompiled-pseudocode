/*
 * XREFs of KiWaitForContextSwap @ 0x140299240
 * Callers:
 *     PspReaper @ 0x140299150 (PspReaper.c)
 *     KiOutSwapKernelStacks @ 0x140299FBC (KiOutSwapKernelStacks.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14039D930 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14039EA10 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiWaitForContextSwap(__int64 a1)
{
  unsigned int v2; // ebx
  char result; // al

  v2 = 0;
  while ( 1 )
  {
    result = *(_BYTE *)(a1 + 113);
    if ( !result )
      break;
    if ( (++v2 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall() )
    {
      HvlNotifyLongSpinWait(v2);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
