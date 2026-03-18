/*
 * XREFs of HvUnlockHiveFlusherShared @ 0x14067C528
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1402089E0 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x14053FB50 (CmpCreateTombstone.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmRestoreKey @ 0x14090C34C (CmRestoreKey.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall HvUnlockHiveFlusherShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 72);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
