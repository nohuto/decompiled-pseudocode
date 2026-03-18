/*
 * XREFs of _FreeDdeXact@4 @ 0x17FF12
 * Callers:
 *     _FindQMsg@24 @ 0x6A480 (_FindQMsg@24.c)
 *     ?PopState@@YGXPAUtagDDECONV@@@Z @ 0x17EB1A (-PopState@@YGXPAUtagDDECONV@@@Z.c)
 *     _xxxDDETrackGetMessageHook@4 @ 0x180099 (_xxxDDETrackGetMessageHook@4.c)
 * Callees:
 *     ?RemovePublicObject@@YGHIPAX@Z @ 0x17EB8B (-RemovePublicObject@@YGHIPAX@Z.c)
 *     _GreDeleteServerMetaFile@4 @ 0x21EDBC (_GreDeleteServerMetaFile@4.c)
 */

int __stdcall FreeDdeXact(int a1)
{
  int result; // eax
  int v2; // ecx

  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    v2 = *(_DWORD *)(a1 + 28);
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 8) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_DWORD *)(v2 + 24));
      if ( (*(_DWORD *)(a1 + 32) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*(_DWORD *)(a1 + 28) + 38), *(_DWORD *)(*(_DWORD *)(a1 + 28) + 24));
        *(_DWORD *)(a1 + 32) &= ~0x2000u;
      }
      Win32FreePool(*(_DWORD *)(a1 + 28));
    }
    return HMFreeObject(a1);
  }
  return result;
}
