/*
 * XREFs of _DestroyWindowsTimers@4 @ 0x71B30
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     ?xxxClientShutdown2@@YGJPAUtagBWL@@II@Z @ 0xD0CFC (-xxxClientShutdown2@@YGJPAUtagBWL@@II@Z.c)
 * Callees:
 *     _FreeTimer@4 @ 0x92F66 (_FreeTimer@4.c)
 */

int DestroyWindowsTimers()
{
  return _gtmrListHead;
}
