/*
 * XREFs of _guard_icall_bugcheck @ 0x140405E90
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140311670 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x140405EF0 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
