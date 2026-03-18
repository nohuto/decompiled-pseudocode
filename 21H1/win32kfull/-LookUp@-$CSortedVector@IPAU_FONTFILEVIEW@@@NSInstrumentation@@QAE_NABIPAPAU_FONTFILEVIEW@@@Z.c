/*
 * XREFs of ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98
 * Callers:
 *     ?UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8B50C (-UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BD34 (-UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 *     ?UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xE8B2C (-UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCC4D (-UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05 (-UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z @ 0x8C002 (-LowerBound@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z.c)
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(_DWORD *a1, _DWORD *a2)
{
  NSInstrumentation::CPrioritizedWriterLock *v2; // esi
  volatile signed __int32 *v3; // edi
  unsigned int v4; // edi
  char v5; // bl
  unsigned int v6; // eax
  _DWORD *v7; // ecx

  v2 = (NSInstrumentation::CPrioritizedWriterLock *)UmfdFileviewLookup;
  v3 = (volatile signed __int32 *)((char *)UmfdFileviewLookup + 12);
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
    v6 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(a1);
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
