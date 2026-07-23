/*
 * XREFs of RtlRaiseException @ 0x1402E6830
 * Callers:
 *     RaiseException @ 0x1403D2DE0 (RaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x1403FF800 (RtlRaiseNoncontinuableException.c)
 *     HvlpGetRegister128 @ 0x1404F4D70 (HvlpGetRegister128.c)
 *     HvlpGetRegister64 @ 0x1404F4E00 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1404F4EF0 (HvlpSetRegister64.c)
 *     RtlpAllocateHeapRaiseException @ 0x140584098 (RtlpAllocateHeapRaiseException.c)
 * Callees:
 *     RtlDispatchException @ 0x1402E6C20 (RtlDispatchException.c)
 *     RtlVirtualUnwind @ 0x1402E7070 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     RtlGetExtendedContextLength2 @ 0x1402E9D60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x1402EA760 (RtlInitializeExtendedContext2.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1403F6280 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1403FF250 (RtlpCaptureContext2.c)
 *     _alloca_probe @ 0x1403FFB60 (_alloca_probe.c)
 */

void __cdecl RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r8
  void *v4; // rsp
  void *v5; // rsp
  NTSTATUS v6; // edi
  _IMAGE_RUNTIME_FUNCTION_ENTRY *v7; // rax
  PCONTEXT_EX ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  void *v12; // [rsp+138h] [rbp+F8h]

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
  RtlpCaptureContext2(&ContextLength);
  v7 = RtlLookupFunctionEntry((DWORD64)v12, &ImageBase, 0LL);
  if ( !v7 )
LABEL_6:
    RtlRaiseStatus(v6);
  RtlVirtualUnwind(0, ImageBase, (DWORD64)v12, v7, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = v12;
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v6 = ZwRaiseException(ExceptionRecord, (PCONTEXT)&ContextLength, 0);
    goto LABEL_6;
  }
}
