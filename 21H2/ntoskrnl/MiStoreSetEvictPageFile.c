/*
 * XREFs of MiStoreSetEvictPageFile @ 0x1403868E8
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  LONG result; // eax

  v2 = *(_QWORD *)(a1 + 248);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent((PRKEVENT)(v2 + 1216), 0, 0);
  result = MiSufficientAvailablePages(v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent((PRKEVENT)(v2 + 1216), 0, 0);
  return result;
}
