/*
 * XREFs of EngMapFontFileFDInternal @ 0x1C00E3398
 * Callers:
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00E3318 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     EngMapFontFileFD @ 0x1C0289730 (EngMapFontFileFD.c)
 *     ?TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ @ 0x1C02A71C4 (-TryMapAllFileViews@UmfdClientSideFileViewMapper@@AEAAIXZ.c)
 *     GreMakeFontDir @ 0x1C02B9A6C (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02BA760 (NtGdiGetFontFileData.c)
 *     ?TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C0CA0 (-TryResurrectHff@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C008E238 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C008E358 (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C008E438 (-bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C008EBCC (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008EC14 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall EngMapFontFileFDInternal(__int64 a1, _QWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v8; // edi
  int v9; // esi
  __int64 v10; // r8
  _QWORD *v11; // r14
  void *v12; // rcx
  __int64 v13; // rcx
  int Section; // esi
  __int64 v15; // r8
  unsigned int v17; // esi
  struct _KPROCESS *CurrentThreadProcess; // rax
  enum _SECTION_INHERIT v19; // [rsp+30h] [rbp-A9h]
  unsigned int v20; // [rsp+38h] [rbp-A1h]
  unsigned int v21; // [rsp+40h] [rbp-99h]
  unsigned __int64 v22; // [rsp+50h] [rbp-89h] BYREF
  union _LARGE_INTEGER v23; // [rsp+58h] [rbp-81h] BYREF
  union _LARGE_INTEGER v24; // [rsp+60h] [rbp-79h] BYREF
  __int64 v25[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C0h] [rbp-19h] BYREF

  memset(v25, 0, sizeof(v25));
  v8 = 1;
  v9 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v11 = (_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a1 + 16) )
  {
    ++*(_DWORD *)(a1 + 100);
    v9 = 0;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 80) )
    {
      GreReleaseFastMutex(ghfmMemory);
      return 0LL;
    }
    v12 = *(void **)(a1 + 32);
    if ( v12 )
    {
      v22 = 0LL;
      v23.QuadPart = 0LL;
      if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
                  v12,
                  (void **)(a1 + 16),
                  v10,
                  0LL,
                  &v23,
                  &v22,
                  v19,
                  v20,
                  v21,
                  (unsigned __int64 *)(a1 + 72)) < 0 )
        v8 = 0;
      else
        *(_DWORD *)(a1 + 100) = 1;
      v9 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( !v9 )
  {
LABEL_17:
    if ( v8 )
    {
      if ( a2 )
        *a2 = *v11;
      if ( a3 )
        *a3 = *(_DWORD *)(a1 + 24);
    }
    return v8;
  }
  LODWORD(v22) = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( a4 )
  {
    CurrentThreadProcess = (struct _KPROCESS *)PsGetCurrentThreadProcess(v13);
    KeStackAttachProcess(CurrentThreadProcess, &ApcState);
  }
  Section = bCreateSection(
              *(PCWSTR *)(a1 + 80),
              (struct _FILEVIEW *)v25,
              0,
              (int *)&v22,
              (*(_DWORD *)(a1 + 40) & 8) != 0);
  if ( a4 )
    KeUnstackDetachProcess(&ApcState);
  if ( !Section )
    return 0;
  v23.QuadPart = 0LL;
  v24.QuadPart = 0LL;
  if ( (int)UmfdHostLifeTimeManager::MmMapViewOfSection(
              (void *)v25[4],
              (void **)&v25[2],
              v15,
              0LL,
              &v24,
              (unsigned __int64 *)&v23.QuadPart,
              v19,
              v20,
              v21,
              (unsigned __int64 *)&v25[9]) >= 0 )
  {
    GreAcquireFastMutex(ghfmMemory);
    ++*(_DWORD *)(a1 + 100);
    if ( *v11 )
    {
      v17 = 0;
    }
    else
    {
      v17 = bMapRoutine((__int64 *)a1, v25, 1, v22);
      v8 = v17;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v17 )
      vUnmapFileFD((struct _FILEVIEW *)v25, 1);
    goto LABEL_17;
  }
  vUnreferenceFileviewSection((struct _FILEVIEW *)v25);
  return 0LL;
}
