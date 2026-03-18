/*
 * XREFs of _guard_icall_bugcheck @ 0x1403FFBC0
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140340640 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x1403FFC20 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
