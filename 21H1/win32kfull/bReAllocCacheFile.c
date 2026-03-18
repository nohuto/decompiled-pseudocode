/*
 * XREFs of bReAllocCacheFile @ 0xECE5E
 * Callers:
 *     _EngFntCacheAllocInternal@12 @ 0xECBCE (_EngFntCacheAllocInternal@12.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0xD6348 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 */

int __thiscall bReAllocCacheFile(void *this)
{
  int v1; // edx
  int v2; // esi
  struct _FILEVIEW *v4; // ecx
  unsigned int v5; // edi
  unsigned __int16 *v6; // ebx
  struct _FILEVIEW *v7; // ecx
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v14; // eax
  _DWORD *v15; // ecx
  int v16; // eax
  int v17; // [esp+0h] [ebp-18h]
  int v18; // [esp+0h] [ebp-18h]
  int *v19; // [esp+4h] [ebp-14h]
  int *v20; // [esp+4h] [ebp-14h]
  int v21; // [esp+14h] [ebp-4h]

  v1 = dword_274068;
  v2 = 0;
  if ( (*(_BYTE *)(dword_274068 + 12) & 4) != 0 )
    return 0;
  v4 = *(struct _FILEVIEW **)dword_274068;
  v5 = (((unsigned int)this + *(_DWORD *)(dword_274068 + 24) - *(_DWORD *)(dword_274068 + 28) + 7) & 0xFFFFFFF8)
     + 0x2000;
  v6 = *(unsigned __int16 **)(*(_DWORD *)dword_274068 + 24);
  v21 = *(_DWORD *)(dword_274068 + 20) - *(_DWORD *)dword_274068;
  if ( *(_DWORD *)dword_274068 )
  {
    vUnmapFontCacheFile();
    v1 = dword_274068;
  }
  if ( bMapFileRetainHandle((_DWORD *)(v1 + 32), (unsigned __int16 *)((char *)v6 + v5), v4, v17, v19) )
  {
    v8 = (_DWORD *)dword_274068;
    v9 = *(_DWORD *)(dword_274068 + 40);
    *(_DWORD *)dword_274068 = v9;
    *(_DWORD *)(v9 + 24) = (char *)v6 + v5;
    *(_DWORD *)(*v8 + 32) += v5;
    v10 = *v8;
    v11 = *v8 + v21;
    v12 = v11 + v8[6] - v8[5];
    v8[5] = v11;
    v8[6] = v12;
    v8[7] = v11 + *(_DWORD *)(v10 + 28) + *(_DWORD *)(v10 + 32);
    return 1;
  }
  else
  {
    v14 = bMapFileRetainHandle((_DWORD *)(dword_274068 + 32), v6, v7, v18, v20);
    v15 = (_DWORD *)dword_274068;
    if ( v14 )
    {
      v16 = *(_DWORD *)(dword_274068 + 40);
      *(_DWORD *)(dword_274068 + 12) |= 6u;
      *v15 = v16;
      v15[4] = 1;
    }
    else
    {
      *(_DWORD *)(dword_274068 + 12) |= 1u;
    }
  }
  return v2;
}
