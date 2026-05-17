/*
 * XREFs of __report_rangecheckfailure @ 0x18008C3E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     LdrpDetectDetour @ 0x180061EAC (LdrpDetectDetour.c)
 *     strcspn @ 0x180090D00 (strcspn.c)
 *     strpbrk @ 0x180091290 (strpbrk.c)
 *     strspn @ 0x180091370 (strspn.c)
 *     strtok_s @ 0x1800978F0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800FD18C (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008C3FC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
