/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C007351C
 * Callers:
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C004E888 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C02586F8 )
    return qword_1C02586F8();
  else
    return 3221225659LL;
}
