/*
 * XREFs of PiDaInit @ 0x140A53550
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoCreateDriver @ 0x1407A4F00 (IoCreateDriver.c)
 */

int PiDaInit()
{
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF

  *((_QWORD *)&v1 + 1) = L"\\Driver\\DeviceApi";
  *(_QWORD *)&v1 = 2359330LL;
  return IoCreateDriver(&v1, (_DMA_OPERATIONS *)PiDaDriverEntry);
}
