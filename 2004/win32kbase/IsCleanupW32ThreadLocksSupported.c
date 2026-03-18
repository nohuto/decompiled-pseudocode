/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C00427E4
 * Callers:
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00426EC (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     DestroyThreadsObjects @ 0x1C00955C0 (DestroyThreadsObjects.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C0252738 )
    return qword_1C0252738();
  else
    return 3221225659LL;
}
