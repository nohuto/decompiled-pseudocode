/*
 * XREFs of MiStoreSetEvictPageFile @ 0x140353A3C
 * Callers:
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 * Callees:
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
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
