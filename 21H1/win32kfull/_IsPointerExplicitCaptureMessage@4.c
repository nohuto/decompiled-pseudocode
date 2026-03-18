/*
 * XREFs of _IsPointerExplicitCaptureMessage@4 @ 0x14E3DD
 * Callers:
 *     _IsTouchpadPointerInputMessage@4 @ 0x14E408 (_IsTouchpadPointerInputMessage@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsPointerExplicitCaptureMessage(void *this)
{
  return this == (void *)593 || this == (void *)594 || this == (void *)595;
}
