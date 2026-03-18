/*
 * XREFs of ?AlphaScanLineBlend@@YGHPAEPAU_RECTL@@J0JPAU_POINTL@@PAU_XLATEOBJ@@33VXEPALOBJ@@4PAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x52CD0
 * Callers:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __fastcall AlphaScanLineBlend(
        int a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // ebx
  int v15; // esi
  char *v16; // edx
  int v17; // edi
  int v18; // esi
  char *v19; // esi
  __int64 v20; // rax
  int v21; // eax
  char *v22; // edi
  int v23; // ecx
  char *v24; // eax
  char *v26; // edi
  char *v27; // ebx
  int v29; // [esp+10h] [ebp-48h]
  unsigned int v30; // [esp+14h] [ebp-44h]
  int v32; // [esp+20h] [ebp-38h]
  char *v33; // [esp+24h] [ebp-34h]
  char *v34; // [esp+28h] [ebp-30h]
  int v35; // [esp+2Ch] [ebp-2Ch]
  int v36; // [esp+30h] [ebp-28h]
  signed int Size; // [esp+34h] [ebp-24h]
  int v38; // [esp+38h] [ebp-20h]
  char *v39; // [esp+3Ch] [ebp-1Ch]
  char *v40; // [esp+64h] [ebp+Ch]

  v36 = *a2;
  v12 = a2[2] - *a2;
  v38 = v12;
  v13 = a2[1];
  v35 = a2[3] - v13;
  v32 = 4 * v12;
  Size = 0;
  v30 = *(_DWORD *)(a12 + 4);
  v14 = v30 >> 3;
  v15 = *(_DWORD *)a12 >> 3;
  v34 = 0;
  v16 = 0;
  v39 = 0;
  v33 = 0;
  if ( !a9 )
    return 0;
  v29 = *(_DWORD *)(a9 + 44);
  if ( 4 * v12 < v12 )
    return 0;
  v17 = a3 * v13;
  if ( v15 )
  {
    v18 = v36 * v15;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v18 = v36 / 8;
    else
      v18 = v36 / 2;
    v16 = 0;
  }
  v19 = (char *)(a1 + v17 + v18);
  LODWORD(v20) = *a6;
  if ( v14 )
  {
    v21 = v14 * v20;
  }
  else
  {
    v20 = (int)v20;
    if ( v30 == 1 )
      v21 = ((BYTE4(v20) & 7) + (int)v20) >> 3;
    else
      v21 = (int)v20 / 2;
    v16 = 0;
  }
  v22 = (char *)(a4 + v21 + a5 * a6[1]);
  v23 = a12;
  if ( *(_DWORD *)(a12 + 12) )
    Size = v32;
  if ( *(_DWORD *)(a12 + 8) )
  {
    Size += v32;
    if ( Size < v32 )
      return 0;
  }
  if ( Size )
  {
    v33 = (char *)PALLOCMEM2(Size, 1886150983, 1);
    if ( v33 )
    {
      v16 = 0;
      v23 = a12;
      goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  v24 = v33;
  if ( *(_DWORD *)(v23 + 8) )
  {
    v34 = v33;
    v24 = &v33[v32];
  }
  if ( *(_DWORD *)(v23 + 12) )
  {
    v16 = v24;
    v39 = v24;
  }
  v40 = v22;
  while ( v35-- )
  {
    v26 = v40;
    v27 = v19;
    if ( v34 )
    {
      (*(void (__stdcall **)(char *, char *, _DWORD, int, int))(v23 + 8))(v34, v40, 0, v38, a7);
      v26 = v34;
      v16 = v39;
      v23 = a12;
    }
    if ( v16 )
    {
      (*(void (__stdcall **)(char *, char *, _DWORD, int, int))(v23 + 12))(v16, v19, 0, v38, a8);
      v27 = v39;
      v23 = a12;
    }
    (*(void (__stdcall **)(char *, char *, int, _DWORD))(v23 + 20))(v27, v26, v38, *(_DWORD *)(v23 + 24));
    v16 = v39;
    if ( v39 )
    {
      (*(void (__stdcall **)(char *, char *, int, _DWORD, int, int, int))(a12 + 16))(v19, v39, v38, 0, a9, a10, v29);
      v16 = v39;
    }
    v19 += a3;
    v40 += a5;
    v23 = a12;
  }
  if ( Size )
    Win32FreePool(v33);
  return 1;
}
