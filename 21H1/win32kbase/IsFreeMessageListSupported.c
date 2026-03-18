/*
 * XREFs of IsFreeMessageListSupported @ 0x1C00303B4
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C000BE2C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     zzzDestroyQueue @ 0x1C006FE70 (zzzDestroyQueue.c)
 *     UserDeleteW32Thread @ 0x1C0129350 (UserDeleteW32Thread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFreeMessageListSupported()
{
  if ( qword_1C0258000 )
    return qword_1C0258000();
  else
    return 3221225659LL;
}
