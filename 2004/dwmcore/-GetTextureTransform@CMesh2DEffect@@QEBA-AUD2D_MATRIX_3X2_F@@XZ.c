/*
 * XREFs of ?GetTextureTransform@CMesh2DEffect@@QEBA?AUD2D_MATRIX_3X2_F@@XZ @ 0x1800DF668
 * Callers:
 *     ??$ValueGetter@P8CMesh2DEffect@@EBA?AUD2D_MATRIX_3X2_F@@XZ$H?GetTextureTransform@1@QEBA?AU2@XZA@UID2D1EffectImpl@@@@YAJPEBUIUnknown@@PEAEIPEAI@Z @ 0x18026A810 (--$ValueGetter@P8CMesh2DEffect@@EBA-AUD2D_MATRIX_3X2_F@@XZ$H-GetTextureTransform@1@QEBA-AU2@XZA@.c)
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_3X2_F *__fastcall CMesh2DEffect::GetTextureTransform(
        FLOAT *this,
        struct D2D_MATRIX_3X2_F *__return_ptr retstr)
{
  retstr->m11 = this[24];
  retstr->m21 = this[25];
  retstr->dx = this[26];
  retstr->m12 = this[28];
  retstr->m22 = this[29];
  retstr->dy = this[30];
  return retstr;
}
