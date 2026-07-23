/*
 * XREFs of LdrpInsertModuleToIndex @ 0x18007FD40
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpInsertModuleToIndexLockHeld @ 0x180014744 (LdrpInsertModuleToIndexLockHeld.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

void __fastcall LdrpInsertModuleToIndex(__int64 a1, __int64 a2)
{
  RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
  LdrpInsertModuleToIndexLockHeld(a1, a2);
  RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
}
