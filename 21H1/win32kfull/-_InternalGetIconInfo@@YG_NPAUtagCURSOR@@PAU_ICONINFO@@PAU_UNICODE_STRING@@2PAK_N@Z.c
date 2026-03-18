/*
 * XREFs of ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30
 * Callers:
 *     _NtUserGetIconInfo@24 @ 0x74F2A (_NtUserGetIconInfo@24.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 *     ?GetCursorHeight@@YGHXZ @ 0x1A07A4 (-GetCursorHeight@@YGHXZ.c)
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

char __userpurge _InternalGetIconInfo@<al>(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagCURSOR *a3,
        struct _ICONINFO *a4,
        struct _UNICODE_STRING *a5,
        struct _UNICODE_STRING *a6,
        unsigned int *a7,
        bool a8)
{
  int v8; // edi
  INT v9; // esi
  int v10; // ebx
  int v11; // eax
  int DIBitmapReal; // eax
  int v13; // ecx
  int v14; // ecx
  int v16; // ecx
  __int16 AtomName; // ax
  int *v18; // edi
  int v19; // eax
  int *v20; // [esp+0h] [ebp-98h]
  int *v21; // [esp+4h] [ebp-94h]
  int v23; // [esp+28h] [ebp-70h]
  int v24; // [esp+2Ch] [ebp-6Ch]
  int v25; // [esp+30h] [ebp-68h]
  BOOL v26; // [esp+34h] [ebp-64h]
  int v27; // [esp+38h] [ebp-60h]
  int Bitmap; // [esp+40h] [ebp-58h]
  int v29; // [esp+44h] [ebp-54h] BYREF
  INT b; // [esp+48h] [ebp-50h]
  int v31; // [esp+4Ch] [ebp-4Ch]
  _DWORD v32[3]; // [esp+50h] [ebp-48h] BYREF
  __int16 v33; // [esp+5Ch] [ebp-3Ch]
  __int16 v34; // [esp+5Eh] [ebp-3Ah]
  int v35; // [esp+60h] [ebp-38h]
  int v36; // [esp+64h] [ebp-34h]
  int v37; // [esp+68h] [ebp-30h]
  int v38; // [esp+6Ch] [ebp-2Ch]
  int v39; // [esp+70h] [ebp-28h]
  int v40; // [esp+74h] [ebp-24h]
  int v41; // [esp+78h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v8 = a2;
  v25 = a2;
  b = 0;
  v29 = 0;
  if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
  {
    v18 = *(int **)(a2 + 56);
    if ( !v18 )
      return 0;
    v8 = *v18;
    v25 = v8;
  }
  GetVirtualizedCursorSize((struct tagCURSOR *)&v29, v20, v21);
  v9 = b;
  v26 = b != *(_DWORD *)(v8 + 88);
  if ( (_BYTE)a6 || !*(_DWORD *)(v8 + 56) )
  {
    v10 = v29;
    v11 = v29;
  }
  else
  {
    v10 = v29;
    v11 = v29 / 2;
  }
  Bitmap = GreCreateBitmap(b, v11, 1, 1, 0);
  if ( !Bitmap )
    return 0;
  v31 = 0;
  if ( *(_DWORD *)(v8 + 56) )
  {
    if ( *(_DWORD *)(v8 + 84) == 32 )
    {
      v37 = 0;
      v38 = 0;
      v41 = 0;
      v32[0] = 40;
      v32[1] = v9;
      v32[2] = v10 / 2;
      v33 = 1;
      v34 = 32;
      v35 = 0;
      v36 = 0;
      v39 = 0;
      v40 = 0;
      DIBitmapReal = GreCreateDIBitmapReal(0, v32, 0, 44, 0, 0, 0, 0, 0, 0, 0);
    }
    else
    {
      DIBitmapReal = GreCreateCompatibleBitmapInternal(*(HDC *)(_gpDispInfo + 32), v9, v10 / 2, 0, 0, 0);
    }
    v31 = DIBitmapReal;
    if ( !DIBitmapReal )
    {
      GreDeleteObject(Bitmap);
      return 0;
    }
  }
  v24 = GreSelectBitmap(_ghdcMem2, *(_DWORD *)(v8 + 52));
  v23 = GreSelectBitmap(_ghdcMem, Bitmap);
  v13 = *(_DWORD *)(v8 + 56);
  if ( v26 )
  {
    if ( !v13 || (_BYTE)a6 )
      v19 = *(_DWORD *)(v8 + 92);
    else
      v19 = *(_DWORD *)(v8 + 92) >> 1;
    if ( !v13 || (_BYTE)a6 )
      v27 = v10;
    else
      v27 = v10 / 2;
    v9 = b;
    GreStretchBltInternal(_ghdcMem, 0, 0, b, v27, _ghdcMem2, 0, 0, *(_DWORD *)(v8 + 88), v19, 13369376, 0xFFFFFF, 0);
  }
  else
  {
    if ( !v13 || (_BYTE)a6 )
      v14 = v10;
    else
      v14 = v10 / 2;
    NtGdiBitBltInternal(_ghdcMem, 0, 0, v9, v14, _ghdcMem2, 0, 0, 13369376, 0xFFFFFF, 0);
  }
  if ( v31 )
  {
    GreSelectBitmap(_ghdcMem2, *(_DWORD *)(v8 + 56));
    GreSelectBitmap(_ghdcMem, v31);
    if ( v26 )
    {
      v9 = b;
      GreStretchBltInternal(
        _ghdcMem,
        0,
        0,
        b,
        v29 / 2,
        _ghdcMem2,
        0,
        0,
        *(_DWORD *)(v8 + 88),
        *(_DWORD *)(v8 + 92) >> 1,
        13369376,
        0,
        0);
      v8 = v25;
    }
    else
    {
      NtGdiBitBltInternal(_ghdcMem, 0, 0, v9, v10 / 2, _ghdcMem2, 0, 0, 13369376, 0, 0);
    }
  }
  GreSelectBitmap(_ghdcMem2, v24);
  GreSelectBitmap(_ghdcMem, v23);
  ms_exc.registration.TryLevel = 0;
  *a1 = *(_WORD *)(v8 + 38) == 3;
  a1[1] = EngMulDiv(*(__int16 *)(v8 + 48), v9, *(_DWORD *)(v8 + 88));
  a1[2] = EngMulDiv(*(__int16 *)(v8 + 50), b, *(_DWORD *)(v8 + 88));
  a1[3] = Bitmap;
  a1[4] = v31;
  if ( a3 )
  {
    v16 = *(unsigned __int16 *)(v8 + 36);
    if ( (_WORD)v16 )
      AtomName = UserGetAtomName(v16, *((_DWORD *)a3 + 1), *((unsigned __int16 *)a3 + 1) >> 1);
    else
      AtomName = 0;
    *(_WORD *)a3 = AtomName;
  }
  if ( a4 )
  {
    if ( (*(_DWORD *)(v8 + 32) & 0xFFFF0000) != 0 )
    {
      RtlCopyUnicodeString((PUNICODE_STRING)a4, (PCUNICODE_STRING)(v8 + 28));
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(v8 + 28);
      *((_DWORD *)a4 + 1) = *(_DWORD *)(v8 + 32);
    }
  }
  if ( a5 )
    *(_DWORD *)&a5->Length = *(_DWORD *)(v8 + 84);
  ms_exc.registration.TryLevel = -2;
  return 1;
}
