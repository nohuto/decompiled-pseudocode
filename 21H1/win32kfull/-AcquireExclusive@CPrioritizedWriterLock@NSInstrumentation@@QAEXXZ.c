/*
 * XREFs of ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0
 * Callers:
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 *     ?Remove@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z @ 0xCDF68 (-Remove@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z.c)
 *     ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8 (-Insert@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z.c)
 *     ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66 (-Insert@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 *     ?Enumerate@?$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x249D10 (-Enumerate@-$CSortedVector@PAXPAX@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z.c)
 *     ?Insert@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z @ 0x249EE0 (-Insert@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAX0@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E (-LookUpAndRemove@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0);
  _InterlockedCompareExchange((volatile signed __int32 *)this + 2, 0, 1);
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
  if ( *((_DWORD *)this + 3) )
    NSInstrumentation::CPlatformSingleWatierSignal::Wait((NSInstrumentation::CPrioritizedWriterLock *)((char *)this + 4));
}
