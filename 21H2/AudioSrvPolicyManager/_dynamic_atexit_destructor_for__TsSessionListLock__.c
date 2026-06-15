/*
 * XREFs of _dynamic_atexit_destructor_for__TsSessionListLock__ @ 0x18003D1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__TsSessionListLock__()
{
  DeleteCriticalSection(&CriticalSection);
}
