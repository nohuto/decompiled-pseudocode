/*
 * XREFs of IsFreeMessageListSupported @ 0x1C00A1834
 * Callers:
 *     zzzDestroyQueue @ 0x1C0051DF0 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     UserDeleteW32Thread @ 0x1C0121020 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C0250040 )
    return qword_1C0250040();
  else
    return 3221225659LL;
}
