/*
 * XREFs of __report_securityfailure @ 0x14001CDF4
 * Callers:
 *     __report_rangecheckfailure @ 0x14001CDD8 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x14001CC9C (__raise_securityfailure.c)
 *     capture_current_context @ 0x14001CE98 (capture_current_context.c)
 */

void __fastcall __noreturn _report_securityfailure(unsigned int a1)
{
  DWORD64 retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(v2);
  capture_current_context(&ContextRecord);
  ContextRecord.Rip = retaddr;
  ContextRecord.Rsp = (DWORD64)&v2;
  qword_140084770 = retaddr;
  dword_140084760 = -1073740791;
  dword_140084764 = 1;
  dword_140084778 = 1;
  unk_140084780 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
