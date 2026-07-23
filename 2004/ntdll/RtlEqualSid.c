/*
 * XREFs of RtlEqualSid @ 0x180038310
 * Callers:
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlpOwnerAcesPresent @ 0x18003FB88 (RtlpOwnerAcesPresent.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043ED0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlSidDominates @ 0x18007BB40 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D2D0 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x180087FE0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBC00 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E6F58 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800E9A84 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180090000 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  return *(_WORD *)Sid1 == *(_WORD *)Sid2 && memcmp(Sid1, Sid2, 4LL * *((unsigned __int8 *)Sid1 + 1) + 8) == 0;
}
