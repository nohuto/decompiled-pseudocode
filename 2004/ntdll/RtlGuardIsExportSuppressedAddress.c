/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x18004764C
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004753C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FD5A0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x18004767C (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}
