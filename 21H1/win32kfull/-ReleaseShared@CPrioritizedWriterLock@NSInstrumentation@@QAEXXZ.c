/*
 * XREFs of ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0x9D720
 * Callers:
 *     ?LookUp@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z @ 0x8BF98 (-LookUp@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIPAPAU_FONTFILEVIEW@@@Z.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0x8CF60 (-Lookup@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z @ 0x8D01C (-Insert@CPointerHashTable@NSInstrumentation@@QAE_NPBX0@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z @ 0xCFE32 (-Remove@CPointerHashTable@NSInstrumentation@@QAE_NPBXPAPAX@Z.c)
 *     ?LookUp@?$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z @ 0x1F3E44 (-LookUp@-$CSortedVector@KK@NSInstrumentation@@QAE_NABKPAK@Z.c)
 *     ??$Enumerate@P6GXPAX00@Z@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEXP6GXPAX00@Z0@Z @ 0x24A072 (--$Enumerate@P6GXPAX00@Z@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceS.c)
 *     ?Insert@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A2AF (-Insert@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Lookup@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QBEPAVCBackTraceStorageUnit@2@QBVCBackTrace@2@@Z @ 0x24A3E8 (-Lookup@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QAE_NQBVCBackTraceStorageUnit@2@@Z @ 0x24A4C4 (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  if ( _InterlockedDecrement((volatile signed __int32 *)this + 3) <= 0 )
  {
    if ( *((_DWORD *)this + 4) )
      NSInstrumentation::CPlatformSingleWatierSignal::Set((NSInstrumentation::CPrioritizedWriterLock *)((char *)this + 4));
  }
}
