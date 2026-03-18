/*
 * XREFs of ?LookUp@?$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z @ 0x1F3E44
 * Callers:
 *     ?pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z @ 0x1F4429 (-pfo@UMPDOBJ@@QAEHPAPAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     ?LowerBound@?$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z @ 0xDEB5A (-LowerBound@-$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LookUp(_DWORD *a1, _DWORD *a2)
{
  NSInstrumentation::CPrioritizedWriterLock *v2; // esi
  volatile signed __int32 *v3; // edi
  unsigned int v4; // edi
  char v5; // bl
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  v2 = (NSInstrumentation::CPrioritizedWriterLock *)UmfdFontFileLookup;
  v3 = (volatile signed __int32 *)((char *)UmfdFontFileLookup + 12);
  while ( 1 )
  {
    _InterlockedIncrement(v3);
    if ( !*((_DWORD *)v2 + 4) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v2);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0);
    ExReleasePushLockSharedEx(v2, 0);
    KeLeaveCriticalRegion();
  }
  v4 = *((_DWORD *)v2 + 6);
  v5 = 0;
  if ( v4 )
  {
    v6 = NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LowerBound(v2, a1);
    if ( v6 >= v4 || (v7 = (_DWORD *)(*((_DWORD *)v2 + 7) + 8 * v6), *v7 != *a1) )
      v7 = 0;
    if ( v7 )
    {
      v5 = 1;
      *a2 = v7[1];
    }
  }
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(v2);
  return v5;
}
