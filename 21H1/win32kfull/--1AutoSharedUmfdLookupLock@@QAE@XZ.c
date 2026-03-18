/*
 * XREFs of ??1AutoSharedUmfdLookupLock@@QAE@XZ @ 0xF6FF2
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BD34 (-UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0xE8B2C (-UmfdEscParseFontResources@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCC4D (-UmfdEscEngGetFileChangeTime@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCD05 (-UmfdEscEngGetFilePath@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock(AutoSharedUmfdLookupLock *this)
{
  if ( *(_DWORD *)this )
  {
    GreReleasePushLockShared(*(_DWORD *)this);
    KeLeaveCriticalRegion();
    *(_DWORD *)this = 0;
  }
}
