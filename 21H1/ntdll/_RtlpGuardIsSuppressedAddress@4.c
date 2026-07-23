/*
 * XREFs of _RtlpGuardIsSuppressedAddress@4 @ 0x4B363CAC
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 * Callees:
 *     _RtlpGetTargetRvaFlag@8 @ 0x4B363B9B (_RtlpGetTargetRvaFlag@8.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(char *a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  if ( RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
