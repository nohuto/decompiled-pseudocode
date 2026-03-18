/*
 * XREFs of ?vStrMirror01@@YGXPAVSURFACE@@@Z @ 0xBB4B2
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vStrMirror01(unsigned int **a1)
{
  struct SURFACE *v1; // ebx
  int v2; // esi
  int v3; // eax
  unsigned int *v4; // edx
  int v5; // esi
  int *v6; // ecx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // ecx
  int v12; // [esp+8h] [ebp-30h]
  int v13; // [esp+Ch] [ebp-2Ch]
  int v14; // [esp+10h] [ebp-28h]
  unsigned int *v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+18h] [ebp-20h]
  int v17; // [esp+1Ch] [ebp-1Ch]
  unsigned int *v18; // [esp+20h] [ebp-18h]
  int *v19; // [esp+24h] [ebp-14h]
  int v20; // [esp+28h] [ebp-10h]
  int v21; // [esp+2Ch] [ebp-Ch]
  int v22; // [esp+30h] [ebp-8h]
  unsigned int v23; // [esp+34h] [ebp-4h]

  v12 = 0;
  v1 = (struct SURFACE *)a1;
  v15 = a1[12];
  v14 = (int)a1[8] / 2;
  if ( (int)a1[9] > 0 )
  {
    do
    {
      v20 = 0;
      v2 = *((_DWORD *)v1 + 8) - 1;
      v21 = 0;
      v3 = v2 >> 5;
      v4 = v15;
      v5 = v2 & 0x1F;
      v17 = v3;
      v16 = v5;
      v6 = (int *)&v15[v3];
      v18 = v15;
      v23 = *v15;
      v22 = *v6;
      v7 = 0;
      v19 = v6;
      if ( v14 > 0 )
      {
        v8 = *v15;
        v13 = v14;
        do
        {
          if ( v7 == v3 )
          {
            v8 = ((v23 & dword_252A60[v21]) >> dword_252B90[v21] << dword_252B90[v5]) | ~dword_252A60[v5] & (v23 & ~dword_252A60[v21] | ((v23 & dword_252A60[v5]) >> dword_252B90[v5] << dword_252B90[v21]));
            v23 = v8;
          }
          else
          {
            v9 = v8 & dword_252A60[v21];
            v10 = dword_252A60[v5];
            v11 = dword_252B90[v5];
            v23 = v23 & ~dword_252A60[v21] | ((v22 & (unsigned int)v10) >> v11 << dword_252B90[v21]);
            v22 = (v9 >> dword_252B90[v21] << v11) | v22 & ~v10;
            v8 = v23;
          }
          v4 = v18;
          v5 = v16 - 1;
          v7 = v20;
          v3 = v17;
          ++v21;
          --v16;
          if ( (v21 & 0x20) != 0 )
          {
            *v18 = v8;
            v4 = v18 + 1;
            v7 = v20 + 1;
            ++v18;
            v20 = v7;
            if ( v7 == v17 )
              *v19 = v22;
            v8 = *v4;
            v23 = *v4;
            v21 = 0;
          }
          v6 = v19;
          if ( v5 < 0 )
          {
            *v19 = v22;
            v6 = v19 - 1;
            v3 = v17 - 1;
            --v19;
            v17 = v3;
            if ( v3 == v7 )
              *v4 = v8;
            else
              v22 = *v6;
            v5 = 31;
            v16 = 31;
          }
          --v13;
        }
        while ( v13 );
        v1 = (struct SURFACE *)a1;
      }
      *v4 = v23;
      if ( v7 != v3 )
        *v6 = v22;
      v15 = (unsigned int *)((char *)v15 + *((_DWORD *)v1 + 13));
      ++v12;
    }
    while ( v12 < *((_DWORD *)v1 + 9) );
  }
}
