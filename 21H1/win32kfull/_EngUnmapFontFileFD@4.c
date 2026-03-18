/*
 * XREFs of _EngUnmapFontFileFD@4 @ 0x8B56C
 * Callers:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8B50C (-UmfdEscEngUnmapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ @ 0xD47CC (-UnmapMappedViews@UmfdClientSideFileViewMapper@@AAEXXZ.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z @ 0xDE468 (-MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 * Callees:
 *     ?vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z @ 0x8CCEA (-vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  int v1; // eax
  int v2; // eax
  struct _FILEVIEW *v3; // [esp+0h] [ebp-40h]
  unsigned __int8 v4; // [esp+4h] [ebp-3Ch]
  _DWORD v5[12]; // [esp+10h] [ebp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  if ( iFile )
  {
    GreAcquireFastMutex(_ghfmMemory);
    v1 = *(_DWORD *)(iFile + 60);
    if ( v1 )
    {
      v2 = v1 - 1;
      *(_DWORD *)(iFile + 60) = v2;
      if ( !v2 )
      {
        if ( *(_DWORD *)(iFile + 48) )
        {
          qmemcpy(v5, (const void *)iFile, sizeof(v5));
          if ( *(_DWORD *)(iFile + 12) )
          {
            *(_DWORD *)(iFile + 12) = 0;
            if ( !*(_DWORD *)(iFile + 8) && (*(_BYTE *)(iFile + 24) & 0x18) != 0 )
            {
              *(_DWORD *)(iFile + 28) = 0;
              *(_DWORD *)(iFile + 20) = 0;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(_ghfmMemory);
    if ( v5[3] )
      vUnmapFileFD(v3, v4);
  }
}
