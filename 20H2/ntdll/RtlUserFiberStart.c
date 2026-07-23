/*
 * XREFs of RtlUserFiberStart @ 0x180080000
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
