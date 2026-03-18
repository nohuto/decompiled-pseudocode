/*
 * XREFs of ?Remove@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z @ 0xCDF68
 * Callers:
 *     _UmfdUnloadFontFileInternal@4 @ 0xCDEEE (_UmfdUnloadFontFileInternal@4.c)
 * Callees:
 *     ?RemoveEntry@?$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z @ 0xCDFCA (-RemoveEntry@-$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z.c)
 *     ?LowerBound@?$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z @ 0xDEB5A (-LowerBound@-$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Remove(_DWORD *a1)
{
  PVOID v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  char v4; // bl

  v1 = UmfdFontFileLookup;
  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)UmfdFontFileLookup);
  v2 = NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LowerBound(a1);
  v3 = *((_DWORD *)v1 + 6);
  if ( v3 && v2 < v3 && *(_DWORD *)(*((_DWORD *)v1 + 7) + 8 * v2) == *a1 )
  {
    NSInstrumentation::CSortedVector<void *,void *>::RemoveEntry(v2);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement((volatile signed __int32 *)v1 + 4);
  ExReleasePushLockExclusiveEx(v1, 0);
  KeLeaveCriticalRegion();
  return v4;
}
