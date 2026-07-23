/*
 * XREFs of RtlRaiseException @ 0x1402E5480
 * Callers:
 *     RaiseException @ 0x1403D5A70 (RaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x140405AD0 (RtlRaiseNoncontinuableException.c)
 *     HvlpGetRegister128 @ 0x1404F85E0 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1404F8670 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F8760 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x1405879F8 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1402E5A80 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x1402E61C0 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E6680 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402E7080 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403FAE50 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x140405520 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x140405E30 (_alloca_probe.c)
 */

void __cdecl RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  void *v4; // rsp
  void *v5; // rsp
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v9; // rax
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v14; // [rsp+138h] [rbp+F8h]

  LODWORD(ContextLength) = 0;
  EstablisherFrame = 0LL;
  HandlerData = 0LL;
  ImageBase = 0LL;
  RtlGetExtendedContextLength2(0x10000Bu, (PULONG)&ContextLength, 0LL);
  v2 = (unsigned int)ContextLength + 15LL;
  if ( v2 <= (unsigned int)ContextLength )
    v2 = 0xFFFFFFFFFFFFFF0LL;
  v3 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = alloca(v3);
  v5 = alloca(v3);
  v6 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, 0x10000Bu, &ContextLength, 0LL);
  RtlpCaptureContext2(&ContextLength, v7, v8);
  v9 = RtlLookupFunctionEntry((DWORD64)v14, &ImageBase, 0LL);
  if ( !v9 )
LABEL_6:
    RtlRaiseStatus(v6);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v14, v9, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v14;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v6 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ContextLength, 0);
    goto LABEL_6;
  }
}
