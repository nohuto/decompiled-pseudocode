/*
 * XREFs of RtlGuardIsExportSuppressedAddress @ 0x18004769C
 * Callers:
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004758C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlpHandleInvalidUserCallTarget @ 0x1800FDAB0 (RtlpHandleInvalidUserCallTarget.c)
 * Callees:
 *     RtlpGetTargetRvaFlag @ 0x1800476CC (RtlpGetTargetRvaFlag.c)
 */

bool __fastcall RtlGuardIsExportSuppressedAddress(void *a1)
{
  char v2; // [rsp+38h] [rbp+10h]

  return (unsigned __int8)RtlpGetTargetRvaFlag(a1) && (v2 & 3) == 2;
}
