/*
 * XREFs of RtlEqualSid @ 0x180038310
 * Callers:
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlpOwnerAcesPresent @ 0x18003FBD8 (RtlpOwnerAcesPresent.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043F20 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlSidDominates @ 0x18007BC40 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007D3D0 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800880E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBDE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E7400 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800E9F94 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x180090100 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4LL * a1[1] + 8) == 0;
}
