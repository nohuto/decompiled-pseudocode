/*
 * XREFs of _TppCheckLdrLockHeld@0 @ 0x4B38477D
 * Callers:
 *     _TppCallbackCheckThreadBeforeCallback@4 @ 0x4B2B6D20 (_TppCallbackCheckThreadBeforeCallback@4.c)
 * Callees:
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 */

bool __stdcall TppCheckLdrLockHeld()
{
  return RtlIsCriticalSectionLockedByThread(NtCurrentPeb()->LoaderLock) != 0;
}
