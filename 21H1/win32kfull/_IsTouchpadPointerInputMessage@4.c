/*
 * XREFs of _IsTouchpadPointerInputMessage@4 @ 0x14E408
 * Callers:
 *     ?IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z @ 0x15AE16 (-IsPTPAllowedOnThread@@YGHPAUtagTHREADINFO@@II@Z.c)
 * Callees:
 *     _IsPointerInputNonClientMessage@4 @ 0xAEE74 (_IsPointerInputNonClientMessage@4.c)
 *     _IsPointerExplicitCaptureMessage@4 @ 0x14E3DD (_IsPointerExplicitCaptureMessage@4.c)
 */

BOOL __thiscall IsTouchpadPointerInputMessage(void *this)
{
  void *v1; // ecx
  BOOL result; // eax

  if ( IsPointerInputNonClientMessage((unsigned int)this) || (unsigned int)v1 >= 0x245 && (unsigned int)v1 <= 0x24A )
    return 1;
  result = IsPointerExplicitCaptureMessage(v1);
  if ( result )
    return 1;
  return result;
}
