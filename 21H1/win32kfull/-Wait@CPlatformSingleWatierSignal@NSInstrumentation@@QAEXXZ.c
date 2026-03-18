/*
 * XREFs of ?Wait@CPlatformSingleWatierSignal@NSInstrumentation@@QAEXXZ @ 0x249731
 * Callers:
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPlatformSingleWatierSignal::Wait(
        NSInstrumentation::CPlatformSingleWatierSignal *this)
{
  struct _KEVENT Event; // [esp+8h] [ebp-10h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  *(_DWORD *)this = &Event;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 1, -1, 0) != 1 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0);
}
