/*
 * XREFs of _RtlEqualSid@8 @ 0x4B2D85D0
 * Callers:
 *     _RtlpCompareKnownAces@16 @ 0x4B2D8537 (_RtlpCompareKnownAces@16.c)
 *     _RtlpOwnerAcesPresent@8 @ 0x4B2D8769 (_RtlpOwnerAcesPresent@8.c)
 *     _RtlSidDominates@12 @ 0x4B2D9420 (_RtlSidDominates@12.c)
 *     _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA (_RtlpValidOwnerSubjectContext@16.c)
 *     _RtlGetAppContainerNamedObjectPath@16 @ 0x4B2E7930 (_RtlGetAppContainerNamedObjectPath@16.c)
 *     _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800 (_RtlAppxIsFileOwnedByTrustedInstaller@8.c)
 *     _RtlpCompareKnownObjectAces@16 @ 0x4B3476F8 (_RtlpCompareKnownObjectAces@16.c)
 *     _RtlFindAceBySid@12 @ 0x4B34B72A (_RtlFindAceBySid@12.c)
 *     _RtlpSysVolCheckOwnerAndSecurity@8 @ 0x4B35DAEE (_RtlpSysVolCheckOwnerAndSecurity@8.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

bool __stdcall RtlEqualSid(unsigned __int8 *Buf1, _WORD *Buf2)
{
  return *(_WORD *)Buf1 == *Buf2 && memcmp(Buf1, Buf2, 4 * Buf1[1] + 8) == 0;
}
