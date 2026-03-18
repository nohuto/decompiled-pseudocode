/*
 * XREFs of ?Insert@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABIABQAU_FONTFILEVIEW@@@Z @ 0xDE3D8
 * Callers:
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z @ 0x8C002 (-LowerBound@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QBEIABI@Z.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?ReAllocate@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z @ 0x1FCAF8 (-ReAllocate@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Insert(int a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // edx
  char v9; // bl
  int v11; // ecx

  v2 = UmfdFileviewLookup;
  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)UmfdFileviewLookup);
  v3 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(v2, &g_UmfdFileViewKey);
  v4 = v2[6];
  v5 = v3;
  v6 = 8 * v3;
  if ( v3 < v4 && (v11 = v2[7], *(_DWORD *)(v11 + 8 * v3) == g_UmfdFileViewKey) )
  {
    *(_DWORD *)(v11 + v6 + 4) = *a2;
  }
  else
  {
    v7 = v2[5];
    if ( v4 == v7
      && !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(v2, 2 * v7) )
    {
      v9 = 0;
      goto LABEL_5;
    }
    memmove((void *)(v6 + v2[7] + 8), (const void *)(v6 + v2[7]), 8 * (v2[6] - v5));
    v8 = v2[7];
    *(_DWORD *)(v8 + v6) = g_UmfdFileViewKey;
    *(_DWORD *)(v8 + v6 + 4) = *a2;
    ++v2[6];
  }
  v9 = 1;
LABEL_5:
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockExclusiveEx(v2, 0);
  KeLeaveCriticalRegion();
  return v9;
}
