/*
 * XREFs of MiStoreSetEvictPageFile @ 0x1402C51BC
 * Callers:
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 */

LONG __fastcall MiStoreSetEvictPageFile(__int64 a1, unsigned int a2)
{
  struct _KEVENT *v2; // rbx
  LONG result; // eax

  v2 = *(struct _KEVENT **)(a1 + 248);
  _bittestandreset(*(signed __int32 **)(*(_QWORD *)(a1 + 112) + 32LL), a2);
  if ( ++*(_DWORD *)(a1 + 200) == 256 )
    return KeSetEvent(v2 + 50, 0, 0);
  result = MiSufficientAvailablePages((__int64)v2, 0xA0uLL);
  if ( !result )
    return KeSetEvent(v2 + 50, 0, 0);
  return result;
}
