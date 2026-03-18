/*
 * XREFs of bInitCacheTable @ 0xED634
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 * Callees:
 *     vUnmapFontCacheFile @ 0xD6348 (vUnmapFontCacheFile.c)
 *     ?bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z @ 0xDFAC4 (-bMapFileRetainHandle@@YGHPBGPAU_FILEVIEW@@HPAH@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall bInitCacheTable(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // edx
  struct _FILEVIEW *v13; // ecx
  int v14; // ebx
  int v15; // edi
  int v16; // edx
  unsigned __int16 *v17; // edi
  int v18; // esi
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v25; // [esp+0h] [ebp-1Ch]
  int *v26; // [esp+4h] [ebp-18h]
  struct _FILEVIEW *v27; // [esp+Ch] [ebp-10h]
  int v28; // [esp+10h] [ebp-Ch]
  int v29; // [esp+14h] [ebp-8h]
  int Size; // [esp+18h] [ebp-4h]

  v12 = a2 + a1 + 200;
  v13 = (struct _FILEVIEW *)(768 * a1);
  v29 = v12;
  v14 = 0;
  Size = 80 * v12;
  v28 = a2 << 11;
  v27 = v13;
  v15 = 80 * v12 + 327;
  v16 = dword_274068;
  v17 = (unsigned __int16 *)((char *)v13 + 2048 * a2 + (v15 & 0xFFFFFFF8));
  if ( *(_DWORD *)dword_274068 )
  {
    vUnmapFontCacheFile();
    v16 = dword_274068;
  }
  if ( *(_DWORD *)(v16 + 60) )
  {
    ZwClose(*(HANDLE *)(v16 + 60));
    v16 = dword_274068;
    *(_DWORD *)(dword_274068 + 60) = 0;
  }
  if ( bMapFileRetainHandle((_DWORD *)(v16 + 32), v17, v13, v25, v26) )
  {
    v18 = dword_274068;
    v19 = *(_DWORD *)(dword_274068 + 40);
    *(_DWORD *)dword_274068 = v19;
    memset((void *)(v19 + 72), 255, 0xF4u);
    memset((void *)(*(_DWORD *)v18 + 320), 0, Size);
    *(_DWORD *)(*(_DWORD *)v18 + 12) = a3;
    *(_DWORD *)(*(_DWORD *)v18 + 16) = v29;
    *(_DWORD *)(*(_DWORD *)v18 + 20) = 0;
    **(_DWORD **)v18 = 0;
    v20 = *(_DWORD *)v18;
    *(_DWORD *)(v20 + 56) = a4;
    *(_DWORD *)(v20 + 60) = a5;
    v21 = *(_DWORD *)v18;
    *(_DWORD *)(v21 + 64) = a6;
    *(_DWORD *)(v21 + 68) = a7;
    v22 = *(_DWORD *)v18;
    *(_DWORD *)(v22 + 40) = a8;
    *(_DWORD *)(v22 + 44) = a9;
    v23 = *(_DWORD *)v18;
    *(_DWORD *)(v23 + 48) = a10;
    *(_DWORD *)(v23 + 52) = a11;
    *(_DWORD *)(*(_DWORD *)v18 + 24) = v17;
    *(_DWORD *)(*(_DWORD *)v18 + 28) = (char *)v27 + v28;
    *(_DWORD *)(*(_DWORD *)v18 + 32) = 0;
    *(_DWORD *)(*(_DWORD *)v18 + 36) = 0;
    return 1;
  }
  return v14;
}
