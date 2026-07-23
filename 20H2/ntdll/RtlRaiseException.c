/*
 * XREFs of RtlRaiseException @ 0x180051070
 * Callers:
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1800509F8 (vDbgPrintExWithPrefixInternal.c)
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180053A5C (TppCallbackCheckThreadAfterCallback.c)
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     RtlGetActiveActivationContext @ 0x18006B5D0 (RtlGetActiveActivationContext.c)
 *     RtlpTpImpersonate @ 0x180070130 (RtlpTpImpersonate.c)
 *     RtlDeactivateActivationContext @ 0x180070A40 (RtlDeactivateActivationContext.c)
 *     RtlpFreeActivationContextStackFrame @ 0x180070B48 (RtlpFreeActivationContextStackFrame.c)
 *     RtlpAllocateActivationContextStackFrame @ 0x1800724DC (RtlpAllocateActivationContextStackFrame.c)
 *     RaiseException @ 0x180094830 (RaiseException.c)
 *     KiRaiseUserExceptionDispatcher @ 0x1800A0F90 (KiRaiseUserExceptionDispatcher.c)
 *     RtlRaiseNoncontinuableException @ 0x1800A1990 (RtlRaiseNoncontinuableException.c)
 *     RtlRaiseExceptionForReturnAddressHijack @ 0x1800A1DB0 (RtlRaiseExceptionForReturnAddressHijack.c)
 *     RtlpPossibleDeadlock @ 0x1800E93D8 (RtlpPossibleDeadlock.c)
 *     RtlpAllocateHeapRaiseException @ 0x1800F6B88 (RtlpAllocateHeapRaiseException.c)
 *     RtlReportFatalFailure @ 0x1800FF6A0 (RtlReportFatalFailure.c)
 *     TppRaiseHandleStatus @ 0x18011258C (TppRaiseHandleStatus.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 *     PssNtValidateDescriptor @ 0x180114A20 (PssNtValidateDescriptor.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x180030DE0 (RtlVirtualUnwind.c)
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 *     RtlDispatchException @ 0x180051260 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength2 @ 0x180051DB0 (RtlGetExtendedContextLength2.c)
 *     RtlInitializeExtendedContext2 @ 0x180051FE0 (RtlInitializeExtendedContext2.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     ZwRaiseException @ 0x18009FD60 (ZwRaiseException.c)
 *     RtlpCaptureContext2 @ 0x1800A1280 (RtlpCaptureContext2.c)
 *     RtlRestoreContext @ 0x1800A1410 (RtlRestoreContext.c)
 *     RtlpGuardSynchronizeRestorePc @ 0x1800A1980 (RtlpGuardSynchronizeRestorePc.c)
 *     _alloca_probe @ 0x1800A2300 (_alloca_probe.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
 *     RtlpShadowStackEnforced @ 0x18010B458 (RtlpShadowStackEnforced.c)
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
  EXCEPTION_RECORD *v11; // rcx
  BOOLEAN v12; // r8
  ULONG ContextLength; // [rsp+40h] [rbp+0h] BYREF
  unsigned __int64 ImageBase; // [rsp+48h] [rbp+8h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+58h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+20h] BYREF
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
LABEL_17:
    RtlRaiseStatus(v8);
  RtlVirtualUnwind(0, ImageBase, v9, v10, (PCONTEXT)&ContextLength, &HandlerData, &EstablisherFrame, 0LL);
  ExceptionRecord->ExceptionAddress = (void *)HistoryTable.Entry[11].ImageBase;
  RtlpGuardSynchronizeRestorePc(HistoryTable.Entry[11].ImageBase);
  v11 = ExceptionRecord;
  if ( NtCurrentPeb()->BeingDebugged )
  {
    v12 = 1;
    goto LABEL_16;
  }
  if ( !RtlDispatchException(ExceptionRecord, (PCONTEXT)&ContextLength) )
  {
    v12 = 0;
    v11 = ExceptionRecord;
LABEL_16:
    v8 = ZwRaiseException(v11, (PCONTEXT)&ContextLength, v12);
    goto LABEL_17;
  }
  RtlRestoreContext((PCONTEXT)&ContextLength, ExceptionRecord);
}
