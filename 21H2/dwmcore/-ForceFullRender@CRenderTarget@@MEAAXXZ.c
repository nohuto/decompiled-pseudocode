/*
 * XREFs of ?ForceFullRender@CRenderTarget@@MEAAXXZ @ 0x1800F9AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::ForceFullRender(CRenderTarget *this)
{
  *((_BYTE *)this + 141) = 1;
}
