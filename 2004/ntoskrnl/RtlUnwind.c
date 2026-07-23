/*
 * XREFs of RtlUnwind @ 0x14035E150
 * Callers:
 *     _local_unwind @ 0x1403CE590 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402E70E0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 */

void __cdecl RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  unsigned __int64 v8; // r10
  void *v9; // rsp
  PCONTEXT_EX ContextLength; // [rsp+30h] [rbp+0h] BYREF

  LODWORD(ContextLength) = 0;
  RtlGetExtendedContextLength2(0x10000Bu, (PULONG)&ContextLength, 0LL);
  v8 = (unsigned int)ContextLength + 15LL;
  if ( v8 <= (unsigned int)ContextLength )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = alloca(v8 & 0xFFFFFFFFFFFFFFF0uLL);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, 0x10000Bu, &ContextLength, 0LL);
  RtlUnwindEx(TargetFrame, TargetIp, ExceptionRecord, ReturnValue, (PCONTEXT)&ContextLength, 0LL);
}
