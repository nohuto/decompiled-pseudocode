/*
 * XREFs of ?ConvertColor@D2DUtil@@YA?AU_D3DCOLORVALUE@@KM@Z @ 0x18037FC6C
 * Callers:
 *     ?_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z @ 0x180380E68 (-_RenderText@CSwitchItemElement@@IEAAJAEBUD2D_RECT_F@@PEAUID2D1DeviceContext@@@Z.c)
 *     _lambda_75d12933469d574ec35b52b770ab7fc4_::operator() @ 0x1803890A8 (_lambda_75d12933469d574ec35b52b770ab7fc4_--operator().c)
 *     _lambda_3620ca84e17db7610b457f2d5c27bd2d_::operator() @ 0x180391880 (_lambda_3620ca84e17db7610b457f2d5c27bd2d_--operator().c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall D2DUtil::ConvertColor(
        struct _D3DCOLORVALUE *this,
        struct _D3DCOLORVALUE *__return_ptr retstr,
        float a3,
        float a4)
{
  struct _D3DCOLORVALUE *result; // rax
  float v5[6]; // [rsp+0h] [rbp-18h]

  v5[3] = a3;
  v5[0] = (float)(((unsigned __int16)retstr & 0xFF00 | ((unsigned __int8)retstr << 16) | (unsigned int)BYTE2(retstr)) >> 16)
        / 255.0;
  v5[1] = (float)(unsigned __int8)((unsigned __int16)((unsigned __int16)retstr & 0xFF00) >> 8) / 255.0;
  result = this;
  v5[2] = (float)BYTE2(retstr) / 255.0;
  *(struct _D3DCOLORVALUE *)&this->r = *(struct _D3DCOLORVALUE *)v5;
  return result;
}
