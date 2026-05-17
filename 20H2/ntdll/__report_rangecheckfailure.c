/*
 * XREFs of __report_rangecheckfailure @ 0x18008C4E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     LdrpDetectDetour @ 0x180061FBC (LdrpDetectDetour.c)
 *     strcspn @ 0x180090E00 (strcspn.c)
 *     strpbrk @ 0x180091390 (strpbrk.c)
 *     strspn @ 0x180091470 (strspn.c)
 *     strtok_s @ 0x1800979F0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800FD69C (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008C4FC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
