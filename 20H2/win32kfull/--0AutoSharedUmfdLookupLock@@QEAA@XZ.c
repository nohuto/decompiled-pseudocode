/*
 * XREFs of ??0AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015DD48
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C008DF50 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00E196C (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029DD00 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029DDCC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008E314 (--0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

AutoSharedUmfdLookupLock *__fastcall AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock(AutoSharedUmfdLookupLock *this)
{
  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
  return this;
}
