/*
 * XREFs of _dynamic_atexit_destructor_for__CSpatialAudioTech::s_atmosLock__ @ 0x18007CEB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__CSpatialAudioTech::s_atmosLock__()
{
  DeleteCriticalSection(&CSpatialAudioTech::s_atmosLock);
}
