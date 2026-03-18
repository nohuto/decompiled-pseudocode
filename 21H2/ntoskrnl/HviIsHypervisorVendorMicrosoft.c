/*
 * XREFs of HviIsHypervisorVendorMicrosoft @ 0x1403BF790
 * Callers:
 *     KiIsHyperVCr3RspErrataPresent @ 0x14041900C (KiIsHyperVCr3RspErrataPresent.c)
 *     HvipApertureDetectParameters @ 0x1405F2D28 (HvipApertureDetectParameters.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

bool __fastcall HviIsHypervisorVendorMicrosoft(__int64 a1, __int64 a2)
{
  if ( !(unsigned __int8)HviIsAnyHypervisorPresent(a1, a2) )
    return 0;
  _RAX = 0x40000000LL;
  __asm { cpuid }
  if ( (_DWORD)_RBX != 1919117645 )
    return 0;
  return (_DWORD)_RCX == 1718580079 && (_DWORD)_RDX == 1984438388;
}
