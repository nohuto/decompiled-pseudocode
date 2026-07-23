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

BOOLEAN __cdecl RtlEqualSid(PSID Sid1, PSID Sid2)
{
  size_t _FFFFFFFC; // [esp-4h] [ebp-4h]

  if ( *(_WORD *)Sid1 != *(_WORD *)Sid2 )
    return 0;
  LODWORD(_FFFFFFFC) = 4 * *((unsigned __int8 *)Sid1 + 1) + 8;
  return memcmp(Sid1, Sid2, _FFFFFFFC) == 0;
}
