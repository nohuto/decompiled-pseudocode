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

__int64 __fastcall RtlUserThreadStart(__int64 (__fastcall *a1)(__int64), __int64 a2)
{
  unsigned int v3; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v3 = a1(a2);
    RtlExitUserThread(v3);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2, a1);
}
