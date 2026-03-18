/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C00554C0
 * Callers:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0120BB4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
