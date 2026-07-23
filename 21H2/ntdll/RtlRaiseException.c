/*
 * XREFs of RtlRaiseException @ 0x1800520D0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18004E04C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 *     RtlGetActiveActivationContext @ 0x18006C600 (RtlGetActiveActivationContext.c)
 *     RtlpTpImpersonate @ 0x180071160 (RtlpTpImpersonate.c)
 *     RtlDeactivateActivationContext @ 0x180071A70 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180071B78 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x18007350C (RtlpAllocateActivationContextStackFrame.c)
 *     RaiseException @ 0x180094E30 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A1530 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1800A2350 (RtlRaiseExceptionForReturnAddressHijack.c)
 *     RtlpPossibleDeadlock @ 0x1800E9228 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F69D8 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x1800FF500 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x1801123EC (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x18011249C (TppRaiseInvalidParameter.c)
 *     PssNtValidateDescriptor @ 0x180114880 (PssNtValidateDescriptor.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x180052310 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x180052E60 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180053090 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x1800A02F0 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A1820 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A19B0 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A1F20 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A28C0 (_alloca_probe.c)
 *     RtlRaiseStatus @ 0x180102680 (RtlRaiseStatus.c)
 *     RtlpShadowStackEnforced @ 0x18010B2B8 (RtlpShadowStackEnforced.c)
 */

void __stdcall RtlRaiseException(PEXCEPTION_RECORD ExceptionRecord)
{
  ULONG64 v1; // rbx
  ULONG v3; // r14d
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  void *v6; // rsp
  void *v7; // rsp
  NTSTATUS v8; // ebx
  ULONG64 v9; // r14
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v10; // rax
  ULONG64 v11; // rbx
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v12; // rax
  EXCEPTION_RECORD *v13; // rcx
  BOOLEAN v14; // r8
  ULONG ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  PVOID HandlerData; // [rsp+58h] [rbp+18h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+60h] [rbp+20h] BYREF
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+70h] [rbp+30h] BYREF

  v1 = 0LL;
  v3 = 1048587;
  if ( !NtCurrentPeb()->BeingDebugged || (unsigned int)RtlpShadowStackEnforced() )
  {
    if ( MEMORY[0x7FFE03D8] )
    {
      v3 = 1048651;
      if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      {
        v1 = MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708] | 0x8000000000000000uLL;
        if ( ((MEMORY[0x7FFE03D8] | MEMORY[0x7FFE0708]) & 0x800LL) != 0 && !(unsigned int)RtlpShadowStackEnforced() )
          v1 &= ~0x800uLL;
      }
    }
  }
  RtlGetExtendedContextLength2(v3, &ContextLength, v1);
  v4 = ContextLength + 15LL;
  if ( v4 <= ContextLength )
    v4 = 0xFFFFFFFFFFFFFF0LL;
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = alloca(v5);
  v7 = alloca(v5);
  v8 = RtlInitializeExtendedContext2((PCONTEXT)&ContextLength, v3, &ContextEx, v1);
  RtlpCaptureContext2(&ContextLength);
  v9 = HistoryTable.Entry[11].ImageBase;
  HistoryTable.Count = 0;
  HistoryTable.LowAddress = -1LL;
  HistoryTable.HighAddress = 0LL;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  v10 = RtlLookupFunctionEntry(HistoryTable.Entry[11].ImageBase, &ImageBase, &HistoryTable);
  if ( !v10 )
LABEL_20:
    RtlRaiseStatus(v8);
  RtlVirtualUnwind(0, ImageBase, v9, v10, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  if ( ExceptionRecord->ExceptionCode == -2147483597 )
  {
    v11 = HistoryTable.Entry[11].ImageBase;
    v12 = RtlLookupFunctionEntry(HistoryTable.Entry[11].ImageBase, &ImageBase, &HistoryTable);
    if ( v12 )
      RtlVirtualUnwind(0, ImageBase, v11, v12, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  }
  ExceptionRecord->ExceptionAddress = (void *)HistoryTable.Entry[11].ImageBase;
  RtlpGuardSynchronizeRestorePc(HistoryTable.Entry[11].ImageBase);
  v13 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v14 = 1;
    goto LABEL_19;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v14 = 0;
    v13 = ExceptionRecord;
LABEL_19:
    v8 = ZwRaiseException(v13, (PCONTEXT)&ContextLength, v14);
    goto LABEL_20;
  }
  RtlRestoreContext((PCONTEXT)&ContextLength, ExceptionRecord);
}
