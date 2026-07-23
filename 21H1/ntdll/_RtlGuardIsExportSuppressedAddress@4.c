/*
 * XREFs of _RtlGuardIsExportSuppressedAddress@4 @ 0x4B363AFE
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 * Callees:
 *     _RtlpGetTargetRvaFlag@8 @ 0x4B363B9B (_RtlpGetTargetRvaFlag@8.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [esp+1h] [ebp-1h]

  v2 = HIBYTE(a1);
  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}
