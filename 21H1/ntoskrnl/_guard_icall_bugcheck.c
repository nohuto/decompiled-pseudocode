/*
 * XREFs of _guard_icall_bugcheck @ 0x1403FE930
 * Callers:
 *     KeCheckStackAndTargetAddress @ 0x140303870 (KeCheckStackAndTargetAddress.c)
 *     _guard_check_icall @ 0x1403FE990 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

void __fastcall __noreturn guard_icall_bugcheck(ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x139u, 0LL, 0LL, 0LL, BugCheckParameter4);
}
