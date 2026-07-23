/*
 * XREFs of RtlUnwind @ 0x14032EAB0
 * Callers:
 *     _local_unwind @ 0x1403D1220 (_local_unwind.c)
 * Callees:
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
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
