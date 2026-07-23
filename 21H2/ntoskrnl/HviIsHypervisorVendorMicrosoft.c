/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403AF940
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x1403F3760 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405949B4 (HvipApertureDetectParameters.c)
 *     HviGetDebugDeviceOptions @ 0x1405BF160 (HviGetDebugDeviceOptions.c)
 *     EtwpTraceSystemInitialization @ 0x140A438C8 (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5B60 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
