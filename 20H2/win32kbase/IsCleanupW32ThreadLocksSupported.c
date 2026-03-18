/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C00A3848
 * Callers:
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00A3750 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C0250738 )
    return qword_1C0250738();
  else
    return 3221225659LL;
}
