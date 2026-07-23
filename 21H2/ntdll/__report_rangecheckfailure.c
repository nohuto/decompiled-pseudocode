/*
 * XREFs of __report_rangecheckfailure @ 0x18008CAE0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     LdrpDetectDetour @ 0x1800634AC (LdrpDetectDetour.c)
 *     strcspn @ 0x180091400 (strcspn.c)
 *     strpbrk @ 0x180091990 (strpbrk.c)
 *     strspn @ 0x180091A70 (strspn.c)
 *     strtok_s @ 0x180097FF0 (strtok_s.c)
 *     RtlpMatchUILanguage @ 0x1800FD4FC (RtlpMatchUILanguage.c)
 * Callees:
 *     __report_securityfailure @ 0x18008CAFC (__report_securityfailure.c)
 */

void __noreturn _report_rangecheckfailure()
{
  _report_securityfailure(8LL);
}
