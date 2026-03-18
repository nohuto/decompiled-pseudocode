/*
 * XREFs of ?bUnreferenceNetworkedFontFileNode@@YG_NPAU_NETWORKED_FONT_FONT_FILE_NODE@@@Z @ 0x1E8F4E
 * Callers:
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@PAT_LARGE_INTEGER@@_N@Z @ 0x1E89E2 (-ObtainSectionForNetworkedFontFile@@YGJPAU_UNICODE_STRING@@PAU_FILEVIEW@@PAU_OBJECT_ATTRIBUTES@@.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

char __thiscall bUnreferenceNetworkedFontFileNode(int this)
{
  char v3; // bl
  int v5; // [esp+8h] [ebp-4h] BYREF

  v5 = *(_DWORD *)gpxsGlobals;
  GreAcquireSemaphore(v5);
  if ( (*(_DWORD *)(this + 16))-- == 1 )
  {
    if ( *(_DWORD *)this )
    {
      ZwClose(*(HANDLE *)this);
      *(_DWORD *)this = 0;
    }
    RtlDeleteElementGenericTableAvl(*((PRTL_AVL_TABLE *)gpxsGlobals + 1), (PVOID)this);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  return v3;
}
