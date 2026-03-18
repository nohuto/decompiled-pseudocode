/*
 * XREFs of ?vOrNonAlignedGrayGlyphEven@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D51C0
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

void __stdcall vOrNonAlignedGrayGlyphEven(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // edi
  unsigned __int8 *v5; // edx
  int v6; // ebx
  unsigned __int8 *v7; // eax
  BYTE *v8; // ecx
  BYTE *v9; // edi
  unsigned __int8 *v10; // esi
  unsigned __int8 v11; // bl
  unsigned int v12; // edi
  int v13; // edx
  char v14; // al
  BYTE *v15; // [esp+8h] [ebp-10h]
  unsigned __int8 *v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+14h] [ebp-4h]
  struct _GLYPHBITS *v18; // [esp+20h] [ebp+8h]

  aj = a1->aj;
  v5 = a3;
  v6 = (a1->sizlBitmap.cx + 1) / 2;
  v17 = v6;
  v7 = &a3[a4 * a1->sizlBitmap.cy];
  v16 = v7;
  if ( a3 < v7 )
  {
    do
    {
      v18 = 0;
      v8 = aj;
      v9 = &aj[v6];
      v10 = v5;
      v11 = 0;
      v15 = v9;
      v12 = v9 >= v8 ? v17 : 0;
      if ( v12 )
      {
        v13 = v8 - v5;
        do
        {
          v14 = 16 * v11 + (v10[v13] >> 4);
          v11 = v10[v13];
          *v10++ |= v14;
          v18 = (struct _GLYPHBITS *)((char *)v18 + 1);
        }
        while ( (unsigned int)v18 < v12 );
        v5 = a3;
        v7 = v16;
      }
      v5 += a4;
      aj = v15;
      *v10 |= 16 * v11;
      v6 = v17;
      a3 = v5;
    }
    while ( v5 < v7 );
  }
}
