/*
 * XREFs of VidSchiWaitForDrainFlipQueue @ 0x1C00AA188
 * Callers:
 *     VidSchiDrainFlipQueue @ 0x1C00AA160 (VidSchiDrainFlipQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000A180 (VidSchiProfilePerformanceTick.c)
 *     VidSchiIsMmIoFlipPending @ 0x1C001AF30 (VidSchiIsMmIoFlipPending.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C00937C4 (VidSchWaitForCompletionEvent.c)
 */

char __fastcall VidSchiWaitForDrainFlipQueue(struct _KEVENT *a1)
{
  char result; // al
  _DWORD v3[42]; // [rsp+40h] [rbp-A8h] BYREF

  memset(v3, 0, 0xA0uLL);
  v3[4] = 3;
  v3[5] = 1;
  a1[67].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
  KeResetEvent(a1 + 66);
  while ( 1 )
  {
    result = VidSchiIsMmIoFlipPending((__int64)a1);
    if ( !result )
      break;
    VidSchiProfilePerformanceTick(16LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    VidSchWaitForCompletionEvent((struct _VIDSCH_GLOBAL *)a1, (__int64)v3, 0xFFFFFFFFLL);
    VidSchiProfilePerformanceTick(17LL, (__int64)a1, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  }
  return result;
}
