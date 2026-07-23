/*
 * XREFs of RtlUserThreadStart @ 0x180052630
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009D390 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1801005D0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x180102310 (RtlRaiseStatus.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))Kernel32ThreadInitThunkFunction)(
    0LL,
    Function,
    Parameter,
    Function);
}
