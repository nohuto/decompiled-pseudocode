/*
 * XREFs of ?GetShaderResourceView@CD2DBitmap@@$4PPPPPPPM@A@EAAPEAUID3D11ShaderResourceView@@XZ @ 0x1800ED7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ID3D11ShaderResourceView *__fastcall CD2DBitmap::GetShaderResourceView(__int64 a1)
{
  return CD2DBitmap::GetShaderResourceView((CD2DBitmap *)(a1 - *(int *)(a1 - 4)));
}
