/*
 * XREFs of _LdrpGetDelayloadDescriptor@8 @ 0x4B32F7C7
 * Callers:
 *     _LdrQueryOptionalDelayLoadedAPI@16 @ 0x4B32F5D0 (_LdrQueryOptionalDelayLoadedAPI@16.c)
 *     _LdrResolveDelayLoadsFromDll@12 @ 0x4B32F670 (_LdrResolveDelayLoadsFromDll@12.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     __stricmp @ 0x4B2F7400 (__stricmp.c)
 */

_DWORD *__fastcall LdrpGetDelayloadDescriptor(PVOID BaseOfImage, const char *a2)
{
  char *v2; // eax
  int v3; // edi
  _DWORD *v4; // esi
  ULONG v5; // eax
  ULONG v6; // ebx
  ULONG Size; // [esp+14h] [ebp-4h] BYREF

  v2 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xDu, &Size);
  v3 = 0;
  if ( v2 )
  {
    v4 = v2 + 4;
    v5 = Size >> 5;
    v6 = 0;
    Size >>= 5;
    if ( *v4 )
    {
      while ( v6 < v5 )
      {
        if ( !_stricmp((const char *)BaseOfImage + *v4, a2) )
          return v4 - 1;
        v5 = Size;
        v4 += 8;
        ++v6;
        if ( !*v4 )
          return (_DWORD *)v3;
      }
    }
  }
  return (_DWORD *)v3;
}
