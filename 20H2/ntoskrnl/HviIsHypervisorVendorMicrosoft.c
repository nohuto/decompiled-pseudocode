/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403BBED0
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F1EB0 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x140592D3C (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1405BD4E0 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A691C4 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
