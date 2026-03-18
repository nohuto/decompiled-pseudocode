/*
 * XREFs of PsQueryProcessAttributesByToken @ 0x140666820
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x14065F5C0 (EtwpQueryTokenPackageInfo.c)
 *     PsQueryProcessAttributes @ 0x1406667C0 (PsQueryProcessAttributes.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x140930364 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpApplyPackageIdFilter @ 0x14093D2E4 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x140296520 (SeSecurityAttributePresent.c)
 */

void __fastcall PsQueryProcessAttributesByToken(__int64 a1, _BYTE *a2, struct _KTHREAD *a3)
{
  if ( a2 )
    *a2 = SeSecurityAttributePresent(a1, (__int64)&PspSysAppIdClaim, a3);
  if ( a3 )
    a3->Header.Type = SeSecurityAttributePresent(a1, (__int64)&PspPackagedAppClaim, a3);
}
