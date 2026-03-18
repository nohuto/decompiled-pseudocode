/*
 * XREFs of ?UmfdCreateRequestContext@@YGPAXXZ @ 0x874EC
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z @ 0x8BB2A (-UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall UmfdCreateRequestContext()
{
  _DWORD *result; // eax

  result = EngAllocMem(0, 4u, 0x71724446u);
  if ( result )
    *result = 0;
  return result;
}
