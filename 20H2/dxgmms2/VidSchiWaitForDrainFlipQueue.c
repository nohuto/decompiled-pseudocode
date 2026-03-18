/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C00D1A68
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1C00D0BC0 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A480 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C0014D94 (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(__int64 a1)
{
  char result; // al
  _DWORD v3[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v3, 0, 0xA0uLL);
  v3[4] = 3;
  v3[5] = 1;
  *(_QWORD *)(a1 + 1608) = MEMORY[0xFFFFF78000000320];
  KeResetEvent((PRKEVENT)(a1 + 1568));
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending(a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent(a1, (__int64)v3, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
