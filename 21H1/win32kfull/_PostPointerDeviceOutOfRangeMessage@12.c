/*
 * XREFs of _PostPointerDeviceOutOfRangeMessage@12 @ 0x159264
 * Callers:
 *     <none>
 * Callees:
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 */

int __stdcall PostPointerDeviceOutOfRangeMessage(int a1, int a2, int a3)
{
  return PostPointerEventMessage(a1, 570, a2, a3);
}
