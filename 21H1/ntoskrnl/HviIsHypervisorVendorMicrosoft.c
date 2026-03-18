/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403AF360
 * Callers:
 *     HvipApertureDetectParameters @ 0x14058EBA8 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1405B9260 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A46978 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool HviIsHypervisorVendorMicrosoft()
{
  if ( !HviIsAnyHypervisorPresent() )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
