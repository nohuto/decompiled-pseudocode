/*
 * XREFs of _EngMapFontFileFDInternal@16 @ 0x8BDE8
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BD34 (-UmfdEscEngMapFontFileFD@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AAEIXZ @ 0xD315A (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AAEIXZ.c)
 *     ?MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z @ 0xDE468 (-MapFontFiles@@YG_NKPAPAU_FONTFILEVIEW@@PAPAXPAK@Z.c)
 *     _EngMapFontFileFD@12 @ 0x1E9130 (_EngMapFontFileFD@12.c)
 *     _GreMakeFontDir@12 @ 0x221195 (_GreMakeFontDir@12.c)
 *     _NtGdiGetFontFileData@20 @ 0x221DD2 (_NtGdiGetFontFileData@20.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x228F12 (-TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z.c)
 * Callees:
 *     ?bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z @ 0x8C608 (-bCreateSection@@YGHPBGPAU_FILEVIEW@@HPAHE@Z.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SGJPAXPAPAXKKPAT_LARGE_INTEGER@@PAKW4_SECTION_INHERIT@@KKPA_K@Z @ 0x8C716 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SGJPAXPAPAXKKPAT_LARGE_INTEGER@@PAKW4_SECTION_INHER.c)
 *     ?bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x8CBA4 (-bMapRoutine@@YGHPAU_FONTFILEVIEW@@PAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z @ 0x8CCEA (-vUnmapFileFD@@YGXPAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall EngMapFontFileFDInternal(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  int v4; // esi
  int v6; // edi
  void *v8; // ecx
  int Section; // eax
  void *v10; // ecx
  struct _KPROCESS *CurrentThreadProcess; // eax
  union _LARGE_INTEGER *v12; // [esp-10h] [ebp-90h]
  unsigned int *v13; // [esp-Ch] [ebp-8Ch]
  unsigned int *v14; // [esp-Ch] [ebp-8Ch]
  enum _SECTION_INHERIT v15; // [esp-8h] [ebp-88h]
  enum _SECTION_INHERIT v16; // [esp-8h] [ebp-88h]
  int *v17; // [esp+0h] [ebp-80h]
  unsigned int v18; // [esp+0h] [ebp-80h]
  struct _FILEVIEW *v19; // [esp+0h] [ebp-80h]
  unsigned __int64 *v20; // [esp+4h] [ebp-7Ch]
  unsigned __int64 *v21; // [esp+4h] [ebp-7Ch]
  unsigned __int8 v22; // [esp+4h] [ebp-7Ch]
  int v23; // [esp+10h] [ebp-70h]
  enum _SECTION_INHERIT v24; // [esp+14h] [ebp-6Ch] BYREF
  unsigned int v25[2]; // [esp+18h] [ebp-68h] BYREF
  _DWORD *v26; // [esp+20h] [ebp-60h]
  _DWORD *v27; // [esp+24h] [ebp-5Ch]
  unsigned int v28[2]; // [esp+28h] [ebp-58h] BYREF
  unsigned int v29[13]; // [esp+30h] [ebp-50h] BYREF
  struct _KAPC_STATE ApcState; // [esp+64h] [ebp-1Ch] BYREF

  v27 = a3;
  v4 = 0;
  v26 = a2;
  memset(v29, 0, 0x30u);
  v23 = 1;
  v6 = 1;
  GreAcquireFastMutex(_ghfmMemory);
  if ( a1[3] )
  {
    ++a1[15];
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  if ( !a1[12] )
  {
    GreReleaseFastMutex(_ghfmMemory);
    return 0;
  }
  v8 = (void *)a1[5];
  if ( v8 )
  {
    v24 = 0;
    v25[0] = 0;
    v25[1] = 0;
    if ( UmfdHostLifeTimeManager::MmMapViewOfSection(
           v8,
           0,
           (unsigned int)v25,
           (unsigned int)&v24,
           v12,
           v13,
           v15,
           (unsigned int)(a1 + 10),
           (unsigned int)v17,
           v20) >= 0 )
    {
      v23 = 1;
      a1[15] = 1;
    }
    else
    {
      v23 = 0;
    }
    goto LABEL_3;
  }
LABEL_4:
  GreReleaseFastMutex(_ghfmMemory);
  if ( !v6 )
  {
LABEL_5:
    v4 = v23;
    if ( v23 )
    {
      if ( v26 )
        *v26 = a1[3];
      if ( v27 )
        *v27 = a1[4];
    }
    return v4;
  }
  v24 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess();
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(0, (struct _FILEVIEW *)&v24, (a1[6] & 8) != 0, v17, (unsigned __int8)v20);
  v25[0] = Section;
  if ( a4 )
  {
    KeUnstackDetachProcess(&ApcState);
    Section = v25[0];
  }
  if ( !Section )
    return v4;
  v25[0] = 0;
  v28[0] = 0;
  v28[1] = 0;
  if ( UmfdHostLifeTimeManager::MmMapViewOfSection(
         v10,
         0,
         (unsigned int)v28,
         (unsigned int)v25,
         v12,
         v14,
         v16,
         (unsigned int)&v29[10],
         v18,
         v21) >= 0 )
  {
    GreAcquireFastMutex(_ghfmMemory);
    ++a1[15];
    if ( !a1[3] )
    {
      v4 = bMapRoutine(a1, v29, 1, v24);
      v23 = v4;
    }
    GreReleaseFastMutex(_ghfmMemory);
    if ( !v4 )
      vUnmapFileFD(v19, v22);
    goto LABEL_5;
  }
  vUnreferenceFileviewSection(v19);
  return 0;
}
