/*
 * XREFs of ?UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8B50C
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 */

void __thiscall UmfdEscEngUnmapFontFileFD(_DWORD *this)
{
  int v2; // [esp+8h] [ebp-8h] BYREF
  ULONG_PTR iFile; // [esp+Ch] [ebp-4h] BYREF

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdLookupPushLock);
  iFile = 0;
  if ( UmfdFileviewLookup )
  {
    v2 = this[1];
    if ( (unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(&v2, &iFile) )
      EngUnmapFontFileFD(iFile);
  }
  GreReleasePushLockShared(&UmfdLookupPushLock);
  KeLeaveCriticalRegion();
}
