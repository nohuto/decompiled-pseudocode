/*
 * XREFs of _IsPointerInputNonClientMessage@4 @ 0xAEE74
 * Callers:
 *     _IsTouchpadPointerInputMessage@4 @ 0x14E408 (_IsTouchpadPointerInputMessage@4.c)
 *     _xxxRetrievePointerInputMessage@60 @ 0x15A7AB (_xxxRetrievePointerInputMessage@60.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsPointerInputNonClientMessage(unsigned int a1)
{
  return a1 >= 0x241 && a1 <= 0x244;
}
