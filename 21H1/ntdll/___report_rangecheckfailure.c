/*
 * XREFs of ___report_rangecheckfailure @ 0x4B2F4C38
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _strtok_s @ 0x4B3002F0 (_strtok_s.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 * Callees:
 *     ___report_securityfailure @ 0x4B2F4C46 (___report_securityfailure.c)
 */

void __noreturn __report_rangecheckfailure()
{
  __report_securityfailure(8);
}
