/*
 * XREFs of _PostPointerDeviceInRangeMessage@12 @ 0x159243
 * Callers:
 *     <none>
 * Callees:
 *     _PostPointerEventMessage@16 @ 0x159285 (_PostPointerEventMessage@16.c)
 */

int __stdcall PostPointerDeviceInRangeMessage(int a1, int a2, int a3)
{
  return PostPointerEventMessage(a1, 569, a2, a3);
}
