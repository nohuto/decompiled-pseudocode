/*
 * XREFs of ?vStrMirror04@@YGXPAVSURFACE@@@Z @ 0x22A61D
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vStrMirror04(struct SURFACE *a1)
{
  struct SURFACE *v1; // ecx
  _DWORD *v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // esi
  int v6; // ebx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // edx
  int v10; // ebx
  int v11; // ecx
  unsigned int *v12; // edi
  int *v13; // edx
  unsigned int v14; // [esp+4h] [ebp-34h]
  int i; // [esp+8h] [ebp-30h]
  int v16; // [esp+Ch] [ebp-2Ch]
  _DWORD *v17; // [esp+10h] [ebp-28h]
  int v18; // [esp+14h] [ebp-24h]
  int v19; // [esp+18h] [ebp-20h]
  int v20; // [esp+1Ch] [ebp-1Ch]
  unsigned int *v21; // [esp+20h] [ebp-18h]
  int *v22; // [esp+24h] [ebp-14h]
  int v23; // [esp+28h] [ebp-10h]
  int v24; // [esp+2Ch] [ebp-Ch]
  int v25; // [esp+30h] [ebp-8h]
  unsigned int v26; // [esp+34h] [ebp-4h]

  v1 = a1;
  v16 = 0;
  v2 = (_DWORD *)*((_DWORD *)a1 + 12);
  v17 = v2;
  for ( i = *((_DWORD *)a1 + 8) / 2; v16 < *((_DWORD *)v1 + 9); ++v16 )
  {
    v24 = 0;
    v3 = *((_DWORD *)v1 + 8) - 1;
    v23 = 0;
    v4 = v3 >> 3;
    v5 = v3 & 7;
    v26 = *v2;
    v6 = 0;
    v20 = v4;
    v19 = v5;
    v22 = &v2[v4];
    v25 = *v22;
    v21 = v2;
    if ( i > 0 )
    {
      v7 = *v2;
      v18 = i;
      do
      {
        if ( v6 == v4 )
        {
          v8 = ((v26 & dword_252A40[v24]) >> dword_252A20[v24] << dword_252A20[v5]) | (v26 & ~dword_252A40[v24] | ((v7 & dword_252A40[v5]) >> dword_252A20[v5] << dword_252A20[v24])) & ~dword_252A40[v5];
        }
        else
        {
          v9 = dword_252A20[v24];
          v10 = dword_252A40[v5];
          v14 = (v7 & dword_252A40[v24]) >> v9;
          v11 = dword_252A20[v5];
          v8 = v26 & ~dword_252A40[v24] | ((v25 & (unsigned int)v10) >> v11 << v9);
          v25 = (v14 << v11) | v25 & ~v10;
        }
        v12 = v21;
        v5 = v19 - 1;
        v6 = v23;
        v4 = v20;
        v26 = v8;
        ++v24;
        --v19;
        if ( (v24 & 8) != 0 )
        {
          *v21 = v8;
          v12 = v21 + 1;
          v6 = v23 + 1;
          ++v21;
          v23 = v6;
          if ( v6 == v20 )
            *v22 = v25;
          v7 = *v12;
          v26 = *v12;
          v24 = 0;
        }
        else
        {
          v7 = v8;
        }
        v13 = v22;
        if ( v5 < 0 )
        {
          *v22 = v25;
          v13 = v22 - 1;
          v4 = v20 - 1;
          --v22;
          v20 = v4;
          if ( v4 != v6 )
            v25 = *v13;
          v5 = 7;
          v19 = 7;
        }
        *v12 = v7;
        if ( v6 != v4 )
          *v13 = v25;
        --v18;
      }
      while ( v18 );
      v1 = a1;
      v2 = v17;
    }
    v2 = (_DWORD *)((char *)v2 + *((_DWORD *)v1 + 13));
    v17 = v2;
  }
}
