/*
 * XREFs of ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050
 * Callers:
 *     _FreeFileView@8 @ 0xCE1EE (_FreeFileView@8.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z @ 0x8C002 (-LowerBound@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z.c)
 *     ?RemoveEntry@?$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z @ 0xCDFCA (-RemoveEntry@-$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(_DWORD *a1)
{
  _DWORD *v1; // esi
  unsigned int v2; // eax
  unsigned int v3; // ecx
  char v4; // bl

  v1 = UmfdFileviewLookup;
  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)UmfdFileviewLookup);
  v2 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(v1, a1);
  v3 = v1[6];
  if ( v3 && v2 < v3 && *(_DWORD *)(v1[7] + 8 * v2) == *a1 )
  {
    NSInstrumentation::CSortedVector<void *,void *>::RemoveEntry(v1, v2);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  _InterlockedDecrement(v1 + 4);
  ExReleasePushLockExclusiveEx(v1, 0);
  KeLeaveCriticalRegion();
  return v4;
}
