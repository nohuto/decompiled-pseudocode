/*
 * XREFs of ?Insert@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK0@Z @ 0xDEA66
 * Callers:
 *     _UmfdLoadFontFile@28 @ 0xDE9A6 (_UmfdLoadFontFile@28.c)
 * Callees:
 *     ?LowerBound@?$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z @ 0xDEB5A (-LowerBound@-$CSortedVector@KK@NSInstrumentation@@QBEIABK@Z.c)
 *     ?AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ @ 0xE2AA0 (-AcquireExclusive@CPrioritizedWriterLock@NSInstrumentation@@QAEXXZ.c)
 *     _memmove @ 0xF92A1 (_memmove.c)
 *     ?ReAllocate@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z @ 0x1FCAF8 (-ReAllocate@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@AAE_NI@Z.c)
 */

char __stdcall NSInstrumentation::CSortedVector<unsigned long,unsigned long>::Insert(_DWORD *a1, _DWORD *a2)
{
  PVOID v2; // esi
  unsigned int v4; // eax
  unsigned int v5; // edx
  int v6; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  char v10; // bl
  unsigned int v12; // [esp+18h] [ebp+8h]

  v2 = UmfdFontFileLookup;
  NSInstrumentation::CPrioritizedWriterLock::AcquireExclusive((NSInstrumentation::CPrioritizedWriterLock *)UmfdFontFileLookup);
  v4 = NSInstrumentation::CSortedVector<unsigned long,unsigned long>::LowerBound(a1);
  v5 = *((_DWORD *)v2 + 6);
  v6 = 8 * v4;
  v12 = v4;
  if ( v4 < v5 && (v7 = *((_DWORD *)v2 + 7), *(_DWORD *)(v7 + 8 * v4) == *a1) )
  {
    *(_DWORD *)(v7 + v6 + 4) = *a2;
  }
  else
  {
    v8 = *((_DWORD *)v2 + 5);
    if ( v5 == v8
      && !(unsigned __int8)NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::ReAllocate(v2, 2 * v8) )
    {
      v10 = 0;
      goto LABEL_6;
    }
    memmove(
      (void *)(v6 + *((_DWORD *)v2 + 7) + 8),
      (const void *)(v6 + *((_DWORD *)v2 + 7)),
      8 * (*((_DWORD *)v2 + 6) - v12));
    v9 = *((_DWORD *)v2 + 7);
    *(_DWORD *)(v9 + v6) = *a1;
    *(_DWORD *)(v9 + v6 + 4) = *a2;
    ++*((_DWORD *)v2 + 6);
  }
  v10 = 1;
LABEL_6:
  _InterlockedDecrement((volatile signed __int32 *)v2 + 4);
  ExReleasePushLockExclusiveEx(v2, 0);
  KeLeaveCriticalRegion();
  return v10;
}
