/*
 * XREFs of _LdrpGetImportDescriptorForSnap@4 @ 0x4B2E5CCD
 * Callers:
 *     _LdrpMapAndSnapDependency@4 @ 0x4B2CB3D0 (_LdrpMapAndSnapDependency@4.c)
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 *     _RtlpImageDirectoryEntryToDataEx@20 @ 0x4B2BE470 (_RtlpImageDirectoryEntryToDataEx@20.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpCheckPagesForTampering@8 @ 0x4B334478 (_LdrpCheckPagesForTampering@8.c)
 *     _LdrpMapCleanModuleView@4 @ 0x4B334528 (_LdrpMapCleanModuleView@4.c)
 */

void *__thiscall LdrpGetImportDescriptorForSnap(_DWORD *this)
{
  int v1; // esi
  int v2; // ebx
  void *v3; // ecx
  int v6; // [esp+14h] [ebp-24h] BYREF
  int v7; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[6]; // [esp+1Ch] [ebp-1Ch] BYREF

  v1 = this[8];
  if ( RtlpImageDirectoryEntryToDataEx(*(_DWORD *)(v1 + 24), 1, 1u, &v6, &v7) >= 0 )
    v2 = v7;
  else
    v2 = 0;
  if ( v1 == LdrpImageEntry )
  {
    qmemcpy(v8, &unk_4B3A92E8, sizeof(v8));
    if ( ((v8[3] >> 12) & 3) == 1 )
    {
      RtlImageNtHeaderEx(3, *(_DWORD *)(v1 + 24), 0, 0, &v7);
      if ( ((unsigned __int8)LdrpCheckPagesForTampering(v7 + 128, 8)
         || (unsigned __int8)LdrpCheckPagesForTampering(v2, v6))
        && LdrpMapCleanModuleView(this) >= 0 )
      {
        return RtlImageDirectoryEntryToData(v3, this[26], 1, 1, (int)&v6);
      }
    }
  }
  return (void *)v2;
}
