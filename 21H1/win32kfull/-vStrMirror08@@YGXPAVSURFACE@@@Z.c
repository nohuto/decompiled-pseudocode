/*
 * XREFs of ?vStrMirror08@@YGXPAVSURFACE@@@Z @ 0x22A7CB
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vStrMirror08(char **a1)
{
  struct SURFACE *v1; // esi
  char *v2; // edi
  int v3; // edx
  int v4; // ecx
  char *v5; // ebx
  int v6; // edx
  char *v7; // esi
  char v8; // cl
  int v9; // [esp+8h] [ebp-Ch]
  int v10; // [esp+10h] [ebp-4h]

  v1 = (struct SURFACE *)a1;
  v2 = a1[12];
  v3 = 0;
  v10 = 0;
  v4 = (int)a1[8] / 2;
  v9 = v4;
  if ( (int)a1[9] > 0 )
  {
    do
    {
      v5 = v2;
      if ( v4 > 0 )
      {
        v6 = v4;
        v7 = &v2[*((_DWORD *)v1 + 8) - 1];
        do
        {
          v8 = *v5;
          *v5++ = *v7;
          *v7-- = v8;
          --v6;
        }
        while ( v6 );
        v1 = (struct SURFACE *)a1;
        v3 = v10;
        v4 = v9;
      }
      v2 += *((_DWORD *)v1 + 13);
      v10 = ++v3;
    }
    while ( v3 < *((_DWORD *)v1 + 9) );
  }
}
