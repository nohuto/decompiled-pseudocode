/*
 * XREFs of RtlpGuardIsSuppressedAddress @ 0x1800FD570
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004753C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD5A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18004767C (RtlpGetTargetRvaFlag.c)
 */

char __fastcall RtlpGuardIsSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  if ( RtlpGetTargetRvaFlag(a1, &v2) )
    return v2 & 1;
  else
    return 0;
}
