/*
 * XREFs of _GreMakeFontDir@12 @ 0x221195
 * Callers:
 *     _NtGdiMakeFontDir@20 @ 0x2138ED (_NtGdiMakeFontDir@20.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     _EngUnmapFontFileFD@4 @ 0x8B56C (_EngUnmapFontFileFD@4.c)
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ?vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z @ 0x8CD1A (-vUnreferenceFileviewSection@@YGXPAU_FILEVIEW@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _GreFillFontDir@12 @ 0x220E8D (_GreFillFontDir@12.c)
 */

unsigned int __fastcall GreMakeFontDir(int a1, int a2, ULONG_PTR a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v5; // edi
  int v6; // eax
  int v7; // edi
  int v8; // eax
  void (__stdcall *v9)(ULONG_PTR, int); // eax
  unsigned int v11; // [esp+38h] [ebp-68h]
  int v12; // [esp+3Ch] [ebp-64h] BYREF
  int v13; // [esp+40h] [ebp-60h] BYREF
  ULONG_PTR *v14; // [esp+44h] [ebp-5Ch] BYREF
  int v15; // [esp+48h] [ebp-58h] BYREF
  int v16; // [esp+4Ch] [ebp-54h]
  int v17; // [esp+50h] [ebp-50h] BYREF
  ULONG_PTR v18; // [esp+54h] [ebp-4Ch] BYREF
  ULONG_PTR iFile[18]; // [esp+58h] [ebp-48h] BYREF

  v3 = dword_2785B8;
  v4 = 0;
  v16 = a2;
  v17 = a1;
  v15 = 0;
  v5 = 0;
  v11 = 0;
  if ( !dword_2785B8 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0;
  memset(iFile, 0, sizeof(iFile));
  v13 = 0;
  v12 = 0;
  v14 = iFile;
  iFile[12] = a3;
  if ( EngMapFontFileFDInternal(iFile, &v13, &v12, 0) )
  {
    if ( UmfdInsertFontFileViewForLookup((int *)&v14, 1u) )
    {
      v6 = (*(int (__stdcall **)(int, ULONG_PTR **, int *, int *, _DWORD, _DWORD, _DWORD))(v3 + 2080))(
             1,
             &v14,
             &v13,
             &v12,
             0,
             _gusLanguageID,
             0);
      v7 = v6;
      if ( v6 )
      {
        if ( v6 == -1 )
          goto LABEL_13;
        v8 = (*(int (__stdcall **)(_DWORD, int, int, int *))(v3 + 2004))(0, v6, 1, &v15);
        v18 = v8;
        if ( v8 )
        {
          v11 = GreFillFontDir(v8, v17, v16);
          v9 = *(void (__stdcall **)(ULONG_PTR, int))(v3 + 2068);
          if ( v9 )
            v9(v18, v15);
        }
        if ( v7 == -1 )
LABEL_13:
          v5 = v11;
        else
          v5 = (*(int (__stdcall **)(int))(v3 + 2084))(v7) != 0 ? v11 : 0;
      }
      else
      {
        v5 = 0;
      }
    }
    if ( iFile[9] )
    {
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v17, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
      if ( UmfdFileviewLookup )
      {
        v18 = iFile[9];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(&v18);
        iFile[9] = 0;
      }
      if ( v17 )
      {
        ExReleasePushLockExclusiveEx(v17, 0);
        KeLeaveCriticalRegion();
      }
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((int)iFile);
    return v5;
  }
  return v4;
}
