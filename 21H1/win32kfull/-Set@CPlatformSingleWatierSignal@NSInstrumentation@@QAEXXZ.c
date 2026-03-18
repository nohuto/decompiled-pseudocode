/*
 * XREFs of ?Set@CPlatformSingleWatierSignal@NSInstrumentation@@QAEXXZ @ 0x249709
 * Callers:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPlatformSingleWatierSignal::Set(
        NSInstrumentation::CPlatformSingleWatierSignal *this)
{
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1, 1, 0) == -1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 1, 1);
    KeSetEvent(*(PRKEVENT *)this, 0, 0);
  }
}
