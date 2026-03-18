/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140634B40
 * Callers:
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140630098 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x140633974 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x140634ADC (PsQueryProcessAttributes.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140936194 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x1409430AC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x14022AF30 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim);
  if ( a3 )
    *a3 = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim);
}
