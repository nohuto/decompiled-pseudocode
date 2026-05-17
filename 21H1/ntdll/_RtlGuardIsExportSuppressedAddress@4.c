/*
 * XREFs of _RtlGuardIsExportSuppressedAddress@4 @ 0x4B363AFE
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 * Callees:
 *     _RtlpGetTargetRvaFlag@8 @ 0x4B363B9B (_RtlpGetTargetRvaFlag@8.c)
 */

bool __thiscall RtlGuardIsExportSuppressedAddress(void *this)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  return (unsigned __int8)RtlpGetTargetRvaFlag(this, &v2, this) && (v2 & 3) == 2;
}
