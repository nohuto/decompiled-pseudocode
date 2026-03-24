/*
 * XREFs of ?GetPixelColor@CSystemMemoryBitmap@@UEBA?AU_D3DCOLORVALUE@@AEBUD2D_POINT_2U@@@Z @ 0x180217700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CSystemMemoryBitmap::GetPixelColor(
        CSystemMemoryBitmap *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        const struct D2D_POINT_2U *a3)
{
  __int64 v3; // rbx
  int v5; // r11d
  UINT32 y; // ecx
  unsigned __int8 *v7; // r8
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax

  v3 = *((_QWORD *)this + 1);
  *(_OWORD *)&retstr->r = 0LL;
  if ( v3 )
  {
    v5 = *((_DWORD *)this - 14);
    if ( (unsigned int)(v5 - 87) <= 1 && a3->x < *((_DWORD *)this - 18) )
    {
      y = a3->y;
      if ( y < *((_DWORD *)this - 17) )
      {
        v7 = (unsigned __int8 *)(v3 + y * *((_DWORD *)this + 4) + 4 * a3->x);
        v8 = v7[1];
        retstr->b = GammaLUT_sRGB_to_scRGB[*v7] / 255.0;
        v9 = GammaLUT_sRGB_to_scRGB[v8];
        v10 = v7[2];
        retstr->g = v9 / 255.0;
        retstr->r = GammaLUT_sRGB_to_scRGB[v10] / 255.0;
        if ( v5 != 87 || *((_DWORD *)this - 13) == 3 )
          retstr->a = 1.0;
        else
          retstr->a = (float)v7[3] / 255.0;
      }
    }
  }
  return retstr;
}
