/*
 * XREFs of RtlUserFiberStart @ 0x18007FF00
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 */

void __noreturn RtlUserFiberStart()
{
  (*((void (**)(void))NtCurrentTeb()->NtTib.FiberData + 21))();
  RtlExitUserThread(-1073741823);
}
