/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x1405E0520
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x1405E04C0 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x14092F0B4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x14093C068 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140259CA0 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim);
}
