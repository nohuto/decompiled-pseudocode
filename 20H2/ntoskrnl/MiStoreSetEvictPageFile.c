/*
 * XREFs of MiStoreSetEvictPageFile @ 0x1403245AC
 * Callers:
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
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
