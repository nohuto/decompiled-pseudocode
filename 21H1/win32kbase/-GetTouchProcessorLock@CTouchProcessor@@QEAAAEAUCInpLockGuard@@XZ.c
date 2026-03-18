/*
 * XREFs of ?GetTouchProcessorLock@CTouchProcessor@@QEAAAEAUCInpLockGuard@@XZ @ 0x1C019A1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CInpLockGuard *__fastcall CTouchProcessor::GetTouchProcessorLock(CTouchProcessor *this)
{
  return (CTouchProcessor *)((char *)this + 40);
}
