/*
 * XREFs of ?CleanInputMessage@@YGXIPAUtagQMSG@@@Z @ 0xF0F02
 * Callers:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     _SuspendThreadQueue@4 @ 0xA68FC (_SuspendThreadQueue@4.c)
 * Callees:
 *     _IsTouchInputMessage@4 @ 0x46022 (_IsTouchInputMessage@4.c)
 *     __FreeTouchInputInfo@8 @ 0x149EED (__FreeTouchInputInfo@8.c)
 *     __FreeGestureInfo@8 @ 0x188C90 (__FreeGestureInfo@8.c)
 */

void __fastcall CleanInputMessage(void *a1, int a2)
{
  if ( IsTouchInputMessage(a1) )
    _FreeTouchInputInfo(*(_DWORD *)(a2 + 20), 1);
  if ( a1 == (void *)281 )
    _FreeGestureInfo(*(_DWORD *)(a2 + 20), 1);
}
