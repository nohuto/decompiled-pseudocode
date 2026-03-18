/*
 * XREFs of UserIsUserCritSecInExclusive @ 0x1C0071880
 * Callers:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0071838 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0128EE4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 UserIsUserCritSecInExclusive()
{
  return ExIsResourceAcquiredExclusiveLite(gpresUser) == 1;
}
