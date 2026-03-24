/*
 * XREFs of ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x18002BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18002BB7C (--1CD3DPixelShader@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 */

CD3DPixelShader *__fastcall CD3DPixelShader::`vector deleting destructor'(CD3DPixelShader *this, char a2)
{
  CD3DPixelShader::~CD3DPixelShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x90uLL);
  return this;
}
