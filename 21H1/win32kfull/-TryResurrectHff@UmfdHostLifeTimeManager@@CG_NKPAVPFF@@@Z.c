/*
 * XREFs of ?TryResurrectHff@UmfdHostLifeTimeManager@@CG_NKPAVPFF@@@Z @ 0x228F12
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z @ 0x22904B (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CGXPAX00@Z.c)
 * Callees:
 *     _EngMapFontFileFDInternal@16 @ 0x8BDE8 (_EngMapFontFileFDInternal@16.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectHff(_DWORD *a1, int a2)
{
  int v3; // edi
  PATHOBJ *v4; // esi
  unsigned int v5; // edx
  FLONG *v6; // ecx
  _DWORD *v7; // eax
  char *v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edx
  _BYTE *v12; // eax
  _DWORD *v13; // edi
  char v14; // bl
  FLONG *v16; // [esp+18h] [ebp-24h]
  PATHOBJ *v17; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v18; // [esp+20h] [ebp-1Ch]
  unsigned int v19; // [esp+24h] [ebp-18h]
  int v20; // [esp+28h] [ebp-14h] BYREF
  int v21; // [esp+2Ch] [ebp-10h] BYREF
  int v22; // [esp+30h] [ebp-Ch]
  int v23; // [esp+34h] [ebp-8h]
  _DWORD *v24; // [esp+38h] [ebp-4h]

  v24 = a1;
  v23 = a2;
  v3 = *(_DWORD *)(a2 + 60);
  v19 = *(_DWORD *)(a2 + 20);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17, 8 * v19);
  v4 = v17;
  if ( !v17 )
    goto LABEL_12;
  v5 = 0;
  v18 = 0;
  v6 = &v17->fl + v19;
  v16 = v6;
  if ( v19 )
  {
    v22 = -4 * v19;
    do
    {
      v7 = *(_DWORD **)(*(_DWORD *)(a2 + 120) + 4 * v5);
      if ( !v7[3] )
      {
        v21 = 0;
        v20 = 0;
        if ( !EngMapFontFileFDInternal(v7, &v21, &v20, 0) )
          goto LABEL_12;
        v5 = v18;
        v6 = v16;
      }
      v8 = (char *)&v6[v5];
      *(_DWORD *)&v8[v22] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v5) + 12);
      v4 = v17;
      v9 = *(_DWORD *)(*(_DWORD *)(a2 + 120) + 4 * v5++);
      v18 = v5;
      *(_DWORD *)v8 = *(_DWORD *)(v9 + 16);
      v6 = v16;
    }
    while ( v5 < v19 );
  }
  if ( UmfdInsertFontFileViewForLookup(*(int **)(a2 + 120), *(_DWORD *)(a2 + 20))
    && (v10 = *(_DWORD *)(a2 + 24),
        v11 = *(_DWORD *)(v23 + 20),
        v23 = *(_DWORD *)(v23 + 120),
        v12 = (_BYTE *)(*(int (__stdcall **)(int, int, PATHOBJ *, FLONG *, int, _DWORD, _DWORD))(v3 + 2080))(
                         v11,
                         v23,
                         v4,
                         v16,
                         v10,
                         _gusLanguageID,
                         0),
        v12 != (_BYTE *)-1)
    && v12 )
  {
    v13 = v24;
    v14 = 1;
    v12[8] = 1;
    *v13++ = *(_DWORD *)v12;
    *v13 = *((_DWORD *)v12 + 1);
    v13[1] = *((_DWORD *)v12 + 2);
    EngFreeMem(v12);
    v4 = v17;
  }
  else
  {
LABEL_12:
    v14 = 0;
  }
  if ( v4 )
    Win32FreePool(v4);
  return v14;
}
