/*
 * XREFs of __report_securityfailure @ 0x14001D154
 * Callers:
 *     __report_rangecheckfailure @ 0x14001D138 (__report_rangecheckfailure.c)
 * Callees:
 *     __raise_securityfailure @ 0x14001CFFC (__raise_securityfailure.c)
 *     capture_current_context @ 0x14001D1F8 (capture_current_context.c)
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
  qword_14008F770 = retaddr;
  dword_14008F760 = -1073740791;
  dword_14008F764 = 1;
  dword_14008F778 = 1;
  unk_14008F780 = v2;
  _raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}
