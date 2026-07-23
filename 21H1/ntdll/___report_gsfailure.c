/*
 * XREFs of ___report_gsfailure @ 0x4B2F4B4B
 * Callers:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _RtlUnhandledExceptionFilter@4 @ 0x4B3078D0 (_RtlUnhandledExceptionFilter@4.c)
 */

void __cdecl __noreturn __report_gsfailure()
{
  unsigned int v0; // eax
  unsigned int v1; // edx
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // kr00_4
  unsigned int vars0; // [esp+8h] [ebp+0h]
  unsigned int retaddr; // [esp+Ch] [ebp+4h]
  char v9; // [esp+10h] [ebp+8h] BYREF

  ContextRecord.Eax = v0;
  ContextRecord.Ecx = v2;
  ContextRecord.Edx = v1;
  ContextRecord.Ebx = v3;
  ContextRecord.Esi = v5;
  ContextRecord.Edi = v4;
  LOWORD(ContextRecord.SegSs) = __SS__;
  LOWORD(ContextRecord.SegCs) = __CS__;
  LOWORD(ContextRecord.SegDs) = __DS__;
  LOWORD(ContextRecord.SegEs) = __ES__;
  LOWORD(ContextRecord.SegFs) = __FS__;
  LOWORD(ContextRecord.SegGs) = __GS__;
  v6 = __readeflags();
  ContextRecord.EFlags = v6;
  ContextRecord.Ebp = vars0;
  ContextRecord.Eip = retaddr;
  ContextRecord.Esp = (unsigned int)&v9;
  ContextRecord.ContextFlags = 65537;
  dword_4B3A3DD4 = retaddr;
  __guard_xfg_check_icall_fptr = -1073740791;
  dword_4B3A3DCC = 1;
  dword_4B3A3DD8 = 1;
  dword_4B3A3DDC = 2;
  RtlUnhandledExceptionFilter((PEXCEPTION_POINTERS)&ExceptionPointers);
  ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073740791);
}
