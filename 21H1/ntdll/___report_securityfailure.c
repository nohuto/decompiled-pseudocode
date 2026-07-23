/*
 * XREFs of ___report_securityfailure @ 0x4B2F4C46
 * Callers:
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 * Callees:
 *     ___raise_securityfailure @ 0x4B2F4B30 (___raise_securityfailure.c)
 *     _RtlCaptureContext@4 @ 0x4B308820 (_RtlCaptureContext@4.c)
 */

void __cdecl __noreturn __report_securityfailure(int a1)
{
  unsigned int retaddr; // [esp+4h] [ebp+4h]

  RtlCaptureContext(&ContextRecord);
  ContextRecord.Eip = retaddr;
  ContextRecord.Esp = (unsigned int)&a1;
  dword_4B3A3DD4 = retaddr;
  __guard_xfg_check_icall_fptr = -1073740791;
  dword_4B3A3DCC = 1;
  dword_4B3A3DD8 = 1;
  dword_4B3A3DDC = a1;
  __raise_securityfailure((PEXCEPTION_POINTERS)&ExceptionPointers);
}
