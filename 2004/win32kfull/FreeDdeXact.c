/*
 * XREFs of FreeDdeXact @ 0x1C021D4B0
 * Callers:
 *     FindQMsg @ 0x1C00964B0 (FindQMsg.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021B8E4 (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C021D734 (xxxDDETrackGetMessageHook.c)
 * Callees:
 *     ?RemovePublicObject@@YAHIPEAX@Z @ 0x1C021B9A8 (-RemovePublicObject@@YAHIPEAX@Z.c)
 *     GreDeleteServerMetaFile @ 0x1C02B8774 (GreDeleteServerMetaFile.c)
 */

__int64 __fastcall FreeDdeXact(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = HMMarkObjectDestroy(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 )
    {
      if ( (*(_DWORD *)(v3 + 16) & 0x24) != 0 )
        GreDeleteServerMetaFile(*(_QWORD *)(v3 + 48));
      if ( (*(_DWORD *)(a1 + 64) & 0x2000) != 0 )
      {
        RemovePublicObject(*(unsigned __int16 *)(*(_QWORD *)(a1 + 56) + 74LL), *(void **)(*(_QWORD *)(a1 + 56) + 48LL));
        *(_DWORD *)(a1 + 64) &= ~0x2000u;
      }
      Win32FreePool(*(_QWORD *)(a1 + 56));
    }
    return HMFreeObject(a1);
  }
  return result;
}
