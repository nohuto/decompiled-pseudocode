/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YGXPAU_GLYPHBITS@@IPAEI@Z @ 0x1D5252
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _draw_gray_nf_ntb_o_to_temp_start@28 @ 0xA3B22 (_draw_gray_nf_ntb_o_to_temp_start@28.c)
 *     _draw_gray_f_ntb_o_to_temp_start@28 @ 0x1D54AB (_draw_gray_f_ntb_o_to_temp_start@28.c)
 * Callees:
 *     <none>
 */

void __stdcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // ecx
  unsigned int v5; // ebx
  unsigned __int8 *v6; // esi
  unsigned __int8 *v7; // edx
  BYTE *v8; // edi
  unsigned int v9; // ebx
  int v10; // esi
  unsigned __int8 *v11; // edi
  BYTE v12; // dl
  BYTE v13; // cl
  unsigned int v14; // [esp+8h] [ebp-1Ch]
  unsigned __int8 *v15; // [esp+Ch] [ebp-18h]
  BYTE *v16; // [esp+18h] [ebp-Ch]
  BYTE *v17; // [esp+1Ch] [ebp-8h]
  unsigned __int8 *v18; // [esp+20h] [ebp-4h]
  BYTE v19; // [esp+2Fh] [ebp+Bh]
  unsigned __int8 *v20; // [esp+34h] [ebp+10h]

  aj = a1->aj;
  v5 = (unsigned int)a1->sizlBitmap.cx >> 1;
  v14 = v5;
  v17 = a1->aj;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  v15 = v6;
  if ( a3 < v6 )
  {
    v7 = a3 + 1;
    v8 = &a1->aj[1];
    v18 = a3 + 1;
    v16 = &a1->aj[1];
    do
    {
      v20 = 0;
      v19 = *aj;
      *(v7 - 1) |= *aj >> 4;
      if ( (&v7[v5] >= v7 ? v5 : 0) != 0 )
      {
        v9 = &v7[v5] >= v7 ? v5 : 0;
        v10 = v8 - v7;
        v11 = v7;
        v12 = v19;
        do
        {
          v13 = v12;
          v12 = v11[v10];
          *v11++ |= (v12 >> 4) | (unsigned __int8)(16 * v13);
          ++v20;
        }
        while ( (unsigned int)v20 < v9 );
        v7 = v18;
        v6 = v15;
        v8 = v16;
        v5 = v14;
        aj = v17;
      }
      v7 += a4;
      aj += a2;
      v8 += a2;
      v18 = v7;
      v17 = aj;
      v16 = v8;
    }
    while ( v7 - 1 < v6 );
  }
}
