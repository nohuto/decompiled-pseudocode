/*
 * XREFs of RtlUserThreadStart @ 0x180052680
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     NtQueryInformationProcess @ 0x18009D3D0 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100AE0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x180102820 (RtlRaiseStatus.c)
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
