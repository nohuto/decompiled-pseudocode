/*
 * XREFs of IsFreeMessageListSupported @ 0x1C003EC74
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0020D6C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     zzzDestroyQueue @ 0x1C0076490 (zzzDestroyQueue.c)
 *     UserDeleteW32Thread @ 0x1C0123370 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C0252040 )
    return qword_1C0252040();
  else
    return 3221225659LL;
}
